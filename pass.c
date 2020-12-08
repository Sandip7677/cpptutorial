#include<stdio.h>

int main()
{
    int mat,sci;
    printf("input your marks in maths and science \n");
    scanf("%i %i",&mat,&sci);
    if(mat>33 && sci>33)
    {
        printf("you have won 45 rs \n");
    }
    else if(mat>33)
    {
       printf("you have won 15 rs \n"); 
    }
    else if(sci>33)
    {
        printf("you have won 15 rs \n");
    }
    return 0;
}