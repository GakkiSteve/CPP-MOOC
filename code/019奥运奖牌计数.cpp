#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int gold = 0, silver = 0, bronze = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int tmp1, tmp2, tmp3;
		scanf("%d %d %d", &tmp1, &tmp2, &tmp3);
		gold += tmp1;
		silver += tmp2;
		bronze += tmp3;
	}
	printf("%d %d %d %d", gold, silver, bronze, gold + silver + bronze);
	return 0;
}