#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int L, R;
	scanf("%d %d", &L, &R);
	int count = 0;
	for (int i = L; i <= R; ++i)
	{
		int tmp = i;
		while (tmp != 0)
		{
			int tmp1 = tmp % 10;
			if (tmp1 == 2)
			{
				count++;
			}
			tmp /= 10;
		}
		if (tmp == 2)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}