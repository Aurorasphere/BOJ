#include <stdio.h>

long long int gcd(long long int a, long long int b){
	if (b == 0)
		return a;
	else
		return gcd(b, (a % b));
}

int main(){
	long long int a = 0, b = 0, lcm = 0;
	int times = 0;
	scanf("%d", &times);

	for (int i = 0; i < times; i++){
		scanf("%lld %lld", &a, &b);
		lcm = (a * b) / gcd(a, b); 
		printf("%lld\n", lcm);
	}
	return 0;
}

