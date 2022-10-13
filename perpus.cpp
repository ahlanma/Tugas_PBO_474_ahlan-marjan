#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;


class Perpustakaan {
	public:
		void inputBuku();
		
	private:

};
	








//void Perpustakaan::inputBuku()
//{
//
//}	
	int bk;
	int id[50]; 
	string jd_buku[50];
	string pengarang[50];
	int stok_buku[50];
	
//int cetakBuku(int bk){
//	if(bk == 0){
//		return 1;
//	}
//	else{
//		cout << "Masukan ID buku        :"; cin >> id[i];
//		cout << "Masukan judul buku     :"; cin >> jd_buku[i];
//		cout << "Masukan pengarang buku :"; cin >> pengarang[i];
//		cout << "Masukan stok buku  	:"; cin >> stok_buku[i];
//		return inputBuku(bk-1);
//	}
//}

void cetakBuku(int bk){
	for(int i = 0; i < bk; i++)
	{		
		cout << "ID buku        :" << id[i] << endl;
		cout << "judul buku     :" << jd_buku[i] << endl;
		cout << "pengarang buku :" << pengarang[i] << endl;
		cout << "stok buku  	:" << stok_buku[i] << endl;
    }
}

int main(){
	//Perpustakaan x;
	int a;
	cout << "+-----------------------------------+" << endl;
	cout << "| SELAMAT DATANG DI PERPUSTAKAAN 99 |" << endl;
	cout << "+-----------------------------------+" << endl;
	cout << endl;
	awal:
	cout << "[1]. Input data buku" << endl;
	cout << "[2]. Lihat data buku" << endl;
	cout << "[3]. Edit  data buku" << endl;
	cout << "[4]. Hapus data buku" << endl;
	cout << "[5]. Peminjaman data buku" << endl;
	cout << "[6]. Pengembalian buku" << endl;
	cout << "[7]. Cari buku" << endl;
	
	cout << "Pilih menu :";
	cin >> a;
	switch(a) 
	{
		case 1:
		{
			system("cls");
			
			cout << "== Input data buku ==" << endl;
				cout << "Masukan banyak buku    :"; 
				cin >> bk;
				cout << endl;
				for(int i = 0; i < bk; i++)
			    {		
				cout << "Masukan ID buku        :"; cin >> id[i];
				cout << "Masukan judul buku     :"; cin >> jd_buku[i];
				cout << "Masukan pengarang buku :"; cin >> pengarang[i];
				cout << "Masukan stok buku  	:"; cin >> stok_buku[i];
     		    }
     		    
     		    
			system("cls");
			goto awal;
			
			break;
		}	
		case 2:
		{
			cout << "Lihat data:" << endl;
			cetakBuku(bk);
			getch();
			system("cls");
			goto awal;
			break;
		}
		case 3:
		{
			cout << "Edit data buku:" << endl;
			break;
		}
		case 4:
		{
			cout << "Hapus data buku:" << endl;
			break;
		}
		case 5:
		{
			cout << "Peminjaman buku:" << endl;
			break;
		}
		case 6:
		{
			cout << "Pengembalian buku:" << endl;
			break;
		}
		case 7:
		{
			cout << "Cari buku:" << endl;
			break;
		}
	}
}
