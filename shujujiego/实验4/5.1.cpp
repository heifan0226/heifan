#include<iostream>
#include<windows.h>
using namespace std;
typedef struct BiNode
{
	char data;
	struct BiNode*lchild,*rchild;
}
BiTNode,*BiTree;
void CreateBiTree(BiTree&T)
{
	char ch;
	cin>>ch;
	if(ch=='#')
	T=NULL;
	else
	{
		T=new BiTNode;
		T->data=ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}
void PerOrderTraverse(BiTree T)
{
	if(T)
	{
		cout<<T->data;
		PerOrderTraverse(T->lchild);
		PerOrderTraverse(T->rchild);
	}
}
void InOrderTraverse(BiTree T)
{
	if(T)
	{
		InOrderTraverse(T->lchild);
		cout<<T->data;
		InOrderTraverse(T->rchild);
	}
}
void PostOrderTraverse(BiTree T)
{
	if(T)
	{
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		cout<<T->data;
	}
}
int main()
{
	BiTree tree;
	cout<<"请输入建立二叉链表的序列：\n";
	CreateBiTree(tree);
	cout<<"先序遍历的结果为：\n";
	PerOrderTraverse(tree);
	cout<<endl;
	cout<<"中序遍历的结果为：\n";
	InOrderTraverse(tree);
	cout<<endl;
	cout<<"后序遍历的结果为：\n";
	PostOrderTraverse(tree);
	cout<<endl;
	system("pause");
}
