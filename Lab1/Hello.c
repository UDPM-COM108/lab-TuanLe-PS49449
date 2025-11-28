#include <stdio.h> // Thư viện

int main()
{
  // printf("Hello World"); // xuat ra man hinh Hello World
  // // printf("\nHello World");
  int a, b;
  printf("Nhap a va b:");
  printf("%d %d", &a, &b);
  printf("Nhap vao ten toi:");
  scanf("%s",a);
  printf("\nXin chao toi ten la: %s",a);
  return 0;
}
