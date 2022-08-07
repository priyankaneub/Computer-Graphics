
#include<stdio.h>
void drawline(int a0, int b0, int a1, int b1)
{
    int da, db, p, a, b;
    da=a1-a0;
    db=b1-b0;
    a=a0;
    b=b0;
    p=2*db-da;
    while(a<a1)
    {
        if(p>=0)
        {
            printf("%d, %d\n", a, b);
            b=b+1;
            p=p+2*db-2*da;
        }
        else
        {
            printf("%d, %d\n", a, b);
            p=p+2*db;}
            a=a+1;
        }
}
int main()
{
    int a0, b0, a1, b1;

    printf("Enter co-ordinates of first point: ");
    scanf("%d%d", &a0, &b0);
    printf("Enter co-ordinates of second point: ");
    scanf("%d%d", &a1, &b1);
    drawline(a0, b0, a1, b1);
    return 0;
}

