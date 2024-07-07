#include <stdio.h>

int main (){
	int score = 0, a;

	for (int i = 1; i <= 5; i++){
		scanf("%d", &a);
		score = score + a;
	}
	printf("%d", score);
	return 0;
}