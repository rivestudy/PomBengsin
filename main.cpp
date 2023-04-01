#include <iostream>

using namespace std;

//METHODS
class penghitungan{
public:
    double pertalite(double uang){
    return uang/10000;
    }
    double pertamax(double uang){
    return uang/13300;
    }
    double pertamaxTurbo(double uang){
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
void overp(string katakata){
    cout<<" Pembelian " <<katakata << " Maksimal Rp.500.000!\n\n ";
    }
void overs(string katakata){
    cout<<" Pembelian " <<katakata << " Maksimal Rp.1.000.000!\n\n ";
    }

//MAIN CLASS
int main()
    {
    penghitungan hitung;
    int jenis, repeat, ulang;
    cout<<"Pom Bengsin Perminyakan \n\n";
    do{
        double liter, harga, nominal;
        cout<<"|     Silahkan pilih jenis BBM Anda!     |\n|     1. pertalite                       | \n|     2. pertamax                        |\n|     3. pertamax turbo                  |\n|     4. solar                           |\n";
        cin>>jenis;
        switch(jenis){
            case 1:
                cetak("pertalite");
                cin>>nominal;
                if (nominal < 0){
                gagal("pertalite");
                } else if (nominal > 500000){
                overp("pertalite") ;
                } else {
                liter = hitung.pertalite(nominal);
                kwitansi("pertalite", liter, nominal);
                } break;

            case 2:
                cetak("pertamax");
                cin>>nominal;
                if (nominal < 0){
                gagal("pertamax");
                } else {
                liter = hitung.pertamax(nominal);
                kwitansi("pertamax", liter, nominal);
                } break;

            case 3:
                cetak("pertamax turbo");
                cin>>nominal;
                if (nominal < 0){
                gagal("pertamax turbo");
                } else {
                liter = hitung.pertamaxTurbo(nominal);
                kwitansi("pertamax turbo", liter, nominal);
                } break;

            case 4:
                cetak("solar");
                cin>>nominal;
                if (nominal < 0){
                gagal("solar");
                } else if (nominal > 1000000){
                overs("solar") ;
                } else {
                liter = hitung.solar(nominal);
                kwitansi("solar", liter, nominal);
                } break;

            default:
                cout<<"Masukkan jenis dengan benar! \n\n";
                break;
            }

        do {
            cout<<"Lanjut Isi? \n 1. Reset Mesin (lanjut mengisi) \n 2. Matikan Mesin \n";
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
