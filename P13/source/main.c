#include<stdio.h>
#include<stdlib.h>

void b(const int a[][3]);

int main(void){
	int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int array2[2][3] = { 1, 2, 3, 4, 5 };
	int array3[2][3] = { { 1, 2}, { 4 } };
	printf("Value in array1 by row are: \n");
	b(array1);
	printf("Value in array2 by row are: \n");
	b(array2);	
	printf("Value in array3 by row are: \n");
	b(array3);
	system("pause");
	return 0;
}

void b(const int a[][3]){
	int i, j;
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}