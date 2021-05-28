
#include <iostream>

using namespace std;

int main()
{
    int DiaNsc,MesNsc,AnoNsc,DiaAtual,MesAtual,AnoAtual,Idade;



   cout << "Entre com o Dia de nascimento :";


   cin >> DiaNsc;

   cout << "Entre com o Mes de nascimento :";


   cin >> MesNsc;

   cout << "Entre com o Ano de nascimento :";


   cin >> AnoNsc;

   cout << "Entre com o Dia de Hoje :";


   cin >> DiaAtual;

   cout << "Entre com o Mes Atual :";


   cin >> MesAtual;

   cout << "Entre com o Ano Atual :";


   cin >> AnoAtual;


   if (MesAtual >= MesNsc && DiaAtual >= DiaNsc){

        Idade = (AnoAtual - AnoNsc );

}

    else {

        Idade = AnoAtual - AnoNsc -1;

         }


   cout << "Sua Idade e : " << Idade ;




     return 0;
    }







