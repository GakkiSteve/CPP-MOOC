#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int minn, maxx;
	int flag = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		scanf("%d", &tmp);
		if (flag == 0)
		{
			flag = 1;
			minn = tmp;
			maxx = tmp;
		}
		else
		{
			if (tmp > maxx)
			{

				maxx = tmp;
			}
			if (tmp < minn)
			{
				minn = tmp;
			}
		}

	}
	printf("%d", maxx - minn);
	return 0;
}