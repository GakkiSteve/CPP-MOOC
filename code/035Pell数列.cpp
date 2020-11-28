#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[1000000];
int main()
{
	int n;
	scanf("%d", &n);
	a[1] = 1;
	a[2] = 2;
	for (int i = 3; i < 1000000; ++i)
		a[i] = (2 * a[i - 1] + a[i - 2]) % 32767;

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		scanf("%d", &tmp);
		printf("%d\n", a[tmp]);

	}
	return 0;
}