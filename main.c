#include <stdio.h>

void sub1() {
	for (int i = 0; i<5; i++)
		printf("*\n");
}

void sub2(){
	printf("Mission Clear!!!!\n");
}

int main () {
	sub1();
	sub2();
	return 0;
}
