// // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
#include <stdio.h>
int main()
{
  // Khai báo biến. Dùng float/double để xỷ lý số thập phân.
  double chieu_dai, chieu_rong;
  double chu_vi, dien_tich;

  printf("--- BAI 2: CHUONG TRINH CHU VI & DIEN TICH HCN ---\n");

  // Nhập Input
  printf("Nhap chieu dai: ");
  if (scanf("%lf", &chieu_dai) != 1)
    return 1;
  printf("Nhap chieu rong: ");
  if (scanf("%lf", &chieu_rong) != 1)
    return 1;

  // Tính toán
  // Chu vi: P = (d + r) * 2
  chu_vi = (chieu_dai + chieu_rong) * 2;
  // Diện tích: S = d * r
  dien_tich = chieu_dai * chieu_rong;

  // Hiển thị Output
  printf("\n--- KET QUA ---\n");
  printf("Chu vi HCN la: %f\n", chu_vi);
  printf("Dien tich HCN la: %f\n", dien_tich);

  return 0;
}