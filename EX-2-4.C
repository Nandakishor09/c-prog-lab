#include <stdio.h>
int late_fee_rate = 2;
int main(){
	int late_fee_rate = 2;
	clrscr();
	auto int book_id = 101;
	printf("Temperary BookID (auto) = %d\n",book_id);
	register int student_id = 5001;
	printf("Student ID (register) = %d\n", student_id);
	static int totol_books = 0;
	total_books++;
	printf("Tota books issued so far(static) = %d\n", total_books);
	extern int late_fee_rate;
	printf("Late fee rate(extern) = %d rs/day", late_fee_rate);
	getch();
}

