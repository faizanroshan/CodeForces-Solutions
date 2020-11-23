#include <stdio.h>

int oddOneOut (int numbers[], int size);
int main() {
    
    int size;
    scanf("%d", &size);
    
    int numbers[size];
    for(int index = 0; index < size; index++) {
        
        scanf("%d", &numbers[index]);
    }
    
    int result = oddOneOut(numbers, size);
    printf("%d", result);
}

int oddOneOut(int numbers[], int size) {
    
    int evenCount = 0, oddCount = 0;
    int evenIndex = -1, oddIndex = -1;
    for(int index = 0; index < size; index++) {
        
        if(numbers[index] % 2 == 0) {
              
            evenCount++;
            evenIndex = index;
             
        }
        else {
            
            oddCount++;
            oddIndex = index;
        }            
    }
    
    if(evenCount == 1)
        return evenIndex + 1;
    else if(oddCount == 1)
        return oddIndex + 1;
}
