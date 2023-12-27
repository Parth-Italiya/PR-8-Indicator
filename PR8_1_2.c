/*
Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

Output:
Enter size of the array : 2
Enter the elements of array a[0][0] : 3
Enter the elements of array a[0][1] : 5
Enter the elements of array a[1][0] : 4
Enter the elements of array a[1][1] : 7

The cube is:  27   125   64  343
*/

#include<stdio.h>
 main(){
	
	int i,j,size;
	int a[5][5];
	int *ptr,*qtr;
	
	ptr=&a[i];
	qtr=&a[j];
	
	printf("Enter size of the array : ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			printf("Enter the elements of array a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}printf("\n");
	
	printf("The cube is: ");
	
	for(i=0; i<size; i++){
		printf(" %d  ",(*(ptr+i))*(*(ptr+i))*(*(ptr+i)));
	}
	for(j=0; j<size; j++){
		printf(" %d ",(*(qtr+j))*(*(qtr+j))*(*(qtr+j)));
	}
}
