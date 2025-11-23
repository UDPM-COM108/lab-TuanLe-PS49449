//Bai 1: Tìm số lớn nhất trong 3 số đã cho 
#include <stdio.h>
#include <math.h>

int main(){
    printf("Nhap vao a,b,c: ");
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double x = sqrt(a);
    printf("Can bac 2 cua %lf", x);
    double max =a;
    if(max > b)
        max = a;
    else if(max < c)
        max = c;
    printf("\nMax la %lf", max);
    //printf("\nMin la %lf", fmin(fmin(a,b),c));
    return 0;
}

//Bài 2: Tính năm nhuận
#include <stdio.h>

int main() {
    int year;

    printf("Nhap nam: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d la nam nhuan\n", year);
    } else {
        printf("%d khong phai nam nhuan\n", year);
    }

    return 0;
}

