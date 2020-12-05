#include<calculator_operations.h>
int main()
{
    int operation;
    printf("Enter the operation");
    scanf("%d",&operation);
    switch(operation)
    {
    case 1:
        printf("The area of square = %d",sqaure());
    case 2:
        printf("The area of rectangle = %d",rectangle());
    case 3:
        printf("The volume of a cone =%lf",cone());
    case 4:
        printf("he volume of a cone =%lf",cylinder());
    case 5:
        printf("The BMI is",BMI());
    }
    return 0;
}
