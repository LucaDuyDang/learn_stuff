#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

void updatePoint(Point *p)
{
    p->x += 10; // Thay đổi giá trị trực tiếp trong cấu trúc gốc
    p->y += 20;
}

int main()
{
    Point pt = {5, 15};

    printf("Before: x = %d, y = %d\n", pt.x, pt.y);
    updatePoint(&pt);                              // Truyền địa chỉ của cấu trúc
    printf("After: x = %d, y = %d\n", pt.x, pt.y); // Dữ liệu đã được cập nhật

    return 0;
}
