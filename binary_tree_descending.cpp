//Buatlah Program untuk mengurutkan Data secara descending dengan menggunakan Stack dan Binary Tree!
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct sel
{
    int dat;
    struct sel *left;
    struct sel *right;
};
struct sel *root=NULL, *ptr=NULL, *temp=NULL;
struct sel pool[256];
int stacksize=0;

bool isempty()
{
    if(stacksize==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void clearstack()
{
    stacksize=0;
}

void push(int el)
{
    stacksize++;
    pool[stacksize-1].dat=el;
}

struct sel topEl()
{
    return pool[stacksize-1];
}

struct sel pop()
{
    struct sel temp;
    temp=pool[stacksize-1];
    stacksize--;
    return temp;
}

void tambahsimpul(struct sel *simpul)
{
    if(simpul->dat > temp->dat)
    {
        if(simpul->left !=NULL)
        {
            tambahsimpul(simpul->left);
        }
        else
        {
            simpul->left =temp;
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
    if (travCell->left !=NULL)
    {
        inOrderTrav(travCell->left);
    }
    push(travCell->dat);
    if(travCell->right!=NULL)
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
    if(travCell->right!=NULL)
    {
        postOrderTrav(travCell->right);
    }
    push(travCell->dat);
}

void preOrderTrav(struct sel *travCell)
{
    push(travCell->dat);
    if(travCell->left!=NULL)
    {
        preOrderTrav(travCell->left);
    }
    if(travCell->right!=NULL)
    {
        preOrderTrav(travCell->right);
    }
}

int main()
{
    int a[10]={100, 70, 25, 150, 125, 175, 185, 200, 60, 50};
    cout<<"Data Awal: ";
    for(int i=0; i<10; i++)
    {
        cout<<a[i]<<"  ";
    }
    
    cout << endl;
    for(int i=0; i<10; i++)
    {
        temp=(struct sel *) malloc(sizeof(struct sel));
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
    cout <<"Hasil sort: ";
    inOrderTrav(root);
    for(int i=stacksize-1; i>=0; i--)
    {
        cout <<pool[i].dat<<" ";
    }
}