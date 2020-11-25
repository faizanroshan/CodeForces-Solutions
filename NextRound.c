// https://codeforces.com/contest/158/problem/A
#include <stdio.h>
 
int main() {
    
    int participants, place;
    scanf("%d%d", &participants, &place);
    
    int list[participants];
    
    for(int index = 0; index < participants; index++) {
        
        scanf("%d", &list[index]);
    }
    
    int qualified = 0, score = list[place - 1];
        
    for ( int index = 0; index < participants; index++ ) {
        
        if(list[index] >= score && list[index] > 0)
            qualified++;
        else if(list[index] != score)
            break;
    }
    printf("%d", qualified);
    
}
