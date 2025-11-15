// // Bài 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
// #include <stdio.h>
// int main()
// {
//   // Khai báo hai số nguyên x và y
//   int x, y;
//   int tong, hieu;

//   printf("--- BAI 1: CHUONG TRINH CONG TRU HAI SO NGUYEN ---\n");

//   // Nhập Input
//   printf("Nhap so nguyen x:");
//   scanf("%d", &x);
//   printf("Nhap so nguyen y:");
//   scanf("%d", &y);

//   // Tính toán
//   tong = x + y;
//   hieu = x - y;

//   // Hiển thị Output
//   printf("\n--- KET QUA ---\n");
//   printf("Tong (%d + %d) la: %d\n", x, y, tong);
//   printf("Hieu (%d - %d) la: %d\n", x, y, hieu);

//   return 0;
// }

// // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
// #include <stdio.h>
// int main()
// {
//   // Khai báo biến. Dùng float/double để xỷ lý số thập phân.
//   double chieu_dai, chieu_rong;
//   double chu_vi, dien_tich;

//   printf("--- BAI 2: CHUONG TRINH CHU VI & DIEN TICH HCN ---\n");

//   // Nhập Input
//   printf("Nhap chieu dai: ");
//   if (scanf("%lf", &chieu_dai) != 1)
//     return 1;
//   printf("Nhap chieu rong: ");
//   if (scanf("%lf", &chieu_rong) != 1)
//     return 1;

//   // Tính toán
//   // Chu vi: P = (d + r) * 2
//   chu_vi = (chieu_dai + chieu_rong) * 2;
//   // Diện tích: S = d * r
//   dien_tich = chieu_dai * chieu_rong;

//   // Hiển thị Output
//   printf("\n--- KET QUA ---\n");
//   printf("Chu vi HCN la: %f\n", chu_vi);
//   printf("Dien tich HCN la: %f\n", dien_tich);

//   return 0;
// }

// Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
// #include <stdio.h>
// int main()
// {
//   // Khai báo biến. Dùng double cho độ chính xác cao
//   double ban_kinh;
//   double chu_vi_hinh_tron, dien_tich_hinh_tron;
//   // Sử dụng hằng số PI (M_PI) từ thư viện cmath (hoặc định nghĩa: const double PI = 3.14159;)
//   const double PI = 3.14159;

//   printf("--- BAI 3: CHUONG TRINH TINH CHU VI & DIEN TICH HINH TRON ---\n");

//   // Nhập Input
//   printf("Nhap ban kinh (r): ");
//   if (scanf("%lf", &ban_kinh) != 1)
//   {
//     fprintf(stderr, "Gia tri nhap khong hop le.\n");
//     return 1;
//   }

//   // Tính toán
//   // Chu vi hình tròn: C = 2 * PI * r
//   chu_vi_hinh_tron = 2 * PI * ban_kinh;
//   // Diện tích hình tròn: A = PI * r^2
//   dien_tich_hinh_tron = PI * ban_kinh * ban_kinh; // hoặc PI * pow(ban_kinh, 2);

//   // Hiển thị Output
//   printf("\n--- KET QUA ---\n");
//   printf("Chu vi hinh tron (C) la: %.6f\n", chu_vi_hinh_tron);
//   printf("Dien tich hinh tron (A) la: %.6f\n", dien_tich_hinh_tron);

//   return 0;
// }


// Bài 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
#include <stdio.h>

int main()
{
  // Khai báo biến
  double diem_toan, diem_ly, diem_hoa;
  double diem_trung_binh;
  printf("--- BAI 4: CHUONG TRINH TINH DIEM TRUNG BINH ---\n");

  // Hệ số của các môn
  const double he_so_toan = 3;
  const double he_so_ly = 2;
  const double he_so_hoa = 1;

  // Nhập Input
  printf("Nhap diem mon Toan (He so %.0f): ", he_so_toan);
  if (scanf("%lf", &diem_toan) != 1) { printf("Input khog hop le.\n"); return 1; }
  printf("Nhap diem mon Ly (He so %.0f): ", he_so_ly);
  if (scanf("%lf", &diem_ly) != 1) { printf("Input khog hop le.\n"); return 1; }
  printf("Nhap diem mon Hoa (He so %.0f): ", he_so_hoa);
  if (scanf("%lf", &diem_hoa) != 1) { printf("Input khog hop le.\n"); return 1; }

  // Tính toán
  // Tính điểm trung bình: (Diem_1 * HS_1 + Diem_2 * HS_2 + ...) / (HS_1 + HS_2 + ...)
  double tongDiemCoHeSo = (diem_toan * he_so_toan) +
                          (diem_ly * he_so_ly) +
                          (diem_hoa * he_so_hoa);

  int tongHeSo = (int)(he_so_toan + he_so_ly + he_so_hoa); // 3 + 2 + 1 = 6

  diem_trung_binh = tongDiemCoHeSo / tongHeSo;
  // Hiển thị Output
  printf("\n--- KET QUA ---\n");
  printf("Diem trung binh la: %.2f\n", diem_trung_binh);

  return 0;
}