#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
int input;
string menu;
 
 
cout<<"Pilihlah Menu Makan Anda Hari ini :"<<endl;
cout<<"1. Nasi Goreng"<<endl;
cout<<"2. Soto Babat + Nasi"<<endl;
cout<<"3. Ayam Bakar"<<endl;
cout<<"Masukkan Pilihan Makanan Anda Hari ini :";
cin>>input;
 
if (input==1) {
cout<<"Anda Menu Anda Hari ini Nasi Goreng"<<endl;
cout<<"============================"<<endl;
cout<<"Mau Pake Sambal? :";
cin>>menu;
cout<<"============================"<<endl;
if (menu=="Y") {
cout<<"Selamat Makan Siapkan Tisu untuk usap Keringat";
} else
cout<<"Selamat Makan";
}
else if (input==2) {
cout<<"Anda memilih Soto Babat + Nasi";
} else if (input==3) {
cout<<"Anda memilih Ayam Bakar";
} else {
cout<<"Mohon Maaf tidak ada dalam pilihan";
}
}
