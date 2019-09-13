/* Here, you should entry the required libraries */

#include <stdio.h>

void main()
{
	/* Here, you should write the source code of your program */
	float a, b, c, sum;
	printf("Sum two numbers.\nFirst number please.\n");
	scanf("%f", &a);
	printf("Second number please.\n");
	scanf("%f", &b);
	printf("Third number please.\n");
	scanf("%f", &c);

	sum = a + b + c;

	printf("Sum: %f", sum);
}
