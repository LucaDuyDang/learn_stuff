#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for (j = 0; j <= 3; j++)
    {
        std::cout << "Line==========" << std::endl;
        for (i = 0; i < 5; i++)
        {
            if (i == 3)
            {
                break;
            }
            std::cout << "Hello" << std::endl;
            if (j == 5)
                ;
            {
                std::cout << "hi" << std::endl;
            }
        }
    }
    return 0;
}