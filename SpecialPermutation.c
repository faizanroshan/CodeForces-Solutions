#include <stdio.h>
 
void randomize(int n) {
    
    int arr[n];
    int num = 1;
    
    for ( int index = 0; index < n; index++) {
        
        if(index != n-1) {
            
            arr[index] = num + 1;
            num++;
        }
            
        else if ( index == n-1)
            arr[index] = 1;
    }
    
    for ( int index = 0; index < n; index++) {
        
        printf("%d ", arr[index]);
    }
    printf("\n");
}
int main() {
	
	int testCases = 0;
	scanf("%d", &testCases);
	
	while(testCases--) {
	    
	    int test;
	    scanf("%d", &test);
	    
        randomize(test);
	}
}
