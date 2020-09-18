#include "calc.h"
#include<math.h>
int add(int num1, int num2)
{
    return num1+num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    if(0 == num2)
        return 0;
    else
        return num1 / num2;
}
int mod(int num1,int num2)
{
	return num1%num2;
}
int fact(int num)
{
	if(num==0 || num==1)
	   return 1;
	else
	   return fact(num-1)*num;
}
float sine(int num)
{
	return sin((num*3.14)/180);
}
float cosine(int num)
{
	return cos((num*3.14)/180);
}
float tanget(int num)
{
	return tan((num*3.14)/180);
}
 float exponential(int num)
{
	return exp(num);
}
int power(int m,int n)
{
	return pow(m,n);
}
float square_root(float num)
{
	return sqrt(num);
}
float cube_root(float num)
{
	return cbrt(num);
}
int square(int num)
{
	return num*num;
}
int cube(int num)
{
	return num*num*num;
}
float radians( float degree)
{
	return (degree*3.14)/180;
}
float degrees(float radian)
{
	return (radian*180)/3.14;
}
float logorithm(float x)
{
	return log10(x);
}
float lane(float x)
{
	return log(x);
}

