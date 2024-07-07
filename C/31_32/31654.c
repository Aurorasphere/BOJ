#include <stdio.h>

int main(){
	int a, b, sum;
	scanf("%d %d %d", &a, &b, &sum);
	if (a + b == sum) printf("correct!");
	else printf("wrong!");

	return 0;
}
