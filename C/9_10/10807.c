#include <stdio.h>

int main(){
	int n, v = 0;
	int nums[101];
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &nums[i]);
	}
	scanf("%d", &v);

	int stuff = 0;
	for (int i = 0; i < n; i++){
		if (nums[i] == v){
			stuff++;	
		}
	}
	printf("%d", stuff);
	return 0;
}