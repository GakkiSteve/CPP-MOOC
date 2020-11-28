#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int flag = 0;
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);
	int ans = 0;
	switch (c)
	{
	case '+':
		ans = a + b;
		break;
	case '-':
		ans = a - b;
		break;
	case '*':
		ans = a * b;
		break;
	case '/':
		if (b == 0)
		{
			printf("Divided by zero!");
			flag = 1;
			break;

		}
		else
		{
			ans = a / b;
		}
		break;
	default:
		printf("Invalid operator!");
		flag = 1;
	}
	if (flag == 0)
	{
		printf("%d", ans);
	}
	return 0;
}