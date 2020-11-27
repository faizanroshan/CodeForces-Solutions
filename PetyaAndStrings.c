#include <stdio.h>
#include <ctype.h>

int main() {
		
	char string1[100];
	char string2[100];
	
	scanf("%s", string1);
	scanf("%s", string2);
	int flag  = 0;
	
	for (int index = 0; index < 100 && string1[index] != '\0' && string2[index] != '\0'; index++) {
		
		if(tolower(string1[index]) > tolower(string2[index])) {
			
			flag = 1;
			break;
		}
		else if(tolower(string1[index]) < tolower(string2[index])) {
		
			flag = -1;
			break;
		}
		else
			continue;
	}
	printf("%d", flag);
}
