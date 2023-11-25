#include <iostream>

using namespace std;

int main()
{
    cout<<"SELAMAT DATANG DI PROGRAM PEMBANDING ANGKA TERBESAR MENGGUNAKAN ARRAY"<<endl<<endl;

    int ind;//mendeklarasikan variabel untuk memasukkan rentan angka

    //menampilkan rentang yang telah di input oleh user
    cout<<"MASUKKAN RENTANG ANGKA YANG ANDA INGIN BANDINGKAN : ";
    cin>>ind;//user memasukkan nilai

    int nilai[ind];//mendeklarasikan bahwa ini adalah varibel array kosong dan tidak ada data di dalamnya

    //melakukan looping untuk memasukkan nilai perbandingan
    for (int a = 0; a <ind; ++a)
    {
        cout<<"Masukkan Nilai Array Ke " << a+1 << " : ";
        cin>>nilai[a];
    }

    //mendeklarasikan variabel dengan nilai tertinggi pada array
    int nilaiTerbesar = nilai[0];
    //mendeklarasikan nilai pertama pada index adalah 0
    int nilaiIndex = 0;

    //melakukan looping untuk menentukan nilai terbesar
    for (int a = 0; a < ind; ++a)
    {
        if (nilai[a] > nilaiTerbesar)
        {
            nilaiTerbesar = nilai[a];
            nilaiIndex = a;//
        }
    }
     cout << "\nNilai Terbesar Didalam Array Adalah : " << nilaiTerbesar << endl;

     //memeriksa nilai apakah berada pada array
     for (int y = 0; y < ind; ++y)
     {
        if (nilai[y] == nilaiTerbesar)
        {
            nilaiIndex = y;
        }
     }
     cout << "\nNilai Tersebut Berada Pada Array"<<endl;

    //menampilkan nilai index
    if (nilaiIndex != 0)
    {
        cout << "Dan Berada Pada Index : "<< nilaiIndex << endl;
    }


    return 0;
}
