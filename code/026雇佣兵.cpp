#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define EPS 1e-8
int main()
{
	int M, N, X;
	scanf("%d %d %d", &M, &N, &X);
	//M 体力最大值
	//N 战斗力
	//X 能量
	while (X > 0)
	{
		int t = M / N;//一个战斗周期能加多少战斗力；
		if (M % N != 0)
		{
			++t;//体力加到M要多少水晶
		}
		X -= t;
		if (X < 0)
		{
			break;
		}
		else
		{
		
			t = M / N;//t需要重算一遍 因为 你之前有可能改动t
			N += t;
		}
	}
	printf("%d", N);
	return 0;
}