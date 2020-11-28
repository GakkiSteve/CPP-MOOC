#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x <= 1 && x >= -1 && y <= 1 && y >= -1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}