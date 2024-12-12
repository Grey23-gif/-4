#include <stdio.h>

int main() {
     float luong, gio;
     float tong;

    printf("Nhap luong cua nhan vien: ");
    scanf("%f",&luong); 

    printf("Nhap gio lam cua nhan vien: ");
    scanf("%f",&gio);
    
    tong=luong*gio;
    if(gio>160)
    {
        tong += luong * gio * 10/100;
    }
    
    printf("Tong luong cua nhan vien: %.1f "  ,tong ) ;

    return 0;
}