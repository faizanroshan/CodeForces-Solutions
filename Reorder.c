#include <stdio.h>

int main() {
    
    int testCases = 0;
    scanf("%d", &testCases);
    while(testCases--) {
        
        int size, m;
        scanf("%d%d", &size, &m);
        int arr[size];
        int sum = 0;
        
        for(int index = 0; index < size; index++) {
            
            scanf("%d", &arr[index]);
            sum += arr[index];
        }
        
        
        if(m == sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
