#include<stdio.h>

void draw(int h);

int main()
{
    int height=4;
    draw(height);
    return 0;
}
void draw(int h)
{
    if(h==0)
    {
        return;
    }
    draw(h-1);
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}