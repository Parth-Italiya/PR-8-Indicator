/*
Q.1 Write a Program to find the length of a string using a Pointer.
Output:
Enter any string : aman
String length is : 4

*/

#include<stdio.h>
#include<string.h>

void main(){
	int i,n;
	char a[100];
	int *ptr;
	
	printf("Enter any string : ");
	gets(a);
	
	ptr=&a;	
	ptr=strlen(a);
	
	printf("String length is : %d", ptr);
	
}
