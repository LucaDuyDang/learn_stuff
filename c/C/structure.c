#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float gpa;
};

int main()
{

    struct Student student[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Insert Name %d ", i + 1);
        scanf("%s", student[i].name);
        printf("Insert Age :");
        scanf("%d", &student[i].age);
        printf("Insert GPA :");
        scanf("%f", &student[i].gpa);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n Sinh Vien : %d \n", i + 1);
        printf("Ten : %s \n", student[i].name);
        printf("Tuoi : %d \n", student[i].age);
        printf("Diem GPA : %.1f\n", student[i].gpa);
    }

    return 0;
}
