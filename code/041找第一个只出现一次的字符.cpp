#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
char a[100001];
int main()
{
	cin.getline(a, 100001);
	int length = strlen(a);
	int flag = 0;
	for (int i = 0; i < length; ++i)
	{
		flag = 0;
		for (int j = 0; j < length; ++j)
		{
			if (a[i] == a[j] && i != j)
			{
				flag = 3;

				break;
			}
		}
		if (flag == 3)
		{
			continue;
		}
		else
		{
			flag = 1;
			printf("%c", a[i]);
			break;
		}
	}
	if (flag == 3)
	{
		printf("no");
	}
	return 0;
}