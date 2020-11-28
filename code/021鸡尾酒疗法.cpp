#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int a, b;
	scanf("%d %d", &a, &b);
	double ctail = double(b) / double(a);
	for (int i = 0; i < n-1; ++i)
	{
		int total, effe;
		scanf("%d %d", &total, &effe);
		double bbz = double(effe) / double(total);
		if (bbz - ctail > 0.05)
		{
			printf("better\n");
		}
		else if (ctail - bbz > 0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}