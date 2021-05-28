
#include <iostream>

using namespace std;

int main()
{
    int Hora, Minutos;



   cout << "Entre com um numero para as horas: :";


   cin >> Hora;

   cout << "Entre com um numero para os minutos: :";


   cin >> Minutos;


   if(Hora> 23 || Minutos > 59){

    cout << "A hora e invalida";

   }

   else {

    cout << "A hora e valida";

   }


     return 0;
}



