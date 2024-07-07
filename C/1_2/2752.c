#include <stdio.h>

int main(){
  int a, b, c, reg;
  
  scanf("%d %d %d", &a, &b, &c);

  if (c < a){
    reg = a;
    a = c;
    c = reg;
  }
  if (b < a){
    reg = b;
    b = a;
    a = reg;
  }
  if (c < b){
    reg = b;
    b = c;
    c = reg;
  }
  printf("%d %d %d", a, b, c);
  return 0;
}
