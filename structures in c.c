#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int rollno;
    float mark;
    char city[20];
    char dream[20];
};

void read(struct student S[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%19s", S[i].name);

        printf("Enter the roll number: ");
        scanf("%d", &S[i].rollno);

        printf("Enter the marks: ");
        scanf("%f", &S[i].mark);

        printf("Enter the city: ");
        scanf("%19s", S[i].city);

        printf("Enter the dream: ");
        scanf("%19s", S[i].dream);
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
        printf("Student mark: %.2f\n", S[i].mark);
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

Note: This program accepts 10 students. For names, cities, or dreams containing spaces, the input method needs a small change.
