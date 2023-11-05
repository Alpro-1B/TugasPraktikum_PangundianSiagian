#include <iostream>

using namespace std;

int main()
{

    int tinggi;//deklarasi variabel
    int j;//deklarasi variabel
    int k;//deklarasi variabel
    int l;//deklarasi variabel

    cout<<"SELAMAT DATANG DI PROGRAM PIRAMIDA BINTANG"<<endl<<endl;
    cout<<"Masukkan Angka untuk membuat Piramida Bintang : ";
    cin>>tinggi;//meminta user memasukkan angka untuk membuat piramida bintang


    //proses menampilkan piramida bintang
    //perulangan luar untuk membuat tinggi segitiga
    for(j=1; j<=tinggi;  j++) {
            //perulangan dalam mendorong bintang ke kanan
        for(k=1; k<=tinggi-j; k++){
                cout<<" ";
        }
        for(l=1; l<=j; l++) {
            cout<<" *";//menampilkan karakter bintangnya
        }
        cout<<endl;
    }
    cout<<"\nSELAMAT PIRAMIDA BINTANG TELAH DIBUAT"<<endl<<endl;
    return 0;
}
