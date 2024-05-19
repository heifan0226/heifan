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
	cout<<"�����뽨��������������У�\n";
	CreateBiTree(tree);
	cout<<"��������Ľ��Ϊ��\n";
	PerOrderTraverse(tree);
	cout<<endl;
	cout<<"��������Ľ��Ϊ��\n";
	InOrderTraverse(tree);
	cout<<endl;
	cout<<"��������Ľ��Ϊ��\n";
	PostOrderTraverse(tree);
	cout<<endl;
	system("pause");
}
