// https://codeforces.com/contest/118/problem/A
#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main() {
	
	char string[100];
	scanf("%s", string);
	int length = strlen(string);
    
    for(int index = 0; index < length; index++ ) {
        
        char ch = string[index];
        ch = tolower(ch);
        if( ch != 'a' && ch != 'e' && ch != 'y' && ch != 'i' && ch != 'o' && ch != 'u')
            printf(".%c", ch);
    }
}
