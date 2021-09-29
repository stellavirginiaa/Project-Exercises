#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <time.h>
using namespace std;

void makeline(int length)
{
    for (int j=0; j<length; j++)
    cout << "=";
    cout << " ";

}

main()
{
    
        //deklarasi
    string nama;
    string nim;
    string jurusan;
    
                float sks=0;
                float matkul=0;
                float ips=0;
                float mutumatkul;
                float totalmutu=0;
                float totalsks=0;
                


    
    time_t now = time(0);
    char * dt = ctime(&now);

    
    makeline (55);
    cout << " " << endl;
    cout << "         Program Menghitung Nilai IPS Mahasiswa" << endl;

    //tanggal//
    cout << "           Tanggal : " << dt << endl;
    makeline(55);
    cout << " " << endl;
    cout << " Masukkan nama     : " ; getline (cin, nama);
    cout << " Masukkan NIM      : " ; getline (cin, nim);
    cout << " Masukkan Jurusan  : " ; getline (cin, jurusan);
    makeline(55);
    cout << " " << endl;
    cout << " WARNING !" << endl;
    cout << " SKS hanya boleh angka 2 dan 4 " << endl;
    cout << " Range nilai matkul hanya boleh angka 0 sampai 4 " << endl;
    cout << " " << endl;
    makeline(55);
    cout << " " << endl;
    
        
        for (int i=0; i<5; i++)
        {
            cout<<"Masukkan jumlah SKS matkul ke-"<< i+1 << " : "; cin >> sks; 
        if(sks!=2 && sks!=4)
            {
            cout<<"Maaf, penulisan SKS tidak sesuai ketentuan" << endl;
                    break;
            }
             
            cout<<"Masukkan nilai matkul ke-"<< i+1 << "      : "; cin >> matkul;

         if (matkul<0 || matkul > 4)
                {
                cout << "Maaf, penulisan nilai mata kuliah anda tidak memenuhi syarat" << endl;
                    break;
                }
            
        cout << " " << endl;

        mutumatkul= sks * matkul;
        totalmutu += mutumatkul;
        totalsks += sks;
        ips = totalmutu / totalsks ;
        
        // totalmutu = totalmutu+mutumatkul;----> artinya sama saja dengan totalmutu+=mutumatkul
        // A=A+1 ----> Itu sama saja dengan A+=1
        // C=C+A ----> C+=A
        // D= D * C ---> D*=C
        // A++ ---> PRINT

      
        
        }

        makeline(55);
        cout << " " << endl;
        cout << "Nama    : " << nama << endl;
        cout << "NIM     : " << nim << endl;
        cout << "Jurusan : " << jurusan << endl;

    
        

        cout << "IPS     : " << ips << endl;

        cout <<               " Nilai anda otomatis tersimpan dalam sistem kami" << endl;

getch();
return 0;

}