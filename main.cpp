#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double jumlah (int x, int z){
    int y;
    y = x+z;
    return y;
}
double kurang (int x, int z){
    int y;
    y = x-z;
    return y;
}
double kali (int x, int z) {
    int y;
    y = x*z;
    return y;
}
double bagi (int x, int z) {
    int y;
    y = x / z;
    return y;
}

int main (){
    int x, z, hasil1, hasil2, hasil3, hasil4;
    cout<<"masukkan nilai a : ";
    cin>>x;
    cout<<"masukkan nilai b : ";
    cin>>z;
    cout<<endl;

    /*operasi penjumlahan*/
    hasil1 = jumlah(x,z);
    cout<<"PENJUMLAHAN = ";
    cout<<hasil1<<endl;

    /*Operasi pengurangan*/
    hasil2 = kurang(x,z);
    cout<<"PENGURANGAN = ";
    cout<<hasil2<<endl;

    /*Operasi perkalian*/
    hasil3 = kali(x,z);
    cout<<"PERKALIAN = ";
    cout<<hasil3<<endl;

    /*Operasi pembagian*/
    hasil4 = bagi(x,z);
    cout<<"PEMBAGIAN = ";
    cout<<hasil4<<endl;

    cin.get();
    return 0;


}
