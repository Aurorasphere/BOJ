#include <stdio.h>
#include <string.h>

int main(){
	char scream[1000] = {0,};
	char doctor[1000] = {0,};
	scanf("%s", scream);
	scanf("%s", doctor);
	if (strlen(scream) >= strlen(doctor)) printf("go");
	else printf("no");

	return 0;
}
