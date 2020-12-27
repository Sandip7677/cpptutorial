#include<stdio.h>
#include<math.h>

int main()
{
    const float h=0.5;
    int x1,x2,x3,y1,y2,y3;
    float area;
    int side1,side2,side3;

    printf("enter coordinate of three points \n");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    int a=y2-y3;
    int b=y3-y1;
    int c=y1-y2;
    area=h*((x1*a)+(x2*b)+(x3*c));
    if (area==0)
    {
        printf("the points (%d,%d),(%d,%d),(%d,%d)are collinear \n",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        side1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        side2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
        side3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));

        printf("the lengths of three sides are %d,%d and %d \n",side1,side2,side3);
        printf("area of the traingle is %f \n",fabs(area));
        if((side1==side2)&&(side1==side3))
        {
            printf("the triangle formed is equilateral \n");
        }
        else if((side1==side2)&&(side1!=side3)&&(side2!=side3))
        {
            printf("the traingle formed is isoscales \n");
        }
        else if((side1!=side2)&&(side1==side3)&&(side2!=side3))
        {
            printf("the traingle formed is isoscales \n");
        }
        else if((side1!=side2)&&(side1!=side3)&&(side2==side3))
        {
            printf("the traingle formed is isoscales \n");
        }
        else
        {
            printf("the triangle formed is neither equilateral nor isoscales \n");
        }
        
    }
    
    return 0;
}