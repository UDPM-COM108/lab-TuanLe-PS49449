// BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3
#include <stdio.h>

int main()
{
  int n;

  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &n);

  int arr[n];
  printf("Nhap %d phan tu:\n", n);
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  int tong = 0, dem = 0;

  printf("\nCac so chia het cho 3: ");
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 3 == 0)
    {
      printf("%d ", arr[i]);
      tong += arr[i];
      dem++;
    }
  }

  if (dem > 0)
  {
    float trungBinh = (float)tong / dem;
    printf("\n\nTrung binh cac so chia het cho 3: %.2f\n", trungBinh);
  }
  else
  {
    printf("\n\nKhong co so nao chia het cho 3 trong mang!\n");
  }

  return 0;
}

// BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT
#include <stdio.h>

int main()
{
  int n;

  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &n);

  int arr[n];
  printf("Nhap %d phan tu:\n", n);
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  int min = arr[0];
  int max = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  printf("\nGia tri nho nhat trong mang: %d\n", min);
  printf("Gia tri lon nhat trong mang: %d\n", max);

  return 0;
}