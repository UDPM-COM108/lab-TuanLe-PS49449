/* Bai 1: XAY DUNG CHUONG TRINH TINH HOC LUC
   (kept as comment; not compiled) 
#include <stdio.h>

int main_example1(void) {
    double dtb;
    printf("Nhap diem trung binh:");
    if (scanf("%lf", &dtb) != 1) return 1;
    if (dtb >= 9) {
        printf("Xuat sac");
    } else if (dtb >= 8) { // khoi lenh 2 dong tro lenh
        printf("Gioi");
    } else if (dtb >= 7) {
        printf("Kha");
    } else if (dtb >= 5) {
        printf("Trung binh");
    } else {
        printf("Yeu!!");
    }
    return 0;
}
*/

// Bai 2: GIAI PHUONG TRINH BAC NHAT //
// #include <stdio.h>

// int main() {
//     float a, b;
//     printf("Nhap a, b: ");
//     if (scanf("%lf %lf", &a, &b) !=1) return 1;
//     if (a == 0) {
//         if (b == 0)
//             printf("Phuong trinh vo so nghiem\n");
//         else 
//             printf("Phuong trinh vo nghiem\n");
//     } else {
//         float x = -b / a;
//         printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
//     }
//     return 0;
// }

// // Bai 3: GIAI PHUONG TRINH BAC HAI //
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float a, b, c;
//     printf("Nhap a, b, c: ");
//     if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
//     if (a == 0) {
//         // PT trở thành bậc nhất
//         if (b == 0) {
//             if (c == 0)
//                 printf("Phuong trinh vo so nghiem\n");
//             else
//                 printf("Phuong trinh vo nghiem\n");
//         } else {
//             float x = -c / b;
//             printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
//         }
//     } else {
//         float delta = b * b - 4 * a * c;
//         if (delta < 0)
//             printf("Phuong trinh vo nghiem\n");
//         else if (delta == 0) {
//             float x = -b / (2 * a);
//             printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
//         } else {
//             float x1 = (-b + sqrt(delta)) / (2 * a);
//             float x2 = (-b - sqrt(delta)) / (2 * a);
//             printf("Phuong trinh co hai nghiem rieng biet:\n");
//             printf("x1 = %.2f\n", x1);
//             printf("x2 = %.2f\n", x2);
//         }
//     }
//     return 0;
// }


// Bai 4: TINH TIEN LUONG NHAN VIEN //
#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac 1\n");
        printf("3. Giai phuong trinh bac 2\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        if (choice == 1) {
            float dtb;
            printf("Nhap diem trung binh: ");
            scanf("%f", &dtb);

            if (dtb >= 9)
                printf("Hoc luc: Xuat Sac\n");
            else if (dtb >= 8)
                printf("Hoc luc: Gioi\n");
            else if (dtb >= 6.5)
                printf("Hoc luc: Kha\n");
            else if (dtb >= 5)
                printf("Hoc luc: Trung Binh\n");
            else
                printf("Hoc luc: Yeu\n");
        } else if (choice == 2) {
            float a, b;
            printf("Nhap a, b: ");
            scanf("%f %f", &a, &b);

            if (a == 0) {
                if (b == 0)
                    printf("Phuong trinh vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            } else {
                printf("Nghiem: x = %.2f\n", -b / a);
            }
        } else if (choice == 3) {
            float a, b, c;
            printf("Nhap a, b, c: ");
            if (scanf("%f %f %f", &a, &b, &c) != 3) return 1;
            if (a == 0) {
                if (b == 0) {
                    if (c == 0)
                        printf("Phuong trinh vo so nghiem\n");
                    else
                        printf("Phuong trinh vo nghiem\n");
                } else {
                    printf("Nghiem: x = %.2f\n", -c / b);
                }
            } else {
                float delta = b * b - 4 * a * c;
                if (delta < 0)
                    printf("Phuong trinh vo nghiem\n");
                else if (delta == 0)
                    printf("Nghiem kep: x = %.2f\n", -b / (2 * a));
                else {
                    float x1 = (-b + sqrt(delta)) / (2 * a);
                    float x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
                }
            }
        }
    } while (choice != 4);
    return 0;
}
