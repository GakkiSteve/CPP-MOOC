#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int c[100][100];
int d[100][100];
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			scanf("%d", &c[i][j]);
		}
	}
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			d[j][i] = c[i][j];
		}
	}
	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < a; ++j)
		{
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}




	return 0;
}