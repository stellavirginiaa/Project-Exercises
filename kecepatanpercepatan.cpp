#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int vt , vo , percepatan , waktu ;
    string input;

    cout << "====================================================" << endl;
    cout << " PROGRAM SEDERHANA MENGHITUNG  KECEPATAN PERCEPATAN " << endl;
    cout << "====================================================" << endl;
    cout << "\n";
    cout << " Apa  yang ingin kamu cari ? " << endl;
    cout << " a. Kecepatan akhir " << endl;
    cout << " b. Kecepatan awal " << endl;
    cout << " c. Percepatan " << endl;
    cout << " d. Waktu yang dibutuhkan " << endl;
    cout << "\n";
    cout << " Input 'a' , 'b' , 'c' , 'd' " << endl;
    cout << " Masukkan data : "; cin >> input;
    cout << "\n";

    if (input=="a")
    {   
        cout << " Kamu ingin mencari kecepatan akhir " << endl;
        cout << " Input kecepatan awal : "; cin >> vo;
        cout << " Input percepatan : "; cin >> percepatan;
        cout << " Input waktu : "; cin >> waktu;

        vt = vo + ( percepatan * waktu);
        cout << " Kecepatan akhirnya adalah : " << vt << endl;
        cout << "\n";
        cout << "\n";
        cout << " Rumus kecepatan akhir " << "vt = vo + (a x t)" << endl;
        cout << " Kecepatan awal : " << vo << " m/s" << endl;;
        cout << " Percepatan : " << percepatan << " m/s^2" << endl;;
        cout << " Waktu : " << waktu << " s" << endl;;
        cout << " Kecepatan akhirnya adalah : " << vt << " m/s" << endl;

    }

    if ( input == "b")
    {
         cout << " Kamu ingin mencari kecepatan awal " << endl;
         cout << " Input kecepatan akhir : "; cin >> vt;
         cout << " Input percepatan : "; cin >> percepatan;
         cout << " Input waktu : "; cin >> waktu;

         vo = vt - ( percepatan * waktu);
         cout << " Kecepatan awalnya adalah : " << vo << endl;
         cout << "\n";
         cout << "\n";
         cout << " Rumus kecepatan awal " << " vo = vt - ( a x t )" << endl;
         cout << " Kecepatan akhir : " << vt << " m/s" << endl;;
         cout << " Percepatan : " << percepatan << " m/s^2" << endl;;
         cout << " Waktu : " << waktu << " s" << endl;;
         cout << " Kecepatan awalnya adalah : " << vo << " m/s" << endl;
    }

    if ( input == "c")
    {
         cout << " Kamu ingin mencari percepatan " << endl;
         cout << " Input kecepatan awal : "; cin >> vo;
         cout << " Input kecepatan akhir : "; cin >> vt;
         cout << " Input waktu : "; cin >> waktu;

         percepatan = (vt-vo)/waktu;
         cout << " Percepatannya adalah : " << percepatan << endl;

         cout << "\n";
         cout << "\n";

         cout << " Rumus percepatan " << " a = (vt-vo) / t" << endl;
         cout << " Kecepatan awal : " << vo << "  m/s" << endl;
         cout << " Kecepatan akhir : " << vt << " m/s" << endl;
         cout << " Waktu : " << waktu << " s" << endl;
         cout << " Percepatannya adalah : " << percepatan << " m/s^2" << endl;
    }

    if ( input == "d")
    {
         cout << " Kamu ingin mencari waktu " << endl;
         cout << " Input kecepatan awal : "; cin >> vo;
         cout << " Input kecepatan akhir : "; cin >> vt;
         cout << " Input percepatan : "; cin >> percepatan;

         waktu = (vt-vo)/percepatan;
         cout << " Waktu yang dibutuhkan adalah : " << waktu << endl;

         cout << "\n";
         cout << "\n";

         cout << " Rumus waktu " << " t = (vt-vo) / a " << endl;
         cout << " Kecepatan awal : " << vo << " m/s" << endl;;
         cout << " Kecepatan akhir : " << vt << " m/s" << endl;
         cout << " Percepatan : " << percepatan << " m/s^2" << endl;
         cout << " Waktu yang dibutuhkan adalah : " << waktu << " s" << endl;

    }

getch();
return 0;
}