// Bai 1: Dem nguyen am va phu am
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void bai1(){
  char str[200];
  int vowel = 0, consonant = 0;

  printf("Nhap chuoi: ");
  fgets(str, sizeof(str), stdin);

  for (int i = 0; str[i] != '\0'; i++)
  {
    char c = tolower(str[i]);
    if (isalpha(c))
    {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        vowel++;
      else
        consonant++;
    }
  }

  printf("So nguyen am: %d\n", vowel);
  printf("So phu am: %d\n", consonant);
}


// Bai 2: Chương trình đăng nhập
void bai2()
{
  char username[50], password[50];
  char user_correct[] = "admin";
  char pass_correct[] = "123456";

  printf("Nhap username: ");
  scanf("%s", username);

  printf("Nhap password: ");
  scanf("%s", password);

  if (strcmp(username, user_correct) == 0 && strcmp(password, pass_correct) == 0)
  {
    printf("Dang nhap thanh cong!\n");
  }
  else
  {
    printf("Dang nhap that bai!\n");
  }
}

// Bai 3: Tìm kí tự xuất hiện hơn 2 lần trong chuỗi
void bai3()
{
  char str[200];
  int freq[256] = {0};

  getchar(); // Xóa bộ nhớ đệm sau scanf ở bài 2
  printf("Nhap chuoi bat ky: ");
  fgets(str, sizeof(str), stdin);

  for (int i = 0; str[i] != '\0'; i++)
  {
    unsigned char c = str[i];
    freq[c]++;
  }

  printf("Cac ky tu xuat hien hon 2 lan:\n");
  for (int i = 0; i < 256; i++)
  {
    if (freq[i] > 2 && i != '\n')
    {
      printf("'%c' xuat hien %d lan\n", i, freq[i]);
    }
  }
}
