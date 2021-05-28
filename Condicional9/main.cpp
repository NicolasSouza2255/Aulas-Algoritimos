#include <iostream>

using namespace std;

int main()
{
    float Nota1,Nota2,Nota3,MediaFinal;
    string Nome;



   cout << "Insira Seu Nome: ";

   cin >> Nome;

   cout << "Digite suas Notas a Seguir: ";

   cin >> Nota1;
   cin >> Nota2;
   cin >> Nota3;



  MediaFinal = (Nota1 + Nota2 + Nota3)/3;

  if(MediaFinal >= 6){

  cout << "Parabens " << Nome << " Voce Foi Aprovado";

  }

  else{
    cout<< "Lamentamos "<< Nome << " Voce Foi Reprovado";
  }

    return 0;
}
