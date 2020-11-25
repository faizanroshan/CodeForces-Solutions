// https://codeforces.com/contest/1030/problem/A

#include <stdio.h>
#include <string.h>
 
int main() {
	
	int testCases = 0;
	scanf("%d", &testCases);
	char difficulty[100] = "EASY";
	
    while(testCases > 0) {
        
        int temp;
        scanf("%d", &temp);
        if(temp == 1) {
            
            strcpy(difficulty, "HARD");
            break;
        }
        
        testCases--;
    }
	printf("%s", difficulty);
	return 0;
} 
