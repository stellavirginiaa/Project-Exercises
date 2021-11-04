#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>

using namespace std;

int main()
{
    string nama;
    string nim;
    int poin;
    int nilaitugas;
    int nilaiuts;
    int nilaiuas;
    int nilaiakhir;

    cout << " Nama : "; cin >> nama;
    cout << " NIM : "; cin >> nim;
    cout << " Poin : "; cin >> poin;
    cout << " Nilai Tugas : " ; cin >> nilaitugas;
    cout << " Nilai UTS : " ; cin >> nilaiuts;
    cout << " Nilai UAS : " ; cin >> nilaiuas;


    nilaiakhir =( 0.05*poin ) + (0.25*nilaitugas) +( 0.3*nilaiuts )+( 0.4*nilaiuas);
    cout << " \n\n";
    cout << nama << " " << nim  << " " << "mendapatkan Nilai " << nilaiakhir << endl;

getch();
return 0;

}