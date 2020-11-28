#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	//系数
	int s = 1;
	if (n < 0)
	{
		s = -1;
	}
	n = abs(n);
	int m = n;
	int summ = 0;
	int length = 0;

	//求出位数
	while (m != 0)
	{
		m /= 10;
		length += 1;
	}

	while (n > 0&&length>0)
	{
		summ += n % 10 * pow(10, length-1);
		length -= 1;
		n = n / 10;
	}


	printf("%d", s*summ);
	return 0;
}