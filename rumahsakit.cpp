/*Jika Pasien lama inputkan nomor pasien dan keluhan penyakit anda. Output saran ke dokter 
1. Penyakit Dalam, 
2. THT dan 
3. Dokter Mata. 
Sebaliknya pasien baru output “Harus Daftar dulu”. 
Jelaskan apa saja yang menjadi parameter dalam program yang kalian buat dan sebutkan kekurangan program tersebut.  */

#include <iostream>
using namespace std;

int main()
{
char jawab;
int tanggal, bulan, tahun;
string registrasi, nama, nik, lahir, alamat, gender;

cout << "\tRUMAH SAKIT BUNDA MULIA" <<  endl;
cout << "=================================================" << endl;;
cout << "Apakah anda sudah pernah mendaftar ?" << endl;
cout << "1. Sudah" << endl;
cout << "2. Belum" << endl;
cout << "Masukkan jawaban : "; cin >> jawab; cin.ignore();
cout << "\n";

    if ( jawab == '1' || jawab =='2' )
    {
    if ( jawab == '2' )
    {
    cout << "SILAHKAN LAKUKAN PENDAFTARAN DENGAN FORM SEBAGAI BERIKUT !" << endl;
    cout << "Nama : "; getline(cin, nama); 
    cout << "NIK : "; getline(cin, nik); 
    cout << "Tanggal lahir ( DD ):"; cin >> tanggal; cin.ignore();
    cout << "\tBulan ( MM ) : "; cin >>  bulan; cin.ignore();
    cout << "\tTahun ( YYYY ): "; cin >> tahun; cin.ignore();
    cout << "Alamat : "; getline(cin, alamat); 
    cout << "Jenis kelamin ( M / F ): "; cin >> gender; cin.ignore();
    cout << "\n";
    if ( gender == "F" )
    {
        cout << "Registrasi selesai !" << endl;
        cout << "Nomor registrasi anda adalah : " << "954" << tanggal << bulan << tahun;
        cout << "\n";
    }
    else if ( gender == "M" )
    {
        cout << "Registrasi selesai !" << endl;
        cout << "Nomor registrasi anda adalah : " << "845" << tahun << tanggal << bulan;
    }
    }
    
    cout << "\n";
    cout << "Masukkan nomor registrasi anda :  "; cin >> registrasi;
    cout << "\n";
    cout << "Apa keluhan anda ?" << endl;
    cout << "1. Nyeri pada area dalam tubuh" << endl;
    cout << "2. Sakit pada bagian telinga,  hidung, dan tenggorokan" << endl;
    cout << "3. Gangguan atau nyeri pada pengelihatan" <<  endl;
    cout << "Sebutkan keluhan anda : "; cin >> jawab;
    if ( jawab =='1' )
    {
        cout << "Silahkan melakukan pendaftaran ulang ke bagian penyakit dalam" << endl;
    }
    else if ( jawab=='2'  )
    {
        cout << " Silahkan melakukan pendaftaran ulang ke bagian THT" << endl;
    }
    else if ( jawab=='3' )
    {
        cout << " Silahkan melakukan pendaftaran ulang ke spesialis mata" << endl;
    }
    else
    {
        cout  << " Maaf, hari ini tidak ada jadwal untuk dokter yang anda tuju" << endl;
    }
    }
    
}
