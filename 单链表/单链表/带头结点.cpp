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
bool ListDelete(LinkList& L, int i, int& e)//删除
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
bool DeleteNode(LNode* p)//删除指定结点
{
	if (p == NULL)
		return false;
	LNode* q = p->next;
	p->data = p->next->data;
	p->next = q->next;
	free(q);
	return true;
}
LNode* GetElem(LinkList L, int i)//按位查找
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
LNode* LocateElem(LinkList L, int e)//按值查找
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
bool ListInsert(LinkList& L, int i, int e)//插入
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
bool Empty(LinkList L)//判断单链表是否为空
{
	if (L->next == NULL)
		return true;
	else
		return false;
}
int main()
{
	LinkList L;
	InitList(L);//初始化
	ListInsert(L, 3, 1);
	system("pause");
	return 0;
}