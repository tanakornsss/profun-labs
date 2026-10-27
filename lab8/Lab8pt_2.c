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
    struct student {
        char fname[32];
        char lname[32];
        int id;
        char phone[16];
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

        printf("Enter Phone: ");
        scanf("%s", current->phone);

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
                printf("Phone: %s\n", search.phone);
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
