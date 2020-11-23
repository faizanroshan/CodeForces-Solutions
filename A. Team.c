#include <stdio.h>

int main() {
    
    int testCases;
    scanf("%d", &testCases);
    
    int arr[3];
    int questions = 0;
    
    while(testCases--) {
        
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        
        int sum = arr[0] + arr[1] + arr[2];
        if(sum >= 2)
            questions++;
    }
    
    printf("%d", questions);
}