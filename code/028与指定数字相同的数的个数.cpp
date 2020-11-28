#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[100];
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &a[i]);
	}
	int m;
	scanf("%d", &m);
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		if (a[i] == m)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}