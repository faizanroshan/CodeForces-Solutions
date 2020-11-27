/*
	Source: https://codeforces.com/contest/263/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int arr[6][6];
    int spRow, spCol;
    
    for(int row = 1; row < 6; row++) {
        
        for(int col = 1; col < 6; col++) {
            
            int temp;
            scanf("%d", &temp);
            arr[row][col] = temp;
            
            if(temp == 1) {
                
                spRow = row;
                spCol = col;
            }     
        }
    }
    int op = abs(spRow - 3) + abs(spCol - 3);
    printf("%d", op);  
}
