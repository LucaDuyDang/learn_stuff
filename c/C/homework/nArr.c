#include <stdio.h>

int nuGlobal;   // khai báo biến số nguyên duyệt toàn cục , nên sử dụng trong hàm main để cố định truy cập
int n[3];       // array số nguyên bao gồm 3 phần tử
void findArr(); // sử dụng function tạo vòng lặp duyệt qua các giá trị

int main()
{
    printf("input 3 numbers\n");                            // yêu cầu input
    scanf("%d", &n[0]);                                     // input array
    findArr();                                              // gọi function
    printf("The large number in array is %d \n", nuGlobal); // trả kết quả
}

void findArr()
{
    int length = sizeof(n) / sizeof(n[0]); // lấy độ dài array

    for (int i = 1; i < length; i++)
    {
        scanf("%d", &n[i]); // scan array
        if (n[i] > n[i - 1])
        // ở đây n[i] chính là n[0] giá trị đầu tiên của mãng
        // nếu n lớn hơn n -1 thì lấy giá trị n cho nuGlobal
        {
            nuGlobal = n[i];
        }
        // nếu ngược lại thì thay đổi giá trị n - 1 cho nuGlobal
        else
        {
            nuGlobal = n[i - 1];
        }
    }
}