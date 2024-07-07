#include <stdio.h>

int main(){
  int x, y = 1;
  scanf("%d", &x);

  for(int i = 2; i <= x; i++){
    y *= i;
  }
  printf("%d\n", y);
  return 0;
}