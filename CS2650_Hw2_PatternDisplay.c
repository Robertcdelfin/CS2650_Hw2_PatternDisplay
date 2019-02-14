//Robert Delfin
//CS2650
#include <stdio.h>

int main(int argc, char **argv){

	//declare row for pattern a
	printf("Pattern A\n");

	//Number of rows
	for(int aRows = 0; aRows < 10; aRows++){
		//Number of Colums
		for(int aColums = 0 ; aColums <= aRows; aColums++ ){
			printf("+");
		}
		printf("\n");
	}
	printf("Pattern B\n");

	for(int bRows = 10 ; bRows > 0; bRows-- ){

		for(int bColums = 0; bColums < bRows ; bColums++){
			printf("+");
		}
		printf("\n");
	}

	return 0;
}
