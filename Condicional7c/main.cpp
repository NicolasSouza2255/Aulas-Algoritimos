
#include <iostream>

using namespace std;

int main()
{
    int Num;



   cout << "Insira um Numero Inteiro : ";

   cin >> Num;


   if(Num < 0){
   cout << "O Numero eh Negativo";
   }

   else if(Num == 0){
   cout << "O Numero eh igual a zero";
   }

   else{
    cout << "O Numero eh Positivo ";
   }

    return 0;
}
