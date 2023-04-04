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
void overp(){
    cout<<" Pembelian pertalite maksimal Rp.1.000.000!\n\n ";
    }
void overs(){
    cout<<" Pembelian solar maksimal Rp.2.000.000!\n\n ";
    }
void kendaraans (string katakata) {
    cout<<"Kendaraan Anda adalah " <<katakata << "\n\n";
    }
void ccs (string katakata) {
    cout<<"Jumlah cc kendaraan Anda " <<katakata << "\n\n";
    }

//MAIN CLASS
int main() {
    penghitungan hitung;
    int kendaraan, cc, jenis, repeat, ulang;
    cout<<"Pom Bengsin Perminyakan \n\n";
    do {
        double liter, harga, nominal;
        ulang = 0;
        cout<<"|     Silahkan pilih kendaraan Anda!     |\n|     1. roda 2                          | \n|     2. roda 4                          |\n Masukkan pilihan : ";
        cin>> kendaraan;
        switch (kendaraan) {
            case 1 :
            kendaraans("roda 2");
            cout<<"|     Berapa jumlah cc kendaraan anda?   |\n|     1.dibawah 200cc                    | \n|     2.diatas 200cc                     |\n Masukkan pilihan : ";
            cin>> cc;
                switch (cc) {
                    case 1 :
                    ccs ("dibawah 200cc");
                    cout<<"|     Pilih jenis BBM anda!              |\n|     1.pertalite                        | \n|     2.pertamax                         |\n Masukkan pilihan : ";
                    cin>> jenis;
                    switch (jenis){
                        case 1 :
                            cetak("pertalite");
                            cin>> nominal;
                            if (nominal < 0){
                            gagal("pertalite");
                            } else if (nominal > 1000000){
                            overp();
                            } else {
                            liter = hitung.pertalite(nominal);
                            kwitansi("pertalite", liter, nominal);
                            } break;

                        case 2 :
                            cetak ("pertamax");
                            cin>> nominal;
                            if (nominal < 0){
                            gagal ("peetamax");
                            } else {
                            liter = hitung.pertamax(nominal);
                            kwitansi("pertamax", liter, nominal);
                            } break;
                        default:
                            cout<<"Masukan jenis dengan benar! \n\n";
                            break;
                    } break;
                    case 2 :
                    ccs("diatas 200cc");
                    cout<<"|     Pilih jenis BBM anda!              |\n|     1.pertamax                         | \n|     2.pertamax turbo                   |\n Masukkan pilihan : ";
                    cin>> jenis;
                    switch (jenis) {
                        case 1 :
                            cetak ("pertamax");
                            cin>> nominal;
                            if (nominal < 0){
                            gagal ("pertamax");
                            } else {
                            liter = hitung.pertamax(nominal);
                            kwitansi("pertamax", liter, nominal);
                            } break;
                        case 2 :
                            cetak ("pertamax turbo");
                            cin>> nominal;
                            if (nominal <  0) {
                            gagal ("pertamax turbo");
                            } else {
                            liter = hitung.pertamaxTurbo(nominal);
                            kwitansi("pertamax turbo", liter, nominal);
                            } break;
                        default:
                            cout<<"Masukan jenis dengan benar! \n\n";
                            break;
                    } break;
                }
                break;
            case 2 :
            kendaraans("roda 4");
            cout<<"|     Berapa jumlah cc kendaraan anda?   |\n|     1.dibawah 3000cc                   | \n|     2.diatas 3000cc                    |\n Masukkan pilihan : ";
            cin>> cc;
            switch (cc) {
                case 1 :
                    ccs ("dibawah 3000cc");
                    cout<<"|     Pilih jenis BBM anda!              |\n|     1.pertalite                        | \n|     2.pertamax                         |\n Masukkan pilihan : ";
                    cin>> jenis;
                    switch (jenis){
                        case 1 :
                            cetak("pertalite");
                            cin>> nominal;
                            if (nominal < 0){
                            gagal("pertalite");
                            } else if (nominal > 1000000){
                            overp();
                            } else {
                            liter = hitung.pertalite(nominal);
                            kwitansi("pertalite", liter, nominal);
                            } break;
                        case 2 :
                            cetak ("pertamax");
                            cin>> nominal;
                            if (nominal < 0){
                            gagal ("pertamax");
                            } else {
                            liter = hitung.pertamax(nominal);
                            kwitansi("pertamax", liter, nominal);
                            } break;
                        default:
                            cout<<"masukan jenis dengan benar! \n\n";
                            break;
                        }break;
                case 2 :
                    ccs("diatas 3000cc");
                    cout<<"|     Pilih jenis BBM anda!              |\n|     1.pertamax                         | \n|     2.pertamax turbo                   | \n|     3.solar                            |\n Masukkan pilihan : ";
                    cin>> jenis;
                    switch (jenis) {
                        case 1 :
                            cetak ("pertamax");
                            cin>> nominal;
                            if (nominal < 0){
                            gagal ("pertamax");
                            } else {
                            liter = hitung.pertamax(nominal);
                            kwitansi("pertamax", liter, nominal);
                            } break;
                        case 2 :
                            cetak ("pertamax turbo");
                            cin>> nominal;
                            if (nominal <  0) {
                            gagal ("pertamax turbo");
                            } else {
                            liter = hitung.pertamaxTurbo(nominal);
                            kwitansi("pertamax turbo", liter, nominal);
                            } break;
                        case 3 :
                            cetak ("solar");
                            cin>> nominal;
                            if (nominal < 0) {
                            gagal("solar");
                            } else if (nominal > 1000000){
                            overs();
                            } else {
                            liter = hitung.solar(nominal);
                            kwitansi("solar", liter, nominal);
                            } break;
                        default:
                            cout<<"masukan jenis dengan benar! \n\n";
                            break;
                    }
                }
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
    }  while (repeat == 0);
    cout<<"Shutting Down!";
    return 0;
}

