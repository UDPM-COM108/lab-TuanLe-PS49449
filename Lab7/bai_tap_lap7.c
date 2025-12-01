// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char str[100];
  int nguyenAm = 0, phuAm = 0;

  printf("Nhap chuoi: ");
  fgets(str, sizeof(str), stdin);

  for (int i = 0; i < strlen(str); i++)
  {
    char ch = tolower(str[i]);
    if ((ch >= 'a' && ch <= 'z'))
    { // kiểm tra có phải chữ cái không
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        nguyenAm++;
      else
        phuAm++;
    }
  }

  printf("So nguyen am: %d\n", nguyenAm);
  printf("So phu am: %d\n", phuAm);

  return 0;
}

// BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
#include <stdio.h>
#include <string.h>

int main()
{
  char user[30], pass[30];
  char userDung[] = "admin";
  char passDung[] = "12345";

  printf("Nhap username: ");
  scanf("%s", user);
  printf("Nhap password: ");
  scanf("%s", pass);

  if (strcmp(user, userDung) == 0 && strcmp(pass, passDung) == 0)
    printf("Dang nhap thanh cong!\n");
  else
    printf("Dang nhap khong thanh cong!\n");

  return 0;
}
