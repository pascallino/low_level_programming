#include <stdio.h>
#include "main.h"


int main() {

	int a;
	int b;

	a = 2600;
	b = 1500;

	float r1 = division(a, b);
	int r2 = multiplication(a, b);
	int r3 = addition(a, b);

	printf(" The sum of %d and %d is = %d\n", a, b, r3);
	printf(" The division of %d and %d is = %f\n", a, b, r1);
	printf(" The multiplication of %d and %d is = %d\n", a, b, r2);

	return 0;

}
