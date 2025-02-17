#include <stdio.h>
#include <strings.h>

int main()
{
    char stringExam[100];
    char stringExamTwo[100];
    char stringExamThree[100];

    // example about string Length (aka.strlen())
    printf("Enter Info for String One \n");
    fgets(stringExam, sizeof(stringExam), stdin);
    stringExam[strcspn(stringExam, "\n")] = '\0';
    printf("String one : %s \n", stringExam);
    printf("%lu\n", strlen(stringExam)); // length of a strings
    printf("%lu", sizeof(stringExam));   // show length strings with bytes above setting array

    return 0;
}