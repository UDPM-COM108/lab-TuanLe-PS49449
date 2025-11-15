// Bài 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
#include <stdio.h>
int main(){
  // Khai báo hai số nguyên x và y
  int x, y;
  int tong, hieu;

  printf("--- BAI 1: CHUONG TRINH CONG TRU HAI SO NGUYEN ---\n");

  // Nhập Input
  printf("Nhap so nguyen x:");
  scanf("%d", &x);
  printf("Nhap so nguyen y:");
  scanf("%d", &y);

  // Tính toán
  tong = x + y;
  hieu = x - y;

  // Hiển thị Output
  printf("\n--- KET QUA ---\n");
  printf("Tong (%d + %d) la: %d\n", x, y, tong);
  printf("Hieu (%d - %d) la: %d\n", x, y, hieu);
  
  return 0;
}


