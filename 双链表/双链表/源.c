#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int bool;
#define true 1
#define false 0
typedef struct DNode
{
	int data;
	struct DNode* prior, * next;
}DNode,*DLinklist;
bool InitDLinkList(DNode* L)//��ʼ��
{
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
	{
		return false;
	}
	L->prior = NULL;
	L->next = NULL;
	return true;
}
bool InsertNextDNode(DNode* p, DNode* s)//�����*s���뵽���*p֮��
{
	if (p == NULL || s == NULL)
		return false;
	s->next = p->next;
	if(p->next!=NULL)
		p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}
bool DeleteNextDNode(DNode* p)//ɾ��p���ĺ������
{
	if (p == NULL)
		return false;
	DNode* q = p->next;
	if (q == NULL)
		return false;
	p->next = q->next;
	if (q->next != NULL)
		q->next->prior = p;
	free(q);
	return true;
}
void DestoryList(DNode* L)//ɾ��˫����
{
	while (L->next!=NULL)
	{
		DeleteNextDNode(&L);
	}
	free(L);
	L = NULL;
}

int main()
{
	DLinklist L;
	InitDLinkList(&L);
	return 0;
}