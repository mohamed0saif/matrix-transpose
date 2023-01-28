/*


 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: mohamed
 */


#include "stdio.h"

void main (){

	int Array_1[100][100];
	int Row , Coulum;
	printf("Enter number of Row and coulum : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&Row);
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&Coulum);
	for(int i=0 ; i < Row;i++){
		for(int j=0 ; j<Coulum ;j++){
			printf("Enter element [%d][%d] : ",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&Array_1[i][j]);
		}
	}
	printf("Matrix before Transpose : \n");

	for(int i=0 ; i < Row;i++){
		printf("\n");
		for(int j=0 ; j<Coulum ;j++){
			printf("element [%d][%d] = %d",i,j,Array_1[i][j]);
			printf("  ");
		}
	}
	printf("Matrix After Transpose : \n");
	for(int i=0 ; i < Coulum;i++){
		printf("\n");
		for(int j=0 ; j<Row ;j++){
			printf("element [%d][%d] = %d",i,j,Array_1[j][i]);
			printf("  ");
		}
	}
}

