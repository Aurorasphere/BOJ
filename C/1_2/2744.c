#include <stdio.h>
#include <string.h>
int main(){
	char string[101];
	scanf("%s", string);
	for (int i; i< strlen(string); i++){
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 32;
		else if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
	}
	printf("%s", string);
	
	return 0;
}
