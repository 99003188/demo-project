#include<calculator_operations.h>
int sqaure()
{
    int side;
    printf("Enter the side");
    scanf("%d",&side);
    return(side*side);
}
int rectangle()
{
    int length,breadth;
    printf("Enter the length and breadth");
    scanf("%d%d",&length,&breadth);
    return(length*breadth);
}
double cone()
{
    int radius,heigth;
    printf("Enter the height and radius");
    scanf("%d%d",&radius,&heigth);
    return((1/3)*PI*radius*radius*height);
    
}
double  cylinder
{
    int radius,heigth;
    printf("Enter the height and radius");
    scanf("%d%d",&radius,&heigth);
    return(PI*radius*radius*height);
}
float BMI()
{
    int mass
    double  height;
    printf("Enter the weight(in Kgs) and height(in meters");
    scanf("%d%lf",&mass,&height)
    if(height>0)
    return("mass/(height*height)");
    else if(height<=0)
    printf("enter correct details");
}

