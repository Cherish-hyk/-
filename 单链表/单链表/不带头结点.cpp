//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode,*LinkList;
//bool InitList(LinkList& L)
//{
//	L = NULL;
//	return true;
//}
//bool ListInsert(LinkList& L, int i, int e)
//{
//	if (i < 1)
//		return false;
//	if (i == 1)
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = e;
//		s->next = L;
//		L = s;
//		return true;
//	}
//	LNode* p;
//	int j = 1;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL)
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//bool Empty(LinkList L)//�жϵ������Ƿ�Ϊ��
//{
//	if (L == NULL)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	LinkList L;
//	InitList(L);//��ʼ��
//	ListInsert(L, 3, 3);
//	system("pause");
//	return 0;
//}