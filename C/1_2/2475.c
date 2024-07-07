#include <stdio.h>
#define square(x) (x)*(x)

int main(){
	int sum = 0, num[5];
	for (int i = 0; i <= 4; i++){
		scanf("%d", &num[i]);
	}

	for (int j = 0; j <= 4; j++){
		sum += square(num[j]);
	}

	printf("%d\n", sum % 10);

	return 0;
}