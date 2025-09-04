#include <stdio.h>
int main(){
	static int bill_count = 0;
	clrscr();
	bill_count++;
	printf("Bill count after 1st generation: %d\n", bill_count);
	bill_count++;
	printf("Bill count after 2st generation: %d\n", bill_count);
	bill_count++;
	printf("Bill count after 3nd generation: %d", bill_count);
	getch();
}