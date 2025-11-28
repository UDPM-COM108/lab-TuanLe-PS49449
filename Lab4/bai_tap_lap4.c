#include <stdio.h>
#include <math.h>

// BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
void bai1_trung_binh_tong()
{
    int min, max;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("\n--- BAI 1: TRUNG BINH TONG CAC SO CHIA HET CHO 2 ---\n");
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }

    int i = min;

    while (i <= max)
    {
        if (i % 2 == 0)
        {
            tong += i;
            bienDem++;
        }
        i++;
    }

    if (bienDem > 0)
    {
        trungBinh = tong / bienDem;
        printf("Trung binh cong cac so chia het cho 2 tu %d den %d = %.2f\n",
               min, max, trungBinh);
    }
    else
    {
        printf("Khong co so chan nao trong khoang.\n");
    }
}

// Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
void bai2_xac_dinh_so_nguyen_to()
{
    int x, i, count = 0;

    printf("\n--- BAI 2: XAC DINH SO NGUYEN TO ---\n");
    printf("Nhap x: ");
    scanf("%d", &x);

    if (x <= 1)
    {
        printf("%d KHONG phai la so nguyen to.\n", x);
        return;
    }

    for (i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
        printf("%d LA so nguyen to.\n", x);
    else
        printf("%d KHONG la so nguyen to.\n", x);
}

// Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
void bai3_xac_dinh_so_chinh_phuong()
{
    int x;

    printf("\n--- BAI 3: XAC DINH SO CHINH PHUONG ---\n");
    printf("Nhap x: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("%d KHONG phai so chinh phuong.\n", x);
        return;
    }

    int can = sqrt(x);

    if (can * can == x)
        printf("%d LA so chinh phuong (%d * %d)\n", x, can, can);
    else
        printf("%d KHONG phai so chinh phuong.\n", x);
}

// Bài 4: XÂY DỰNG CHƯƠNG TRÌNH CHO CÁC BẠN TRÊN.
int main()
{
    int choice;

    do
    {
        printf("\n================= MENU =================\n");
        printf("1. Bai 1: Trung binh tong so chia het cho 2\n");
        printf("2. Bai 2: Xac dinh so nguyen to\n");
        printf("3. Bai 3: Xac dinh so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Chon bai: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bai1_trung_binh_tong();
            break;
        case 2:
            bai2_xac_dinh_so_nguyen_to();
            break;
        case 3:
            bai3_xac_dinh_so_chinh_phuong();
            break;
        case 0:
            printf("Thank You và hẹn gặp lại.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
