#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int a = 0, b = 0, c = 0, d = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		scanf("%d", &tmp);
		if (tmp >= 0 && tmp <= 18)
		{
			++a;
		}
		else if (tmp >= 19 && tmp <= 35)
		{
			++b;
		}
		else if (tmp >= 36 && tmp <= 60)
		{
			++c;
		}
		else
		{
			++d;
		}
		
	}
	printf("%.2f%%\n", double(a) / n * 100);		//百分号的输出方法%%
	printf("%.2f%%\n", double(b) / n * 100);
	printf("%.2f%%\n", double(c) / n * 100);
	printf("%.2f%%\n", double(d) / n * 100);

	return 0;
}