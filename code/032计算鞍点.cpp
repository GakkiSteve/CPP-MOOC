#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[5][5];
int main()
{
	int flag = 0;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		flag = 0;
		int maxx = a[i][0];
		int pos = 0;
		for (int j = 1; j < 5; ++j)
		{
			if (a[i][j] > maxx)
			{
				maxx = a[i][j];
				pos = j;
			}
		}
		int minn = maxx;
		for (int k = 0; k < 5; ++k)
		{
			if (minn > a[k][pos])
			{
				flag = 1;

				break;
			}
		}
		if (flag == 0)
		{
			printf("%d %d %d", i + 1, pos + 1, a[i][pos]);
			flag = 3;
			break;

		}
	}
	if (flag != 3)
	{
		printf("not found");
	}

	return 0;
}