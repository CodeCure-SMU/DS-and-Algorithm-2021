// baekjoon_10990_star15.cpp
#include <stdio.h>
int main(void){
	int N;

	scanf("%d", &N);

	for ( int i = 0; i < N; i++){
		if ( N == 1 ){
			for ( int j = 0; j < N - ( i + 1 ); j++)
				printf(" ");
			printf("*\n");
		}	
		else {
			for ( int j = 0; j < N - ( i + 1 ); j++)
				printf(" ");
			printf("*");
			if( i > 0){
				for ( int j = 0; j < i * 2 - 1; j++) 
					printf(" ");
				printf("*");
			}
			printf("\n");
		}
	}	
	
	return 0;

}

