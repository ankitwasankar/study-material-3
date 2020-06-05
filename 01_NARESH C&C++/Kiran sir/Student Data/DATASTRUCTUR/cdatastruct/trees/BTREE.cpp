//EXAMPLE PROGRAM FOR BINARY TREE
# include <iostream.h>
# include <alloc.h>
# include <stdlib.h>
# include <conio.h>
struct tree_element
{
 struct tree_element *left;
 int item;
 struct tree_element *right;
};
typedef struct tree_element node;
void create(node *record,int n)
{
 if(n > record->item)
 {
	if(record->right==NULL)
	{
	  record->right=(node *)malloc(sizeof(node));
	  record=record->right;
	  record->item=n;
	  record->left=NULL;
	  record->right=NULL;
	}
	else
	create(record->right,n);
 }
 else
 {
	if(n<record->item)
	{
	  if(record->left==NULL)
	  {
		 record->left=(node *)malloc(sizeof(node));
		 record=record->left;
		 record->item=n;
		 record->left=NULL;
		 record->right=NULL;
	  }
	  else
	  create(record->left,n);
	}
	else
	cout<<" No. is duplicate ";
	return;
 }
}
void inorder(node *record)
{
 if(record!=NULL)
 {
  inorder(record->left);
  cout<<record->item;
  inorder(record->right);
 }
 return;
}
void preorder(node *record)
{
 if(record!=NULL)
 {
	cout<<record->item;
	preorder(record->left);
	preorder(record->right);
 }
 return;
}
void postorder(node *record)
{
 if(record!=NULL)
 {
	postorder(record->left);
	postorder(record->right);
	cout<<record->item;
 }
}
void main()
{
 node *tree;
 int num,choice;
 clrscr();
 tree=(node *)malloc(sizeof(node));
 cout<<"\n BINARY TREE TRAVERSAL ";
 cout<<"\n 1. INORDER ";
cout<<"\n 2. PREORDER ";
 cout<<"\n 3. POSTORDER ";
 cout<<"\n 4. EXIT ";
cout<<'\n First enter the nos at last enter -999 \n ";
 cin>>num;
 tree->item=num;
 tree->left=NULL;
 tree->right=NULL;
 while(num!=-999)
 {
	cin>>num;
	if(num==-999)
	 break;
	create(tree,num);
 }
 do
	{
	 cout<<"\n Enter your choice ";
	cin<<choice;
	 switch(choice)
	 {
	  case 1:
		 cout<<"\n Inorder Traversal  ";
		 inorder(tree);
		 continue;
	  case 2:
		 cout<<"\n Preorder Traversal  ";
		 preorder(tree);
		 continue;
	  case 3:
		 cout<<"\n Postorder Traversal  ";
		 postorder(tree);
		 continue;
	  }
 }
 while(choice!=4);
}




