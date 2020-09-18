#include "calc.h"
#include<stdio.h>
int main()
{
    int choice,num1,num2,ans=0,num3;
    float ans1=0;
do{
	ans=0;
	ans1=0;
    printf("Available operations are:\n1:Addition\n2:substraction\n3:multiplication\n4:division\n5:modulus\n6:factorial\n7:Sin\n8:Cos\n9:Tan\n10:cosecant\n11:secant\n12:cot\n13:log\n14:lan\n15:exponential\n16:square root\n17:cube root\n18:power\n19:radians\n20:degrees\n21:square\n22:cube\n23:exit\n");
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("enter two integers numbers");
        scanf("%d%d",&num1,&num2);
        ans=add(num1,num2);
        break;
        case 2:printf("enter two integers numbers");
        scanf("%d%d",&num1,&num2);
        ans=subtract(num1,num2);
        break;
        case 3:printf("enter two integers numbers");
        scanf("%d%d",&num1,&num2);
        ans=multiply(num1,num2);
        break;
        case 4:printf("enter two integers numbers");
        scanf("%d%d",&num1,&num2);
        ans=divide(num1,num2);
        break;
        case 5:printf("enter two integers numbers");
        scanf("%d%d",&num1,&num2);
        ans=mod(num1,num2);
        break;
        case 6:printf("enter a number");
        scanf("%d",&num1);
        if(num1>0)
        ans=fact(num1);
        else printf("invalid number");
        break;
        case 7:printf("enter a angle");
        scanf("%d",&num1);
        ans1=sine(num1);
        break;
        case 8:printf("enter a angle");
        scanf("%d",&num1);
        ans1=cosine(num1);
        break;
        case 9:printf("enter a angle");
        scanf("%d",&num1);
        ans1=tanget(num1);
        break;
        case 10:printf("enter a angle");
        scanf("%d",&num1);
        ans1=1/sine(num1);
        break;
        case 11:printf("enter a angle");
        scanf("%d",&num1);
        ans1=1/cosine(num1);
        break;
        case 12:printf("enter a angle");
        scanf("%d",&num1);
        ans1=1/tanget(num1);
        break;
        case 13:printf("enter a number");
        scanf("%f",&num3);
        ans1=logorithm(num3);
        break;
        case 14:printf("enter a number");
        scanf("%f",&num3);
        ans1=lane(num3);
        break;
        case 15:printf("enter a number");
        scanf("%d",&num1);
        ans1=exponential(num1);
        break;
        case 16:printf("enter a number");
        scanf("%f",&num3);
        ans1=square_root(num3);
        break;
        case 17:printf("enter a number");
        scanf("%f",&num3);
        ans1=cube_root(num3);
        break;
        case 18:printf("enter a two numbers");
        scanf("%d%d",&num1,&num2);
        ans=power(num1,num2);
        break;
        case 19:printf("enter a angle in degrees");
        scanf("%f",&num3);
        ans1=radians(num3);
        break;
        case 20:printf("enter a angle in radians");
        scanf("%f",&num3);
        ans1=degrees(num3);
        break;
        case 21:printf("enter a number");
        scanf("%d",&num1);
        ans=square(num1);
        break;
        case 22:printf("enter a number");
        scanf("%d",&num1);
        ans=cube(num1);
        break;
        case 23:printf("\nThank you. Exiting the Application\n");
        exit(0);
        default:printf("invalid operation choice");
    }
    if(ans!=0)
    printf("%d\n",ans);
    else if(ans1!=0)
    printf("%f\n",ans1);
}while(choice!=23);
return 0;
}
