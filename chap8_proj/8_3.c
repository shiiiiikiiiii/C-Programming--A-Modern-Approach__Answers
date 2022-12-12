#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter multiple numbers(<=0 to quit): ");
  scanf("%ld", &n);
  while (n > 0)
  {
      while (n > 0)
    {
      digit = n % 10;
      digit_seen[digit]++;
      n /= 10;
    }
    scanf("%ld", &n);
  }
  
  
  
  printf("repeated digit(s): ");
  for(int i = 0; i < 10; i++){
    if(digit_seen[i] >= 2){
        printf("%d ", i);
    }
  }

  return 0;
}