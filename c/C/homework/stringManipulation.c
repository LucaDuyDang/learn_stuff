#include <stdio.h>
#include <string.h>

int main()
{
    char enTer[100];

    printf("Bring Out Put Here\n");
    // scanf("%s", enTer); // basis scanf using only for reading one first on a row
    // syntax making C for understand read a entire line including the space of string
    fgets(enTer, sizeof(enTer), stdin);
    printf("Strings: %s", enTer);

    enTer[strcspn(enTer, "\n")] = '\0'; // replace 'n' with '\0'

    char secondStrings[100];
    printf("Strings two \n");
    fgets(secondStrings, sizeof(secondStrings), stdin);

    secondStrings[strcspn(secondStrings, "\n")] = '\0';
    strcat(secondStrings, enTer); // using strcat to concatenate strings
    // printf("all string is : %s %s.", enTer, secondStrings);
    printf("Actual String cat %s ", secondStrings);
    return 0;
}