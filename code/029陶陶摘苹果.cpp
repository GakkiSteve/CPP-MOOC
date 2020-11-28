#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[10];
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &a[i]);
	}
	int m;
	scanf("%d", &m);
	m += 30;
	int count = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (m >= a[i])
		{
			++count;
		}
	}
	printf("%d", count);
	return 0;
}