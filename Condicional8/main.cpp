#include <iostream>

using namespace std;

int main()
{
    int Num1,Num2,Num3;



   cout << "Insira Tres Numeros Reias : ";

   cin >> Num1;
   cin >> Num2;
   cin >> Num3;

   if(Num1 > Num2 && Num1 > Num3){
   cout << "O Numero Maior eh: " << Num1;
   }

   else if(Num2 > Num1 && Num2 > Num3){
   cout << "O Numero Maior eh: " << Num2;
   }

   else if(Num3 > Num1 && Num3 > Num2){
   cout << "O Numero Maior eh: " << Num3;
   }

    return 0;
}
