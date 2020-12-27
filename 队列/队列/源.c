#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MaxSize 10
typedef int bool;
#define true 1
#define false 0
typedef struct
{
	int data[MaxSize];
	int front, rear;
}SqQueue;
void InitQueue(SqQueue* Q)
{
	Q->front = Q->rear = 0;
}
bool QueueEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}
bool EnQueue(SqQueue* Q, int x)//入队
{
	if (Q->front==(Q->rear + 1) % MaxSize)
		return false;
	Q->data[Q->rear] = x;
	Q->rear = (Q->rear + 1)%MaxSize;
	return true;
}
bool DeQueue(SqQueue* Q, int*x)//出队
{
	if (Q->front == Q->rear)
		return false;
	x = Q->data[Q->front];
	Q->front = (Q->front + 1) % MaxSize;
	return true;
}
int main()
{
	SqQueue Q;
	InitQueue(&Q);
	return 0;
}