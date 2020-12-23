#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
typedef int bool;
#define true 1
#define false 0
#define MaxSize 10
typedef struct
{
	int* data[MaxSize];
	int length;
}SqList;
bool ListInsert(SqList* L, int i, int e)
{
	if (i<1 || i>(L->length + 1))
		return false;
	if (L->length >= MaxSize)
		return false;
	for (int j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j - 1];
		
	}
	L->data[i - 1] = e;
	L->length++;
	return true;

}

void InitList(SqList* L)
{
	for (int i = 0; i < MaxSize; i++)
	{
		L->data[i] = 0;

	}
	L->length = 0;
}
bool ListDelete(SqList* L, int i, int* e)
{
	if (i<1 || i>L->length)
		return false;
	*e = L->data[i - 1];
	for (int j = i;j<L->length;j++)
	{
		L->data[j-1] = L->data[j];

	}
	L->length--;
	return true;
}
int GetList(SqList* L, int i)
{
	return L->data[i - 1];
}
int LocateInt(SqList* L, int e)
{
	for (int i = 0; i < L->length; i++)
	{
		if (L->data[i] == e)
		{
			return i + 1;
		}
	}
	return 0;
}
int main()
{
	SqList L;
	InitList(&L);
	//插入
	ListInsert(&L, 3, 3);
	//删除
	//int e = -1;
	//if (ListDelete(&L, 3, &e))
	//{
	//	printf("已删除，删除的是%d\n", e);
	//}
	//else
	//{
	//	printf("不合法\n");
	//}
	//按位查找
	//int ret=GetList(&L, 3);
	//printf("%d\n", ret);
	//按值查找
	/*int ret=LocateInt(&L, 3);
	printf("%d\n", ret);*/
	system("pause");
	return 0;
}