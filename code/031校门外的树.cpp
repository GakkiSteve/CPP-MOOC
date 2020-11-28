#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[10000];
int main()
{
	int L, M;
	scanf("%d %d", &L, &M);
	for (int i = 0; i <M; ++i)
	{
		int b, c;
		scanf("%d %d", &b, &c);
		for (int j = b; j <= c; ++j)
		{
			a[j] = 1;
		}
	}
	int count = 0;
	for (int i = 0; i <= L; ++i)
	{
		count += a[i];
	}
	printf("%d", L + 1 - count);


	return 0;
}