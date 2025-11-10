// Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
#include <stdio.h>
int main()
{
  // Khai báo biến. Dùng double cho độ chính xác cao
  double ban_kinh;
  double chu_vi_hinh_tron, dien_tich_hinh_tron;
  // Sử dụng hằng số PI (M_PI) từ thư viện cmath (hoặc định nghĩa: const double PI = 3.14159;)
  const double PI = 3.14159;

  printf("--- BAI 3: CHUONG TRINH TINH CHU VI & DIEN TICH HINH TRON ---\n");

  // Nhập Input
  printf("Nhap ban kinh (r): ");
  if (scanf("%lf", &ban_kinh) != 1) {
    fprintf(stderr, "Gia tri nhap khong hop le.\n");
    return 1;
  }

  // Tính toán
  // Chu vi hình tròn: C = 2 * PI * r
  chu_vi_hinh_tron = 2 * PI * ban_kinh;
  // Diện tích hình tròn: A = PI * r^2
  dien_tich_hinh_tron = PI * ban_kinh * ban_kinh; // hoặc PI * pow(ban_kinh, 2);

  // Hiển thị Output
  printf("\n--- KET QUA ---\n");
  printf("Chu vi hinh tron (C) la: %.6f\n", chu_vi_hinh_tron);
  printf("Dien tich hinh tron (A) la: %.6f\n", dien_tich_hinh_tron);
  
  return 0;
}