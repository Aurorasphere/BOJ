#include <stdio.h>

int main(){
  int a, x, y;
  int sum = 0;

  for (int i = 0; i < 4; i++){
    scanf("%d", &a);
    sum = sum + a;
  }

  x = sum / 60;
  y = sum - x * 60;

  printf("%d\n", x);
  printf("%d\n", y);
  return 0;
}