#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct BiTNode
{
	int  data;
	struct BiTNode* lchild, * rchild;
}BiTNode, * BiTree;

void visit(BiTree T)
{
	int ret = T->data;
}
void PreOrder(BiTree T)//前序遍历
{
	if (T != NULL)
	{
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
//void PreOrder(BiTree T)//中序遍历
//{
//	if (T != NULL)
//	{
//		PreOrder(T->lchild);
//		visit(T);
//		PreOrder(T->rchild);
//	}
//}
//void PreOrder(BiTree T)//后序遍历
//{
//	if (T != NULL)
//	{
//		PreOrder(T->lchild);
//		PreOrder(T->rchild);
//		visit(T);
//	}
//}
//void InOrder2(BiTree T)//中序遍历非递归算法
//{
//	InitStack(S);
//	BiTree p = T;
//	while (p || !IsEmpty(S))
//	{
//		if (p)
//		{
//			Push(S, p);
//			p = p->lchild;
//		}
//		else
//		{
//			Pop(S, p);
//			visit(p);
//			p = p->rchild;
//		}
//	}
//}
//void levelOrder(BiTree T)//层次遍历
//{
//	InitQueue(Q);
//	BiTree p;
//	EnQueue(Q, T);
//	while (!isEmpty(Q))
//	{
//		DeQueue(Q, p);
//		visit(p);
//		if (p->lchild != NULL)
//		{
//			EnQueue(Q, p->lchild);
//		}
//		else
//		{
//			EnQueue(Q, p->rchild);
//		}
//	}
//}
int main()
{
	BiTree T;
	return 0;
}