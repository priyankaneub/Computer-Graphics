//Mid Point Circle Drawing Algorithm
#include<stdio.h>

void midPointCircleDraw(int a_centre, int b_centre, int r)
{
	int a = r, b = 0;

	printf("(%d, %d) ", a + a_centre, b + b_centre);

	if (r > 0)
	{
		printf("(%d, %d) ", a + a_centre, -b + b_centre);
		printf("(%d, %d) ", b + a_centre, a + b_centre);
		printf("(%d, %d)\n", -b + a_centre, a + b_centre);
	}

	int P = 1 - r;
	while (a > b)
	{
		b++;

		if (P <= 0)
			P = P + 2*b + 1;

		else
		{
			a--;
			P = P + 2*b - 2*b + 1;
		}

		if (a < b)
			break;

		printf("(%d, %d) ", a + a_centre, b + b_centre);
		printf("(%d, %d) ", -a + a_centre, b + b_centre);
		printf("(%d, %d) ", a + a_centre, -b + b_centre);
		printf("(%d, %d)\n", -a + a_centre, -b + b_centre);

		if (a != b)
		{
			printf("(%d, %d) ", b + a_centre, a + b_centre);
			printf("(%d, %d) ", -b + a_centre, a + b_centre);
			printf("(%d, %d) ", b + a_centre, -a + b_centre);
			printf("(%d, %d)\n", -b + a_centre, -a + b_centre);
		}
	}
}

int main()
{

	midPointCircleDraw(0, 30, 30);
	return 0;
}
