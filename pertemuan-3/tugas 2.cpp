#include <iostream>

using namespace std;

int main()
{
    //Memperkenalkan Variabel
    float pertama,kedua,ketiga;//digunakan agar user dapat menginput nilai yang berbentuk desimal

    cout<<"SELAMAT DATANG DI PROGRAM PEMBANDING ANGKA TERBESAR"<<endl<<endl;
    cout<<"JIKA ANGKA ANDA, BERBENTUK NILAI DESIMAL MAKA GUNANAKAN TITIK {.} UNTUK MENGGANTI KOMA"<<endl<<endl;
    //Input nilai pertama
    cout<<"Masukkan Angka Pertama: ";
    cin>> pertama;
    //Input nilai kedua
    cout<<"\nMasukkan Angka Kedua: ";
    cin>> kedua;
    //Input nilai ketiga
    cout<<"\nMasukkan Angka Ketiga: ";
    cin>> ketiga;

    //Proses menentukkan
    //operartor && digunakan agar karna satu angka harus lebih besar dari kedua angka lainnya
    //jika angka pertama lebih besar dari dua angka lainnya
    if (pertama>kedua && pertama>ketiga){
        //tampilkan angka terbesar (jika angka pertama lebih besar dari yang lainnya)
        cout<<"\nAngka terbesar adalah:"<<pertama<<endl;
    }else if(kedua>pertama && kedua>ketiga){
        //tampilkan angka terbesar (jika angka kedua lebih besar dari yang lainnya)
        cout<<"\nAngka terbesar adalah:"<<kedua<<endl;
    }else if (ketiga>pertama && ketiga>kedua){
        //tampilkan angka terbesar (jika angka ketiga lebih besar dari yang lainnya)
        cout<<"\nAngka terbesar adalah:"<<ketiga<<endl;
    }else {
        // jika angka yang dimasukkan sama besar maka tampilkan pesan berikut
        cout<<"\nAngka yang anda masukkan Tidak dapat diproses, coba check kembali."<<endl;
    }

    cout<<"\nTERIMAKASIH ATAS KEPERCAYAAN ANDA TERHADAP PROGRAM PEMBANDING ANGKA TERBESAR"<<endl;

    return 0;
}
