#include <stdio.h>

void main() {
	
	int t;
	scanf("%d", &t);
	
	while(t--) {
		
		int x, y;
		scanf("%d %d", &x, &y);
		
		if(x == y)
			printf("%d\n", 2*x);
		else if ( x < y) 
			printf("%d\n", 2*y - 1);
		else if ( x > y  )
			printf("%d\n", 2*x - 1);
		else 
			continue;
	}
}
