#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
    float volume ,  luaspermukaan , diameter , tinggi;
    float phi, jarijari;
    phi = 3.14;

    cout << " Input diameter : "; cin >> diameter;
    cout << " Input tinggi : "; cin >> tinggi;

    jarijari = 0.5 * diameter;
    volume = phi * (pow(jarijari,2)) * tinggi;
    luaspermukaan = (2 * phi * (pow(jarijari,2))) + ( 2  * phi * jarijari * tinggi ) + (2 * phi * jarijari *  ( jarijari + tinggi ));

    cout << " Volume : " << volume << endl;
    cout << " Luas permukaan : " << luaspermukaan  << endl;

getch();
return 0;  
}