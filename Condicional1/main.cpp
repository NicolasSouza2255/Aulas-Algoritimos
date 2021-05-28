
#include <iostream>

using namespace std;

int main()
{
    int Num;



   cout << "Insira um Valor inteiro : ";

   cin >> Num;

   if(Num < 0){

    Num = Num * -1;
   }

   cout<< "Valor inserido : " << Num;

    return 0;
}
