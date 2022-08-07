////Bresenham’s Circle Drawing Algorithm
#include <stdio.h>

void drawCircle(int ac, int bc, int a, int b)
{
    printf("(%d, %d) \n",ac+a, bc+b);
    printf("(%d, %d) \n",ac-a, bc+b);
    printf("(%d, %d) \n",ac+a, bc-b);
    printf("(%d, %d) \n",ac-a, bc-b);
    printf("(%d, %d) \n",ac+b, bc+a);
    printf("(%d, %d) \n",ac-b, bc+a);
    printf("(%d, %d) \n",ac+b, bc-a);
    printf("(%d, %d) \n",ac-b, bc-a);

}

void circleBres(int ac, int bc, int r)
{
    int a = 0, b = r;
    int d = 3 - 2 * r;
    drawCircle(ac, bc, a, b);
    while (b >= a)
    {

        a++;

        if (d > 0)
        {
            b--;
            d = d + 4 * (a - b) + 10;
        }
        else
            d = d + 4 * a + 6;
        drawCircle(ac, bc, a, b);

    }
}


int main()
{
    int a = 20, b = 20, r = 5;
    circleBres(a, b, r);
    return 0;
}

