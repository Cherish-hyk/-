#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef int bool;
#define true 1
#define false 0
#define MaxSize 10
typedef struct
{
	int data[MaxSize];
	int top;
}SqStack;
void InitStack(SqStack* S)//初始化
{
	S->top = -1;
}
bool StackEmpty(SqStack S)
{
	if (S.top == -1)
		return true;
	else
		return false;
}
bool Push(SqStack* S, int x)//进栈操作
{
	if (S->top == MaxSize - 1)
	{
		return false;
	}
	S->top = S->top + 1;
	S->data[S->top] = x;
	return true;
}
bool Pop(SqStack* S, int* x)//出栈操作
{
	if (S->top == -1)
		return false;
	x = S->data[S->top];
	S->top = S->top - 1;
	return true;
}
bool GetTop(SqStack* S, int* x)//读栈顶元素
{
	if (S->top == -1)
		return false;
	x = S->data[S->top];
	return true;
}
int main()
{
	SqStack S;
	InitStack(&S);
	system("pause");
	return 0;
}