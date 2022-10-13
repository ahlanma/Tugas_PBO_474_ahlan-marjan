#include <iostream>
using namespace std;

int main(){

        int pilihan;
        char ulang;

        do {
            cout << "##  Daftar Menu Makanan & minuman ##" << endl;
            cout << "============================" << endl;
            cout << "1. Indomie" << endl;
            cout << "2. Nasi ayam" << endl;
            cout << "3. Nasi ikan" << endl;
            cout << "4. Nasi telur" << endl;
            cout << "5. Teh tarik" << endl;
            cout << "6. Teh anget" << endl;
            cout << "7. Es teh" << endl;
            cout << "8. Kopi hitam" << endl;
            cout << endl;

            cout << "Pilihan anda: ";
            cin >> pilihan;

            switch(pilihan){
                case 1:
                    cout << "Anda memilih Teh Susu" << endl;
                    break;
                case 2:
                    cout << "Anda memilih Teh Thai Tea" << endl;
                    break;
                case 3:
                    cout << "Anda memilih Teh Red Velvet" << endl;
                    break;
                case 4:
                    cout << "Anda memilih Teh Avocado" << endl;
                    break;
                case 5:
                    cout << "Anda memilih Teh Tarik" << endl;
                    break;
                case 6:
                    cout << "Anda memilih Teh anget" << endl;
                    break;
                case 7:
                    cout << "Anda memilih Es teh" << endl;
                    break;
                case 8:
                    cout << "Anda memilih Kopi hitam" << endl;
                    break;
                default:
                    cout << "Menu tidak tersedia" << endl;
            }

            cout << endl;

            cout << "Ingin memilih menu lain (y/t)? : ";
            cin >> ulang;
            //ulang = input.next().charAt(0);

            cout << endl;
        }
        while (ulang!= 't');

        cout << "Terimakasih..." << endl;

    }

