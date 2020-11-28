#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
short a[100][100];
short b[100][100];
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j];

		}
	}
	for (int i = 1; i < n - 1; ++i)
	{
		for (int j = 1; j < m - 1; ++j)
		{

			int summ = a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1];
			int v = summ / 5;
			double f = (double)summ / 5;
			if (f - v - 0.5 > 1e-6)
				++v;
			b[i][j] = v;

		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("%d ", b[i][j]);

		}
		printf("\n");
	}
	return 0;
}