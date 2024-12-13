#include <stdio.h>

int main() 
{
    int number,dem=0;
    do {
        printf("Nhap so nguyen duong: ");
        scanf("%d", &number);

        if (number <= 0) 
        {
            printf("Nhap lai so lon hon 0.\n");
        }
    } 
    while (number <= 0);
    
    for (int i = 1; i <= number; i++) 
    {
        if (number % i == 0) 
        {
            dem++;
        }
    }
    if(dem ==2)
    {
        printf("so %d la so nguyen to. ",number);
    }
    else
    {
        printf("so %d khong phai la so nguyen to. ",number);
    }

    return 0;
}
