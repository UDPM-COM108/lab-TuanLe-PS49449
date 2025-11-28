// Bai 1: Tìm số lớn nhất trong 3 số đã cho
#include <stdio.h>

int main()
{
  int a, b, c, max;

  printf("Nhap vao 3 so: ");
  scanf("%d %d %d", &a, &b, &c);

  max = a; // giả sử a là lớn nhất

  if (b > max)
    max = b;
  if (c > max)
    max = c;

  printf("So lon nhat la: %d\n", max);

  return 0;
}

// Bài 2: Tính năm nhuận
#include <stdio.h>

int main()
{
  int year;

  printf("Nhap vao nam: ");
  scanf("%d", &year);

  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    printf("%d la nam nhuan.\n", year);
  else
    printf("%d khong phai nam nhuan.\n", year);

  return 0;
}

// Bài 3: Hoán vị 2 số x và y
#include <stdio.h>

int main()
{
  int x, y, temp;

  printf("Nhap x va y: ");
  scanf("%d %d", &x, &y);

  temp = x;
  x = y;
  y = temp;

  printf("Sau khi hoan vi: x = %d, y = %d\n", x, y);

  return 0;
}
