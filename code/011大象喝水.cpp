#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;
#define PI 3.1415926
#define EPS 1e-8
int main()
{
	int h, r;
	scanf("%d %d", &h, &r);
	double v = PI * r * r * h / 1000;

	double num = 20.0 / v;
	int ans = num;
	ans += (num - ans) > EPS;	//���Ƿ���������С�� �еĻ�˵��Ҫ��1Ͱ
	printf("%d", ans);

	return 0;
}