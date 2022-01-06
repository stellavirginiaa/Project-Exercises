#include <iostream>
using namespace std;

struct barang 
{
string produk[4] = {"Butter 1 kilo", "Tepung 10 kg", "Baking mix", "Loyang"};
int harga[4] = {120000, 180000, 70000, 50000};
};

void menu()
{
    cout << endl;
    cout << " No. Menu" << "\t" << "Nama barang" << "\t\t" << "Harga satuan" << endl;
    cout << "\t1. " << "\t" << "Butter 1 kilo" << "\t\t" << "Rp. 120000 " << endl;
    cout << "\t2. " << "\t" << "Tepung 10 kg" << "\t\t" << "Rp. 180000"  << endl;
    cout << "\t3. " << "\t" <<  "Baking mix" << "\t\t" << "Rp. 70000"  << endl;
    cout << "\t4. " << "\t" << "Loyang" << "\t\t\t" << "Rp. 50000"  << endl;
}

int main()
{
    menu();
    cout << "============================================================" << endl;

   int kode, jumlah, harga = 0, hasil, diskonutama=0, diskontambahan=0;
   string tanya = "ya";

   barang beli;

   do
   {
       cout << " Masukkan kode barang : ";cin >> kode;

       cout << "Nama barang :" << beli.produk[kode-1] << endl;
       cout << "Jumlah barang :"; cin >> jumlah;

       hasil = jumlah * beli.harga[kode-1];
       harga += hasil;


    cout << "Apakah masih ada yang ingin dibeli (y/n) ?"; cin >> tanya;
   } while (tanya == "y" );
   {
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
          cout << "Diskon utama \t = 0" << endl;
      }
         
    
    
        
      if ( jumlah >=10 )
      {
          diskontambahan = 0.05 * harga;
          cout << "Diskon tambahan \t:" << diskontambahan << endl;
      }
     
     else if (jumlah >=5 && jumlah <10)
      {
          diskontambahan = 0.02 * harga;
          cout << "Diskon tambahan :" << diskontambahan << endl;
      }
      else 
      {
          cout << "Diskon tambahan = 0 "  << endl;
      }
      
    
   s
      cout << "Total harga setelah diskon : " << ( harga - diskonutama - diskontambahan ) << endl;
      cout << "Terimakasih telah berbelanja " << endl;

    cout << "Entry baru ? (y/n)"; cin >> tanya;
    if ( tanya =="y" || tanya =="Y" )
    {

      system("cls");
    }

   }
   
