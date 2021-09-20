//Skrivet av Emil S

#include <stdio.h>

//0x12 34 56 78
//12(+0) 34(+1) 56(+2) 78(+3) big endian
//78(+0) 56(+1) 34(+2) 12(+3) little endian
//
//Om man får 120 är det little endian, annars big endian

int main() {
	int x = 0x12345678;
	int *xptr = &x;
	char c = *xptr;
	int cbyte = (int) c;
	printf("%d\n", cbyte);
	if ((int) c == 120) {
		printf("Little Endian!\n");
	}
	else {
		printf("Big Endian!\n");
	}
}
