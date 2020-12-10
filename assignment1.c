#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, p, q;
    printf("enter the cordinate of bttom left corner \n");
    scanf("%d %d", &a, &b);
    printf("enter the cordinate of top right corner \n");
    scanf("%d %d", &c, &d);
    e = a;
    f = d;
    g = c;
    h = b;
    printf("the four corners of the ractangle (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n", a, b, e, f, c, d, g, h);
    printf("input the cordinate of the point to be checked");
    scanf("%d %d", &p, &q);
    if (((a < p) && (p < c)) && ((b < q) && (q < d)))
    {
        printf("the point(%d,%d) is inside the ractangle ", p, q);
    }
    else
    {
        printf("the point (%d,%d) is not inside the ractangle", p, q);
    }
    return 0;
}