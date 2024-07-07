#include <stdio.h>

int main(){
	int n, sum = 1;

	while (1){
		if (n == -1){
			break;
		}
		else	{
			scanf("%d", &n);
			sum = sum + n;
		}
	}
	printf("%d", sum);
	return 0;
}