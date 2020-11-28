#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int N;
	scanf("%d", &N);
	int summ = 0, maxx = 0;
	int flag = 0;
	for (int i = 0; i < N; ++i)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
		{
			flag = 1;
			summ += 1;
			if (summ > maxx)
			{
				maxx = summ;
			}
		}
		else
		{
			flag = 0;
			summ = 0;
		}
	}
	printf("%d", maxx);
	return 0;
}