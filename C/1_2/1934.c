#include <stdio.h>

int main(){
	int n, a, b, c, gcd, lcm;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d %d", &a, &b);
		for (int j = 1; j <= a && j <= b; j++){
			if (a % j == 0 && b % j ==0){
				gcd = j;	
			}
		}
		
		lcm = (a * b) / gcd;

		printf("%d\n", lcm);
	}
	return 0;
}