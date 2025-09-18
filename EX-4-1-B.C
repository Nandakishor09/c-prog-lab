#include<stdio.h>
#include<conio.h>

void main(){
	int i;
	int arr[5];
	clrscr();
	printf("Enter a array \n");
	for( i = 0; i < 5; i++){
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
	}
	printf("Array: \n");
	for ( i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	getch();
}