#define _CRT_SECURE_NO_WARNINGS 1
//二叉排序树或者空树，或者非空树，当为非空树时有以下特点：
//（1）、若左子树非空，则左子树上所有结点关键字值均小于根节点的关键字。
//（2）、若右子树非空，则右子树上所有结点关键字值均大于根节点的关键字。
//（3）、左右子树本身也分别为一棵二叉排序树。
typedef struct BSTNode
{
	int key;
	int lchild, rchild;
}BiTree;
int BST_Insert(BiTree* T, int k)//插入
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