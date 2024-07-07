#include <stdio.h>

long long factorial(int a){
	if (a == 0) return 1;
	else return a * factorial(a - 1);
}

int main(){
	long long i;
	scanf("%lld", &i);
	printf("%lld", factorial(i));

	return 0;
}