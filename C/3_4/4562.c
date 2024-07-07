#include <stdio.h>

int main(){
	int a, b, count;

	scanf("%d", &count);
	for (int i = 1; i <= count; i++){
		scanf("%d %d", &a, &b);
		if (a < b){
			printf("NO BRAINS\n");
		}
		else {
			printf("MMM BRAINS\n");
		}
	}
	return 0;
}