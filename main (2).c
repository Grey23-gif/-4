#include <stdio.h>

int main() 
{
     float soluong,tong;
     int choice;
     float usd_to_vnd = 23000; 
     float eur_to_vnd = 25000;
     float gbp_to_vnd = 29243;
     float jpy_to_vnd = 199.5;
    printf("Chọn loại chuyển đổi:\n");
    printf("1. USD sang VND\n");
    printf("2. EUR sang VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    
    printf("Nhập lựa chọn của bạn: ");
    scanf("%d", &choice);
    printf("Nhập số tiền cần đổi: ");
    scanf("%f", &soluong);

     switch(choice)
     {
         case 1:
            tong = soluong * usd_to_vnd;
            printf("%.2f USD = %.2f VND\n", soluong , tong);
            break;
        case 2:
            tong = soluong * eur_to_vnd;
            printf("%.2f EUR = %.2f VND\n", soluong, tong);
            break;
             case 3:
            tong = soluong * gbp_to_vnd;
            printf("%.2f GBP = %.2f VND\n", soluong, tong);
            break;
        case 4:
           tong = soluong * jpy_to_vnd;
            printf("%.2f JPY = %.2f VND\n", soluong, tong);
            break;
        case 5:
            tong = soluong / usd_to_vnd;
            printf("%.2f VND = %.2f USD\n",soluong, tong);
            break;
        case 6:
            tong = soluong / eur_to_vnd;
            printf("%.2f VND = %.2f EUR\n", soluong, tong);
            break;
        case 7:
            tong = soluong / gbp_to_vnd;
            printf("%.2f VND = %.2f GBP\n", soluong, tong);
            break;
        case 8:
            tong = soluong / jpy_to_vnd;
            printf("%.2f VND = %.2f JPY\n", soluong, tong);
            break;
        default:
            printf("Lựa chọn sai!\n");
    }
     

   
    return 0;
}