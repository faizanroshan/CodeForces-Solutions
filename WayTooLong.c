#include <stdio.h>
#include <string.h>

int main() {

    char string[100];
    int testcases;
    scanf("%d", &testcases);
    
    while(testcases--) {
            
        scanf("%s", string);
        int length = strlen(string);
        if ( length > 10 )
            printf("%c%d%c\n", string[0], length-2, string[length-1]);
        else
            printf("%s\n", string);
    }
}
