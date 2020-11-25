#include <stdio.h>
 
void main() {
	
	int t;
	scanf("%d", &t);
 
	while(t--) {
	
		int x;
		scanf("%d", &x);
 
		if(x % 2 == 0 && x > 3)
			printf("2\n");
		
		else if ( x % 2 == 1 && x > 3)
			printf("3\n");
 
		else if ( x == 2)
			printf("1\n");
		
		else if( x == 3 )
			printf("2\n");
		else
		    printf("0\n");
	}
}
