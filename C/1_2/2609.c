#include <stdio.h>

int main(){
	int a, b, c, gcd, lcm;
	scanf("%d %d", &a, &b);
	
	for (int i = 1; i <= a && i <= b; i++){
		if (a % i == 0 && b % i ==0){
			gcd = i;	
		}
	}
	lcm = (a * b) / gcd;

	printf("%d\n", gcd);
	printf("%d\n", lcm);

	return 0;
}