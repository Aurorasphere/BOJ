#include <stdio.h>

int main(){
	char word[51];
	int length, vowels = 0;
	scanf("%d %s", &length, word);
	
	for (int i = 0; i < length; i++){
		if (word[i] == 'a' || 
		    word[i] == 'e' ||
		    word[i] == 'i' || 
		    word[i] == 'o' || 
		    word[i] == 'u'){
			vowels += 1;
		}
	}
	printf("%d", vowels);
	
	return 0;
}
