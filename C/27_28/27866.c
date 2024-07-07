#include <stdio.h>

int main(){
	int num;
	char a[1001] = {0,};
	
	scanf("%s", a);
	scanf("%d", &num);
	printf("%c", a[num - 1]);

	return 0;
}
