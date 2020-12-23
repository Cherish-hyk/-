//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//
//#define InitSize 10
//typedef struct
//{
//	int *data;
//	int length;
//	int MaxSize;
//}SqList;
//void InitList(SqList* L)
//{
//	L->data = (int*)malloc(InitSize * sizeof(int));
//	L->length = 0;
//	L->MaxSize = InitSize;
//}
//void IncreaseSize(SqList* L, int len)
//{
//	int* p = L->data;
//	L->data = (int*)malloc((InitSize + len) * sizeof(int));
//	for (int i = 0; i < L->length; i++)
//	{
//		L->data[i] = p[i];
//	}
//	L->MaxSize = L->MaxSize + len;
//	free(p);
//}
//int main()
//{
//	SqList L;
//	InitList(&L);
//	IncreaseSize(&L, 5);
//	system("pause");
//	return 0;
//}