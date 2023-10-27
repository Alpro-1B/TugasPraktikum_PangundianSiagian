#include <iostream>

using namespace std;

int main()
{
    //meperkenalkan variabel
    float sisi,panjang,lebar,alas,tinggi;//digunakan agar user dapat menginput satuan cm yang berbentuk desimal
    char luas;

    cout<<"SELAMAT DATANG DI PENGHITUNG LUAS  \n 1.PERSEGI \n 2.PERSEGI PANJANG DAN \n 3.SEGITIGA"<<endl;
    cout<<"KETIK SIMBOL 'P' agar melanjutkan perhitungan luas PERSEGI"<<endl<<endl;
    cout<<"KETIK SIMBOL 'T' agar melanjutkan perhitungan luas PERSEGI PANJANG"<<endl<<endl;
    cout<<"KETIK SIMBOL 'S' agar melanjutkan perhitungan luas SEGITIGA"<<endl<<endl;
    cout<<"JIKA ANGKA ANDA, BERBENTUK NILAI DESIMAL MAKA GUNANAKAN TITIK {.} UNTUK MENGGANTI KOMA"<<endl<<endl;
    cout<<"MASUKKAN ANGKA TANPA MENAMBAH SATUAN PANJANGNYA"<<endl<<endl;
    cout<<"HASIL DARI PERHITUNGAN INI ADALAH CM"<<endl<<endl;

    //meminta user untuk memasukkan simbol agar bisa memilih opsi
    cout<<"Masukkan SIMBOL untuk menghitung luas: ";
    cin>>luas;

    //proses pengkondisian sesuai dengan opsi yang di pilih user
    switch(luas) {
    case 'P' :
        //perhitungan luas persegi
        cout<<"\nMENGHITUNG LUAS PERSEGI"<<endl;
        cout<<"\nMASUKKAN SISI: ";
        cin>>sisi;//meminta user memasukkan nilai sisi
        cout<<"\nLUAS PERSEGI ADALAH : "<<sisi*sisi <<"cm"<<endl;//melakukan perhitungan dan juga menampilkan hasil dari luas persegi
        break;
    case 'T' :
        //perhitungan luas persegi panjang
        cout<<"\nMENGHITUNG LUAS PERSEGI PANJANG"<<endl;
        cout<<"\nMASUKKAN PANJANG : ";
        cin>>panjang;//meminta user memasukkan nilai panjang
        cout<<"MASUKKAN LEBAR : ";
        cin>>lebar;//meminta user memasukkan nilai lebar
        cout<<"\nLUAS PERSEGI PANJANG ADALAH : "<<panjang*lebar<<"cm"<<endl;//melakukan perhitungan dan juga menampilkan hasil dari luas persegi panjang
        break;
    case 'S' :
        //perhitungan luas segitiga
        cout<<"\nMENGHITUNG LUAS SEGITIGA"<<endl;
        cout<<"\nMASUKKAN ALAS : ";
        cin>>alas;//meminta user memasukkan nilai alas
        cout<<"MASUKKAN TINGGI : ";
        cin>>tinggi;//meminta user memasukkan nilai tinggi
        cout<<"\nLUAS PERSEGI PANJANG ADALAH: "<<0.5*alas*tinggi<<"cm"<<endl;//melakukan perhitungan dan juga menampilkan hasil dari luas segitiga
        break;
    default:
        //menampilkan pesan berikut jika simbol yang dimasukkan salah karna tidak ada opsi
        cout<<"\nMOHON MAAF PROGRAM PERHITUNGAN TIDAK DAPAT BERJALAN,MUNGKIN SIMBOL ANDA SALAH.COBA CHECK KEMBALI"<<endl;
        break;
    }



    return 0;
}
