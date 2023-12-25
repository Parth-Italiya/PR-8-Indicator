/*
Q.1 Write a program to find out length of string using pointer.
Output:
Enter any String: Morris

The length of string is : 6
*/
#include<stdio.h>
void main(){
	char a[100];
	int len=0;
	char *ptr=a;
	
	printf("Enter any String: ");
	gets(a);
	
	while(*ptr != NULL){
		len++;
		ptr++;
	}
	printf("\nThe length of string is : %d",len);
}
