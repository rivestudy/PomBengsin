#include <iostream>

using namespace std;

//METHODS
class penghitungan{
public:
    double pertalet(double uang){
    return uang/10000;
    }
    double pertamak(double uang){
    return uang/13300;
    }
    double pertamakTurbo(double uang){
    return uang/15100;
    }
    double solar(double uang){
    return uang/6800;
    }
};

//FUNCTIONS
void cetak(string katakata){
    cout<<"Mau beli " << katakata << " seharga berapa? :\n";
    }
void gagal(string katakata){
    cout<<"Pembelian " << katakata << " tidak bisa dibawah 0!\n";
    }
void kwitansi(string bbm, double banyak, int uang){
    cout<<"Berhasil mengisi " <<bbm <<" sebanyak " << banyak << " liter \nTotal dibayar = Rp."<< uang <<"!\n\n";
    }

//MAIN CLASS
int main()
    {
    penghitungan hitung;
    int jenis, repeat, ulang;
    cout<<"Pom Bengsin Perminyakan \n\n";
    do{
        double liter, harga, nominal;
        cout<<"Silahkan pilih jenis BBM Anda! \n 1. pertalet \n 2. pertamak \n 3. pertamak turbo \n 4. solar \n";
        cin>>jenis;
        switch(jenis){
            case 1:
                cetak("pertalet");
                cin>>nominal;
                if (nominal < 0){
                gagal("pertalet");
                } else {
                liter = hitung.pertalet(nominal);
                kwitansi("pertalet", liter, nominal);
                } break;

            case 2:
                cetak("pertamak");
                cin>>nominal;
                if (nominal < 0){
                gagal("pertamak");
                } else {
                liter = hitung.pertamak(nominal);
                kwitansi("pertamak", liter, nominal);
                } break;

            case 3:
                cetak("pertamak turbo");
                cin>>nominal;
                if (nominal < 0){
                gagal("pertamak turbo");
                } else {
                liter = hitung.pertamakTurbo(nominal);
                kwitansi("pertamak turbo", liter, nominal);
                } break;

            case 4:
                cetak("solar");
                cin>>nominal;
                if (nominal < 0){
                gagal("solar");
                } else {
                liter = hitung.solar(nominal);
                kwitansi("solar", liter, nominal);
                } break;

            default:
                cout<<"Masukkan jenis dengan benar! \n\n";
                break;
            }

        do {
            cout<<"Lanjut Isi? \n 1. Reset Mesin \n 2. Matikan Mesin \n";
            cin>>ulang;
            switch(ulang){
            case 1:
                ulang = 1;
                break;
            case 2:
                ulang = 1;
                repeat = 1;
                break;
            default :
                cout<<"Pilihan tidak valid!\n\n";
                }
        } while (ulang == 0);
    } while (repeat == 0);
    cout<<"Shutting Down!";
    return 0;
}
