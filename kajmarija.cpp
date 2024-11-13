#include <iostream>
#include <cmath>
using namespace std;
//ne e tochna ama labz tochnichka e, lanski kolokvium prva zadacha
int maxsuma(int broj1, int broj2) {
    int b1c1, b1c2, b2c1, b2c2;
    int suma = 0;
    int brojac=0;
    while(broj1>0 or broj2>0) {
        b1c1 = broj1%10;
        b1c2 = (broj1%100)/10;
        b2c1 = broj2%10;
        b2c2 = (broj2%100)/10;

        if(b1c2 > b2c2)
            suma += b1c1*(pow(10,brojac));

        else if(b2c2 > b1c2)
            suma += b2c1*(pow(10,brojac));
        else if(b2c2==b1c2 && (b2c2!=0) && (b1c2!=0) )
            brojac--;
        if(b2c2==0 && b1c2==0) {
            if(b1c1 > b2c1) {
                suma += b1c1*(pow(10,brojac));
            }
            if(b1c1<b2c1) {
                suma += b2c1*(pow(10,brojac));
            }
        }
        broj1/=10;
        broj2/=10;
        brojac++;
    }
    return suma;
}

int main() {
    int broj1, broj2;
    int suma=0;

    while(cin>>broj1>>broj2) {
        suma = maxsuma(broj1, broj2);
    }

    cout<<suma;
}











