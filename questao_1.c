#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int lancar(){	
				
		return (rand()%2);
}

int main (){		
	
	int face[2] = {0,0}, i;
		
	srand(time(NULL));
	
	for (i=0; i<1000; i++){
		if (rand()%2)
			printf("Cara\n");
		else
			printf("Coroa\n");		
	}
	
	for (i=0; i<1000; i++){
		face[lancar()]++;
	}

	printf ("\n Cara: %d\n Coroa: %d\n", face [0], face[1]);

	return 0;
}
