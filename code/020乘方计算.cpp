#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int a, n;
	scanf("%d %d", &a, &n);
	int summ = 1;
	for (int i = 0; i < n; ++i)
	{
		summ *= a;
	}
	printf("%d", summ);
	return 0;
}