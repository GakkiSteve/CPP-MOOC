#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a;
	scanf("%c", &a);
	printf("  %c\n", a);
	printf(" %c%c%c\n", a, a, a);
	printf("%c%c%c%c%c\n", a, a, a, a, a);
	printf(" %c%c%c\n", a, a, a);
	printf("  %c\n", a);



	return 0;
}