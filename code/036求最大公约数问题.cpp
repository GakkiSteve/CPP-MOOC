#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int gcd(int a, int b)
{
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b < a)
	{
		int t = a;
		a = b;
		b = t;
	}
	printf("%d", gcd(a, b));
	return 0;
}