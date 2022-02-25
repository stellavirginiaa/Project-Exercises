#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;

struct bts
{
    string produk[7] = {"School Luv Affair", "Dark&Wild", "Young Forever", "Youth", "Wings", "Love Yourself", "Butter"};
    int harga[7] = {130000, 120000, 145000, 115000, 150000, 165000, 175000};
    
};

void menu()
{
    cout << endl;
    cout << " No. Menu" << "\t" << "Nama barang" << "\t\t" << "Harga satuan" << endl;
    cout << "\t1. " << "\t" << "School Luv Affair" << "\t" << "Rp. 130.000 " << endl;
    cout << "\t2. " << "\t" << "Dark&Wild" << "\t\t" << "Rp. 120.000"  << endl;
    cout << "\t3. " << "\t" <<  "Young Forever" << "\t\t" << "Rp. 145.000"  << endl;
    cout << "\t4. " << "\t" << "Youth" << "\t\t\t" << "Rp. 115.000"  << endl;
    cout << "\t5. " << "\t" << "Wings" << "\t\t\t" << "Rp. 150.000 " << endl;
    cout << "\t6. " << "\t" << "Love Yourself" << "\t\t" << "Rp. 165.000"  << endl;
    cout << "\t7. " << "\t" <<  "Butter" << "\t\t\t" << "Rp. 175.000"  << endl;
   
}

void makeline(int length)
{
    for (int j=0; j<length; j++)
        cout << "=";
    cout << "\n";
}
void makeline1(int length)
{
    for (int j=0; j<length; j++)
        cout << "-";
    cout << "\n";
}

int main()
{
    int kode, jumlah, harga = 0, hasil, diskonutama=0, diskontambahan=0;
    time_t now = time(0);
    char * dt = ctime(&now);
    string tanya = "ya";

    cobalagi: //goto
    cout << endl;
    cout << endl;
    makeline(55);
    // cout << " " << endl;
    cout << "                  BORAHAEWORLD" << endl;
    cout << "                  I [PURPLE] YOU" << endl;
    cout << "        Waktu : " << dt << endl;
    makeline(55);

    menu();
    makeline(55);
    
 
  
   bts beli;

   do
   {
       cout << "Masukkan kode barang : ";cin >> kode;

       cout << "\tNama barang :" << beli.produk[kode-1] << endl;
       cout << "\tJumlah barang :"; cin >> jumlah;

       hasil = jumlah * beli.harga[kode-1];
       harga += hasil;


    cout << "=>Apakah masih ada yang ingin dibeli (y/n) ?"; cin >> tanya;
    cout << endl;
   } while (tanya == "y" );
   {
       cout << " vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv" << endl;
       cout << endl;
       cout << "Total belanja anda adalah " << harga << endl;
   }

   
      if ( harga >=2000000 )
      {
          diskonutama = 0.15 * harga;
          cout << "Diskon utama \t:" << diskonutama << endl;
      }
      else if (harga >=1000000)
      {
          diskonutama = 0.1 * harga;
          cout << "Diskon utama \t:" << diskonutama << endl;
      }
       else if (harga >=500000)
      {
          diskonutama = 0.05 * harga;
          cout << "Diskon utama \t:" << diskonutama << endl;
      }
      else 
      {
          cout << "Diskon utama \t : 0" << endl;
      }
         
    
    
        
      if ( jumlah >=10 )
      {
          diskontambahan = 0.05 * harga;
          cout << "Diskon tambahan \t:" << diskontambahan << endl;
      }
     
     else if (jumlah >=5 || jumlah <10)
      {
          diskontambahan = 0.02 * harga;
          cout << "Diskon tambahan :" << diskontambahan << endl;
      }
      else 
      {
          cout << "Diskon tambahan : 0 "  << endl;
      }
      
    
      cout << "Total harga setelah diskon : " << ( harga - diskonutama - diskontambahan ) << endl;
      cout << endl;
      cout << "\tTerimakasih telah berbelanja di BORAHAEWORLD " << endl;
      cout << endl;
      cout << endl;

    cout << "Entry baru ? (y/n)"; cin >> tanya;
    if ( tanya =="y" || tanya =="Y" )
    {

      goto cobalagi;

    }
    cout << endl;
    return 0;

   }