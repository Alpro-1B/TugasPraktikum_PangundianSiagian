#include <iostream>

using namespace std;

int main()
{
    //memperkenalkan variabel
    int jumlahTeman,jumlahBebek,sisaBebek;

    cout<<"Masukkan jumlah bebek pak tatang = ";
    //meminta user memasukkan input jumlah bebek
    cin>>jumlahBebek;
    cout<<"Masukkan jumlah teman pak tatang = ";
    //meminta user memasukkan input jumlah teman
    cin>>jumlahTeman;

    //menampilkan jumlah bebek yang dibagi kepada teman pak tatang
    cout<<"\n\nSetiap teman pak tatang akan mendapatkan = " << jumlahBebek/jumlahTeman <<" ekor bebek" <<endl<<endl;
    //menampilkan sisa bebek yang tidak habis terbagi
    cout<<"Setelah semua bebek dibagikan masih tersisah bebek pak tatang sejumlah = " <<(jumlahBebek % jumlahTeman)<<" ekor bebek" <<endl;

return 0;
}
