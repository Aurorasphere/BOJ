#include <stdio.h>

long long int gcd(long long int a, long long int b){
	if (b == 0)
		return a;
	else
		return gcd(b, (a % b));
}

int main(){
	long long int a = 0, b = 0, lcm = 0;
	scanf("%lld %lld", &a, &b);
	lcm = (a * b) / gcd(a, b); 
	printf("%lld", lcm);
	return 0;
}