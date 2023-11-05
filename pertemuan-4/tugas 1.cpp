#include <iostream>

using namespace std;

int main()
{
    //deklarasi variabel
    int batas;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    cout<<"SELAMAT DATANG DI PROGRAM MENAMPILKAN BILANGAN GANJIL,GENAP,PRIMA"<<endl;
    cout<<"                     BESERTA FAKTORNYA"<<endl;
    cout<<"\nMasukkan batas bilangan : ";
    cin>>batas;//masukkan angka untuk batas bilangan yang ingin dilihat bilangan ganjil,genap,prima serta faktornya

    //tampilan bilangan ganjil
    cout<<"\n1. Bilangan Ganjil\n";
    //perulangan dari bilangan 1 hingga batas bilangan,hanya angka ganjil
    for (int a = 1; a <= batas; a++){
        if (a == 1){
            //menampilkan bilangan ganjil
            cout<<"\nBilangan ganjil dari angka 1 sampai " << batas << " adalah : ";
        }
        if (a % 2 != 0){
            cout<<a<<" ";//menampilkan hasil bilangan ganjil
            jumlahGanjil+=a;//memasukkan bilangan ganjil yang telah ditemukan untuk ditampilkan dan mencari faktornya
        }
    }

    //menampilkan jumlah bilangan ganjil
    cout<<"\nJumlah bilangan ganjil dari angka 1 sampai " << batas << " adalah : " <<jumlahGanjil;

    //menampilkan faktor bilangan ganjil
    cout<<"\nFaktor dari jumlah bilangan ganjil adalah : ";

    //perulangan bilangan ganjil untuk mencari faktornya
    for (int b = 1; b <= jumlahGanjil; b++){
         if (jumlahGanjil % b == 0){
            cout << b << " ";//menampilkan faktor bilangan
         }
    }

    cout<<endl<<endl;

    //tampilan bilangan genap
    cout<<"2. Bilangan Genap\n";
    //perulangan dari bilangan 1 hingga batas bilangan,hanya angka genap
    for (int c = 1; c <= batas; c++){
        if (c == 1){
            //menampilkan bilangan genap
            cout<<"\nBilangan genap dari angka 1 sampai " << batas << " adalah : ";
        }
        if (c % 2 == 0){
            cout << c << " ";//menampilkan hasil bilangan genap
            jumlahGenap+=c;//memasukkan bilangan genap yang telah ditemukan untuk ditampilkan dan mencari faktornya
        }
    }

    //menampilkan jumlah bilangan genap
    cout<<"\nJumlah bilangan genap dari angka 1 sampai " << batas << " adalah : " <<jumlahGenap;

    //menampilkan faktor bilangan genap
    cout<<"\nFaktor dari jumlah bilangan genap adalah : ";

    //perulangan bilangan genap untuk mencari faktornya
    for (int d = 1; d <= jumlahGenap; d++){
         if (jumlahGenap % d == 0){
            cout << d << " ";//menampilkan faktor bilangan
         }
    }


    cout<<endl<<endl;

    //tampilan bilangan genap
    cout<<"3. Bilangan Prima\n";
    //perulangan dari bilangan 1 hingga batas bilangan,hanya angka prima
    for (int e = 1; e <= batas; e++){
            if (e == 1){
                // memnampilkan bilangan prima
                cout<<"\nBilangan prima dari angka 1 sampai " << batas << " adalah : ";
            }

            //perulangan inner dari angka 2 (karna 1 adalah faktor dari semua bilangan) hingga angka yang diinput user,angka yang di ulang akan menjadi faktor
            for (int l = 2; l <= batas; l++){
                // jika faktor suatu angka bukan dirinya sendiri,maka dilewat
                 if (e % l == 0 && e != l){
                     break;
                //jika faktor suatu angka bernilai lebih dari 1 dan faktornya dirinya sendiri,maka tampilkan
                 } else if (e > 1 && e % l == 0 && e == l){
                    cout<< e << " ";//menampilkan bilangan prima
                    jumlahPrima+=e;//memasukkan bilangan ganjil yang telah ditemukan untuk ditampilkan dan mencari faktornya
                 }
            }
    }

    //menampilkan jumlah bilangan prima
    cout<<"\nJumlah bilangan prima dari angka 1 sampai " << batas << " adalah : " << jumlahPrima;

    //menampilkan faktor bilangan prima
    cout<<"\nFaktor dari jumlah bilangan prima adalah : ";
    for (int f = 1; f <= jumlahPrima; f++){
         if (jumlahPrima % f == 0){
             cout << f << " ";//hasil faktor bilangan prima
         }

    }
     cout<<"\n\nSELAMAT BILANGAN GANJIL,GENAP,PRIMA,BESERTA FAKTORNYA TELAH DITENTUKAN"<<endl<<endl;

    return 0;
}
