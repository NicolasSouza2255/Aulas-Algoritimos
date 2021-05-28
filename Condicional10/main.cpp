#include <iostream>

using namespace std;

int main()
{
    int Lado1,Lado2,Lado3;



   cout << "Insira os Valores Correspondetes aos Lados do Triangulo: ";

   cin >> Lado1;
   cin >> Lado2;
   cin >> Lado3;

   if(Lado1 == Lado2 && Lado1 == Lado3){
   cout << "O Triangulo Eh Equilatero";
   }

   else if(Lado1 != Lado2 &&  Lado1 != Lado3 && Lado2 != Lado3){
   cout << "O Triangulo Eh Escaleno  ";
   }

   else{
   cout << "O Triangulo Eh Isoceles ";
   }

    return 0;
}
