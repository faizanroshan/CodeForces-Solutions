// https://codeforces.com/contest/1454/problem/C
#include <stdio.h>

int checkSameValues(int arr[], int size);
int uniqueMinNumber(int freq[], int arr[], int size); 

int main() {

    int testCases;
    scanf("%d", &testCases);

    while(testCases--) {

        int participants = 0;
        scanf("%d", &participants);
        int arr[participants];
        int freq[participants+1];
        
        for(int index = 0; index < participants + 1; index++) 
            freq[index] = 0;

        for(int index = 0; index < participants; index++ ) {
            
            int temp = 0;
            scanf("%d", &temp);
            arr[index] = temp;
            freq[temp]++; 
        }
        
        // Different Case Evaluations starts
        if(participants == 1) {
            
            printf("1\n");
            continue;
        }

        // check if all elements are same.
        int checkSameNum = checkSameValues(arr, participants);
            if(checkSameNum == 1) {
                
                printf("-1\n");
                continue;
            }
        int winner = uniqueMinNumber(freq, arr, participants);
        printf("%d\n", winner);

    }
}

int checkSameValues(int arr[], int size) {

    /*
        return 1 if all elements are same
        return 0 otherwise
    */
    int flag = 1;
    for(int index = 0; index < size - 1; index++ ) {

            if(arr[index] != arr[index+1])
                flag = 0;
    }
    return flag;
}

int uniqueMinNumber(int freq[], int arr[], int size) {

    /*
        since every index represent a number between 1 to n in freq array. So,
        the value at their index gives us their frequency of occurence.
    */
    int winner = -1;
    for(int index = 1; index < size + 1; index++) {

        if(freq[index] == 1) {
            winner = index;
            break;
        }
            
    }
    
    // winner found, need to return his position in the array
    for(int index = 0; index < size; index++ ) {
        if(arr[index] == winner)
            return index+1;
    }
    
    return -1;
}
