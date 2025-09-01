#include <stdio.h>
#include <conio.h>

int global_var = 100;
extern int global_var;
void main(){
	static int s = 5;
	clrscr();
	printf("Static variable first value= %d\n", s);
	s = s+10;
	printf("Static variable after modification= %d\n", s);
	s = s + 20;
	printf("Static variable after second modificatio= %d\n", s);

	printf("Extern accessed global variable= %d\n", global_var);
	getch();

}

