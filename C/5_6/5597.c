#include <stdio.h>

int main(){
	int student[30] = {0,};

	for (int i = 0; i < 28; i++){
		int a;
		scanf("%d", &a);
		student[a - 1]++;
	}

	for (int j = 0; j < 30; j++){
		if (student[j] == 0){
			printf("%d\n", j + 1);
		}
	}

	return 0;
}