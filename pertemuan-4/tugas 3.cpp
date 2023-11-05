#include <iostream>

using namespace std;

int main()
{

    int n;//deklarasi variabel
    int a=0;//deklarasi variabel dan inisialisasi
    int b=1;//deklarasi variabel dan inisialisasi

    cout<<"SELAMAT DATANG DI PROGRAM DERET FIBONACCI"<<endl<<endl;
    cout<<"Masukkan angka yang di inginkan untuk deret fibonacci : ";
    cin>>n;//meminta user memasukkan angka untuk deret fibonacci yang diinginkan



    //looping untuk membuat deret fibonacci
    cout<<"\nBerikut adalah deret fibonacci : ";// menampilkan output deret fibonacci
    for (int m = 0; m < n; m++) {
        cout << a << " ";//menampilkan angka

        int c=a + b;//dijumlah untuk menghitung angka selanjutnya deret fibonacci
            a=b;//menggeser angka sebelumnya menjadi angka saat ini
            b=c;//menggeser angka saat ini menjadi angka selanjutnya
    }

    cout<<"\n\nSELAMAT DERET FIBONACCI TELAH DITEMUKAN"<<endl<<endl;

    return 0;
}
