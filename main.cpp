#include <iostream>

using namespace std;

/*
 method buat ngitung keluaran literannya misal nominal/10000 buat pertalite, nominal/12500 pertamax.
 perulangan buat reset mesing, keseluruhan diulang


*/
class penghitungan{
public:
    double pertalet(double uang){
    return uang/10000;
    }
};
int main()
{
    penghitungan hitung;
    int jenis, repeat;
    double liter, harga, nominal;
    cin>>jenis;
    switch(jenis){
        case 1:
            cout<<"Mau beli seharga berapa? : \n";
            cin>>nominal;
            liter = hitung.pertalet(nominal);
            cout<<"Anda membeli pertalet sebanyak "<< liter <<" liter";
            break;
        default:
            cout<<"Masukkan jenis dengan benar!";
            break;
        }

    return 0;
}
