#include <iostream>
using namespace std;

int main(){
float a,b,c;
float triangolo,quadrato,rettangolo,trapezio;
cin >> a >> b >> c;

triangolo = a*b/2;
quadrato = a*a;
rettangolo = a*b;
trapezio = (a+b)*c/2;

cout <<"Area triangolo =" << triangolo;
cout <<"Area quadrato =" <<  quadrato;
cout <<"Area rettangolo =" << rettangolo;
cout <<"Area trapezio =" << trapezio;
  

}
