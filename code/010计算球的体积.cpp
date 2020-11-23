#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double r;
	scanf("%lf", &r);
	double area;
	area = 4.0 / 3.0 * 3.14 * r * r * r;
	printf("%.2lf", area);
	return 0;
}