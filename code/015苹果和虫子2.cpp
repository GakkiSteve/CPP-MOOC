#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define EPS 1e-8
int main()
{
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	double tmp = double(y) / double(x);
	int tmp2 = tmp;
	if ((tmp - tmp2) > EPS)
	{
		tmp2 += 1;
	}
	int ans = n - tmp2;
	if (ans < 0)
	{
		ans = 0;
	}
	printf("%d", ans);
	return 0;
}