
#include <iostream>

using namespace std;

int main()
{
    int Num1,Num2;



   cout << "Insira Dois Numeros Reias : ";

   cin >> Num1;
   cin >> Num2;

   if(Num1 < Num2){
   cout << "Numero: " << Num2;
   }

   else if(Num1 == Num2){
   cout << "Sao Iguais";
   }

   else{
    cout << "Numero: " << Num1;
   }

    return 0;
}
