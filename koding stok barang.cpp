#include <iostream>
#include <iostream>

using namespace std;

class penambahanData{
private:
int stock;

public :
void Pensil ();
void Buku ();
void Penghapus ();
};

void penambahanData::Pensil(){
int stok = 8, stokPensil, total;
cout <<"Masukkan jumlah stok barang = "; cin>> stokPensil;
total = stok + stokPensil;
cout << "Total stok pensil adalah " << total<<endl;
}

void penambahanData::Buku(){
int stok = 10, stokBuku, total;
cout <<"Masukkan jumlah stok barang = "; cin>> stokBuku;
total = stok + stokBuku;
cout << "Total stok buku adalah "<< total<<endl;
}
void penambahanData::Penghapus(){
int stok = 28, stokPenghapus, total;
cout <<"Masukkan jumlah stock barang = "; cin>> stokPenghapus;
total = stock + stokPenghapus;
cout << "Total stok penghapus adalah " << total<<endl;
}

int main (int argc, char** argv){
int pilih;
cout << "No. \t Nama Barang \t stock "<<endl;
cout << "1. \t Pensil \t 8 "<<endl;
cout<<"2. \t Buku \t 10"<<endl;
cout << "3. \t Penghapus \t 28 "<<endl;

cout <<"Pilih barang yang akan ditambah stocknys [1,2,3] = "; cin >> pilih;

if (pilih == 1){
penambahanData pensil;
pensil.Pensil();
cout <<"Terima kasih"<<endl;
}
if (pilih == 2){
penambahanData buku;
buku.Buku();
cout <<"Terima kasih"<<endl;
}
if (pilih ==3){
penambahanData penghapus;
penghapus.Penghapus();
cout <<"Terima kasih"<<endl;
}

return 0;
system("PAUSE");
	
}

