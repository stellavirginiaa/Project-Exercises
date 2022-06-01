//Tampilkan hasil tree traversal secara Post-order
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
struct sel
{
	int dat;
	struct sel *left;
	struct sel *right;
};
struct sel *root=NULL, *ptr=NULL, *temp=NULL;
int b[256];
int n=0;

void tambahsimpul(struct sel *simpul)
{
	if (simpul->dat> temp->dat)
	{
		if (simpul ->left !=NULL)
		{
			tambahsimpul(simpul->left);
		}
		else
		{
			simpul->left=temp;
		}
	}
	else
	{
		if(simpul->right!=NULL)
		{
			tambahsimpul(simpul->right);
		}
		else
		{
			simpul->right=temp;
		}
	}
}

void inOrderTrav(struct sel *travCell)
{
	if(travCell->left !=NULL)
	{
		inOrderTrav(travCell->left);
	}
    b[n]=travCell->dat;
	n++;
	if(travCell->right !=NULL)
	{
		inOrderTrav(travCell->right);
	}
}

void postOrderTrav(struct sel *travCell)
{
	if(travCell->left !=NULL)
	{
		postOrderTrav(travCell->left);
	}
	if(travCell->right !=NULL)
	{
		postOrderTrav(travCell->right);
	}
    b[n]=travCell->dat;
	n++;
}

void preOrderTrav(struct sel *travCell)
{
	b[n]=travCell->dat;
	n++;
	if(travCell->left !=NULL)
	{
		preOrderTrav(travCell->left);
	}
	if(travCell->right !=NULL)
	{
		preOrderTrav(travCell->right);
	}
}

int main()
{
	int a[10] = {100, 70, 25, 150, 125, 175, 185, 200, 60, 50};
	cout<<"Data Awal: ";
    for(int i=0; i<10; i++)
  {
    cout<<a[i]<<"  ";
  }
  cout<<endl;
  
	for(int i=0; i<10; i++)
	{
		temp = (struct sel *) malloc(sizeof(struct sel));
		temp->dat=a[i];
		temp->left=NULL;
		temp->right=NULL;
		if(root==NULL)
		{
			root=temp;
		}
		else
		{
			tambahsimpul(root);
		}
	}
	
	cout <<"Hasil postorder: ";
	postOrderTrav(root);
	for(int i=0; i<n; i++)
	{
		cout<<b[i]<<" ";
	}
    cout << endl;

}

