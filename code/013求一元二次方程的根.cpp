#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double delta = b * b - 4 * a * c;
	double x1 = ((-b) + sqrt(delta)) / (2 * a);
	double x2 = ((-b) - sqrt(delta)) / (2 * a);
	double shibu = (-b) / (2 * a);
	double xubu = sqrt((4 * a * c - b * b)) / (2 * a);
	if (b == 0)
	{
		shibu = 0;
	}

	if (delta == 0)
	{
		printf("x1=x2=%.5lf", x1);
	}
	else if (delta > 0)
	{
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}
	else
	{
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", shibu, xubu, shibu, xubu);

	}

	return 0;
}