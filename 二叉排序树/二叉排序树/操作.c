#define _CRT_SECURE_NO_WARNINGS 1
//�������������߿��������߷ǿ�������Ϊ�ǿ���ʱ�������ص㣺
//��1�������������ǿգ��������������н��ؼ���ֵ��С�ڸ��ڵ�Ĺؼ��֡�
//��2�������������ǿգ��������������н��ؼ���ֵ�����ڸ��ڵ�Ĺؼ��֡�
//��3����������������Ҳ�ֱ�Ϊһ�ö�����������
typedef struct BSTNode
{
	int key;
	int lchild, rchild;
}BiTree;
int BST_Insert(BiTree* T, int k)//����
{
	if (T == NULL)
	{
		T = (BiTree)malloc(sizeof(BSTNode));
		T->key = k;
		T->lchild = T->rchild = NULL;
		return 1;
	}
	else if (k == T->key)
		return 0;
	else if (k < T->key)
		return BST_Insert(T->lchild, k);
	else
		return BST_Insert(T->rchild, k);
}
int mian()
{

	return 0;
}