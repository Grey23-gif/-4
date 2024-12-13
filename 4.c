#include <stdio.h>

int main() 
{
    int n;
    do {
        printf("Nhap so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Nhap lai so lon hon 0.\n");
        }
    } while (n <= 0);
    if(n>0)
    {
    printf("Cac uoc so cua %d là: ", n);

    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
}