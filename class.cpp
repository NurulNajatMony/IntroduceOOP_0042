#include <iostream>
using namespace std;

class Mobil
{
    public:
    string nama_mobil;
    string tipe_mobil;

private:
    int harga_mobil;

public:
    void input_data(){
        cout << "Masukkan nama mobil : ";
        cin >> nama_mobil;
        cout << "Masukkan tipe mobil : ";
        cin >> tipe_mobil;
        cout << "Masukkan harga mobil : ";
        cin >> harga_mobil;
    }
    void output_data(){
        cout << "harga mobil = " << harga_mobil << endl;
    }

};

int main()
{
    Mobil nurul;
    nurul.input_data();
    cout << "nama mobil = " << nurul.nama_mobil << endl;
    cout << "tipe mobil = " << nurul.tipe_mobil << endl;
    nurul.output_data();
}


