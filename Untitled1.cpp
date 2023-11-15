 #include <iostream>
#include <cmath>
using namespace std;
int main() {
int szerokosc;
int wysokosc;
std::cout <<"Podaj szerokosc: " << endl;
cin >> szerokosc;
std::cout <<"Podaj wysokosc: " << endl;
cin >> wysokosc;
 for(int i=0; i < szerokosc; i++){
       for(int j=0; j< wysokosc; j++){
           cout << "*";
       }
       cout << endl;
   }
}