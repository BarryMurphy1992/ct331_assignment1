	#include <stdio.h>

	int main(int arg, char* argc[]){
	  printf("Hello assignment1.\n");
	  int x;
	  int* y;
	  long z;
	  double* w;
	  char** c;
	  
	  printf("\nSize of int: %d" ,sizeof(x));
	  printf("\nSize of int*: %d" ,sizeof(y));
	  printf("\nSize of long: %d" ,sizeof(z));
	  printf("\nSize of double*: %d" ,sizeof(w));
	  printf("\nSize of char**: %d" ,sizeof(c));
	  
	  return 0;
	}

