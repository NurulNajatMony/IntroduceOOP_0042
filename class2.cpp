#include <iostream>
using namespace std;

class persegi_panjang{
    public:
    int panjang;
    int lebar;
    int luas;

public:
    void input_data(){
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }

    void hitung_luas(){
        luas = panjang * lebar;
    }

    void output_data(){
        cout << "tampilkan luas = " << luas << endl;
    }





};
