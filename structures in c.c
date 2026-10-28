#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int rollno;
    int mark;
    char city[20];
    char dream[20];
};

void read(struct student S[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", S[i].name);

        printf("Enter the roll number: ");
        scanf("%d", &S[i].rollno);

        printf("Enter the marks: ");
        scanf("%d", &S[i].mark);

        printf("Enter the city: ");
        scanf("%s", S[i].city);

        printf("Enter the dream: ");
        scanf("%s", S[i].dream);
    }
}

void display(struct student S[], int n)
{
    int i;

    printf("\n===== STUDENTS DETAILS =====\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent name: %s\n", S[i].name);
        printf("Student roll number: %d\n", S[i].rollno);
        printf("Student mark: %d\n", S[i].mark);
        printf("Student city: %s\n", S[i].city);
        printf("Student dream: %s\n", S[i].dream);
    }
}

int main(void)
{
    struct student S[10];

    read(S, 10);
    display(S, 10);

    return 0;
}
