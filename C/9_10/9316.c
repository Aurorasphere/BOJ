#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for (int i = 1; a >= i; i++){
		printf("Hello World, Judge %d!\n", i);
	}
	return 0;
}