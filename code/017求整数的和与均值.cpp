#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int summ = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		scanf("%d", &tmp);
		summ += tmp;
	}
	printf("%d %.5lf", summ, double(summ) / n);
	return 0;
}