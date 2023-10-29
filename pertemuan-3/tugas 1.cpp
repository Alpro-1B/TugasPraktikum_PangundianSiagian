#include <iostream>

using namespace std;

int main()
{
    // memperkenalan variabel
    float score;// digunakan agar user dapat menginput nilai yang berbentuk desimal
    string masukkanNama;
    string masukkanNpm;//nama dan npm menggunakan string, karna nama dan npm tidak akan di lakukan perhitungan

    cout<<"SELAMAT DATANG DI PROGRAM MENENTUKAN PREDIKAT DARI NILAI MAHASISWA"<<endl<<endl;
    cout<<"JIKA NILAI ANDA, BERBENTUK NILAI DESIMAL MAKA GUNANAKAN TITIK {.} UNTUK MENGGANTI KOMA"<<endl;
    //inputkan nama
    cout<<"\nMasukkan Nama: ";
    cin>>masukkanNama;
    //digunakan ketika nama user menggunakan spasi
    getline(cin, masukkanNama);
    //inputkan NPM
    cout<<"\nMasukkan NPM: ";
    cin>>masukkanNpm;
    //inputkan Nilai yang ingin di cari  akan mendaptkan A,B,C,D atau E
    cout<<"\nMasukkan Nilai: ";
    cin>>score;

    //Penentuan predikat dari nilai yang dimasukkan
    // nilia A di dapat jika Nilai mulai dari 90
    if(score >=90){
        cout<<"\nSelamat! Anda Mendapatkan Nilai A."<<endl;
    //jika nilai yang di dapat mulai dari rentang 80 sampai 89 maka akan mendapatkan nilai B
    }else if (score >=80){
        cout<<"\nAnda Mendapatkan Nilai B."<<endl;
    // jika nilai yang di dapat mulai dari rentang 70 sampai 79 maka akan mendapatkan Nilai C
    }else if (score >=70){
        cout<<"\nAnda Mendapatkan Nilai C."<<endl;
    // jika nilai yang di dapat mulai dari rentang 60 sampai 69 maka akan mendaptkan nilai D
    }else if (score >=60){
        cout<<"\nAnda Mendapatkan Nilai D."<<endl;
    // jika nilai kurang dari 6o, rentang 59 sampai kebawah maka akanmendaptkan nilai E
    }else {
        cout<<"\nAnda mendapatkan Nilai E Dan dinyatakan ANDA TIDAK LULUS."<<endl;
    }
    cout<<"\nTERIMAKASIH ATAS KEPERCAYAAN ANDA TERHADAP PROGRAM MENENTUKAN PREDIKAT DARI NILAI MAHASISWA"<<endl;

    return 0;

}
