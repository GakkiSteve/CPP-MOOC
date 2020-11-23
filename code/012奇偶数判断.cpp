#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}

	return 0;
}