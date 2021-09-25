#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()

{
    int bil;
    cout<<"Input an integer number :";
    cin>>bil;
    cout<<endl;

    if (bil%2==0)
    cout<<bil<<" Adalah bilangan genap"<<endl; else
    cout<<bil<<" Adalah bilangan ganjil"<<endl; 

    getch();
    return 0;

}