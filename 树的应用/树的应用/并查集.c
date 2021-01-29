#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SIZE 100
void Initial(int s[])//≥ı ºªØ
{
	for (int i = 0; i < SIZE; i++)
		s[i] = -1;
}
int Find(int s[], int x)
{
	while (s[x] >= 0)
		x = s[x];
	return x;
}
void Union(int s[], int root1, int root2)
{
	s[root2] = root1;
}
int main()
{
	int UFSets[SIZE];
	Initial(UFSets);
	return 0;
}