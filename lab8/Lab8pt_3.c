#include <stdio.h>

#define MAX_STUDENTS 5

char input_grade() {
    char grade;

    do {
        scanf(" %c", &grade);

        if (grade < 'A' || grade > 'F' || grade == 'E') {
            printf("Invalid grade! Please enter A-F.\n");
        }
    } while (grade < 'A' || grade > 'F' || grade == 'E');

    return grade;
}

int grade_mapper(char in) {
    switch (in) {
        case 'A':
            return 4;
            break;
        case 'B':
            return 3;
            break;
        case 'C':
            return 2;
            break;
        case 'D':
            return 1;
            break;
        case 'F':
            return 0;
            break;
    }

    return 0;
}

int main() {
    struct addr {
        char num[10];
        char road[16];
        char subdist[16];
        char dist[16];
        char province[16];
        int zip;
    };

    struct contact {
        char l_phone[12];
        char m_phone[12];
        char fax[12];
    };

    struct student {
        char fname[32];
        char lname[32];
        struct addr std_addr;
        struct contact std_contact;
        int id;
        char g_cp;
        char g_phy;
        char g_cal;
        char g_cb;
    };

    struct student std[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        struct student* current = std + i;

        printf("Student %d\n", i + 1);
        printf("==============================\n");

        printf("Enter First Name: ");
        scanf("%s", current->fname);

        printf("Enter Last Name: ");
        scanf("%s", current->lname);

        printf("Enter ID: ");
        scanf("%d", &current->id);

        printf("=== Contact Details ===\n");
        printf("Enter Landline Phone: ");
        scanf("%s", current->std_contact.l_phone);

        printf("Enter Mobile Phone: ");
        scanf("%s", current->std_contact.m_phone);

        printf("Enter Fax: ");
        scanf("%s", current->std_contact.fax);


        printf("=== Address Details ===\n");
        printf("Enter house number: ");
        scanf("%s", current->std_addr.num);

        printf("Enter road name: ");
        scanf("%s", current->std_addr.road);

        printf("Enter subdistrict: ");
        scanf("%s", current->std_addr.subdist);

        printf("Enter district: ");
        scanf("%s", current->std_addr.dist);

        printf("Enter province: ");
        scanf("%s", current->std_addr.province);

        printf("Enter ZIP code: ");
        scanf("%d", &current->std_addr.zip);


        printf("Enter Computer Programming Grade: ");
        current->g_cp = input_grade();

        printf("Enter Physics Grade: ");
        current->g_phy = input_grade();

        printf("Enter Calculus Grade: ");
        current->g_cal = input_grade();

        printf("Enter Computer Basics Grade: ");
        current->g_cb = input_grade();

        printf("\n\n");
    }

    int id_search;
    while (id_search != 0) {
        printf("Enter ID to search: ");
        scanf("%d", &id_search);

        int found = 0;
        for (int i = 0; i < MAX_STUDENTS; i++) {
            struct student search = *(std + i);

            if (id_search == search.id) {
                found = 1;

                printf("Student %d\n", i + 1);
                printf("==============================\n");

                printf("First Name: %s\n", search.fname);
                printf("Last Name: %s\n", search.lname);
                printf("ID: %d\n", search.id);

                printf("=== Contact Details ===\n");
                printf("Landline Phone: %s\n", search.std_contact.l_phone);
                printf("Mobile Phone: %s\n", search.std_contact.m_phone);
                printf("Fax: %s\n", search.std_contact.fax);

                printf("=== Address Details ===\n");
                printf("House number: %s\n", search.std_addr.num);
                printf("Road name: %s\n", search.std_addr.road);
                printf("Subdistrict: %s\n", search.std_addr.subdist);
                printf("District: %s\n", search.std_addr.dist);
                printf("Province: %s\n", search.std_addr.province);
                printf("ZIP code: %d\n", search.std_addr.zip);

                printf("Computer Programming Grade: %c\n", search.g_cp);
                printf("Physics Grade: %c\n", search.g_phy);
                printf("Calculus Grade: %c\n", search.g_cal);
                printf("Computer Basics Grade: %c\n", search.g_cb);

                int gpa_sum = 0;
                gpa_sum += grade_mapper(search.g_cp);
                gpa_sum += grade_mapper(search.g_phy);
                gpa_sum += grade_mapper(search.g_cal);
                gpa_sum += grade_mapper(search.g_cb);

                float gpa = gpa_sum / 4.0;

                printf("GPA: %.2f", gpa);

                printf("\n\n");
            }
        }

        if (found == 0) printf("Search not found\n");
    }

    return 0;
}
