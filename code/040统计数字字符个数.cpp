#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
char a[256];
int main()
{
	cin.getline(a,256);
	int count = 0;
	int length = strlen(a);
	for (int i = 0; i < length; ++i)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			++count;
		}
	}
	cout << count << endl;
	return 0;
}