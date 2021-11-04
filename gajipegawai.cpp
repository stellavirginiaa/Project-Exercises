#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;


struct pegawai
{
    char nama[30];
    char id[8];
    int jamkerja;
    int gaji;
    
};

int main()
{
    pegawai dataPegawai;
    cout << "======= Program Menghitung Gaji Pegawai  ======= "  << endl;
    cout << " Nama pegawai\t: "; cin >> dataPegawai.nama;
    cout << " ID pegawai\t: "; cin >> dataPegawai.id;
    cout << " Jumlah jam kerja: "; cin >> dataPegawai.jamkerja;

    cout << "\n\n";
    dataPegawai.gaji = dataPegawai.jamkerja*75000;
    cout << " =====Output Program====== " << endl;
    cout << " Nama pegawai\t: " << dataPegawai.nama << endl;
    cout << " ID pegawai\t: " << dataPegawai.id << endl;
    cout << " Gaji\t\t: " << dataPegawai.gaji << endl;

    return 0;

}