#include <iostream>

struct Con_nguoi
{
    Con_nguoi(int t, float v1, float cc)
    {
        tuoi = t;
        vong_mot = v1;
        chieu_cao = cc;
    }
    int tuoi;
    float vong_mot;
    float chieu_cao;
};

int main()
{
    Con_nguoi lan(22, 52, 1.65);
    Con_nguoi ngoc(27, 65, 1.6);
    Con_nguoi duong(24, 58, 1.7);

    Con_nguoi *bo_nhi;

    bo_nhi = &ngoc;

    std::cout << (*bo_nhi).tuoi << std::endl;

    return 0;
}