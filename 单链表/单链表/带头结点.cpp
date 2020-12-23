#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, * LinkList;
bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
	{
		return false;
	}
	L->next = NULL;
	return true;
}
bool ListDelete(LinkList& L, int i, int& e)//ɾ��
{
	if (i < 1)
		return false;
	LNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	if (p->next == NULL) 
	{
		return false;
	}
	LNode* q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}
bool DeleteNode(LNode* p)//ɾ��ָ�����
{
	if (p == NULL)
		return false;
	LNode* q = p->next;
	p->data = p->next->data;
	p->next = q->next;
	free(q);
	return true;
}
LNode* GetElem(LinkList L, int i)//��λ����
{
	if (i < 0)
		return NULL;
	LNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i )
	{
		p = p->next;
		j++;
	}
	return p;
}
LNode* LocateElem(LinkList L, int e)//��ֵ����
{
	LNode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}
int Length(LinkList L)
{
	int len = 0;
	LNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}
bool ListInsert(LinkList& L, int i, int e)//����
{
	if (i < 1)
		return false;
	LNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}
bool Empty(LinkList L)//�жϵ������Ƿ�Ϊ��
{
	if (L->next == NULL)
		return true;
	else
		return false;
}
int main()
{
	LinkList L;
	InitList(L);//��ʼ��
	ListInsert(L, 3, 1);
	system("pause");
	return 0;
}