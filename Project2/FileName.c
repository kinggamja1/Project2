#include <stdio.h>

int main(void) {
	printf("hello world!");

	int x = 5;
	int sum = 0;
	for (int i = 0; i < x; i++) {
		sum += i;
	}
	printf("%d", sum);
}