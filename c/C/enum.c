#include <stdio.h>

// Định nghĩa enum cho các ngày trong tuần
enum Day
{
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main()
{
    enum Day today = WEDNESDAY;

    if (today == WEDNESDAY)
    {
        printf("Today is Wednesday!\n");
    }

    return 0;
}
