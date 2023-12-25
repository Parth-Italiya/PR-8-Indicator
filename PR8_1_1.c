/*
Q.1 Write a Program to find the length of a string using a Pointer.
Output:
Enter any string : surat
String length is : 5
*/

#include<stdio.h>
#include<string.h>

 main(){
	int i;
	char a[100];
	int *ptr;
	
	printf("Enter any string : ");
	gets(a);
	
	ptr=&a;
	
	printf("String length is : %d",strlen(a));
}
