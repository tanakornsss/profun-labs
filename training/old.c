#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[20];
    char surname[20];
    float gpa;
};

void table(struct student *,int);
void menu(void);
void sort(struct student *,int,int);

int main(){
    int n,i,mn;
    printf("input number of student : ");
    scanf("%d",&n);
    struct student st[n],*s;
    s=st;
    for(i=0; i<n; i++,s++){
        printf("Enter student id : ");
        scanf("%d",&s->id);
        printf("Enter student name : ");
        scanf("%s",s->name);
        printf("Enter student surname : ");
        scanf("%s",s->surname);
        printf("Enter student gpa : ");
        scanf("%f",&s->gpa);
    }
    s=st;
    table(s,n);//table(s-=n,n);
    do{
        menu();
        scanf("%d",&mn);
        if(mn!=0&&mn!=1&&mn!=2) printf("try again\n");
        else if(mn==1||mn==2) s=st,sort(s,n,mn),table(s,n);

    }while(mn);
    printf("End Program");
    return 0;
}

void table(struct student *s,int n){
    int i;
    printf("output\n");
    for(i=0; i<n; i++,s++) printf("%d %s %s %.2f\n",s->id,s->name,s->surname,s->gpa);
}
void menu(void){
    printf("input menu 1 to ascending, 2 to descending, 0 to exit : ");
}
void sort(struct student *s,int n,int mn){
    int i,j;
    struct student temp;
    if(mn==1){
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(strcmp((s+i)->name,(s+j)->name)>0){
                    temp=*(s+i);
                    *(s+i)=*(s+j);
                    *(s+j)=temp;
                }
            }
        }
    }
    else{
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(strcmp((s+i)->name,(s+j)->name)<0){
                    temp=*(s+i);
                    *(s+i)=*(s+j);
                    *(s+j)=temp;
                }
            }
        }
    }
}