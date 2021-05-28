
#include <iostream>

using namespace std;

int main()
{
    char Letra;



   cout << "Digite uma letra:";


   cin >> Letra;

   if(Letra == 'A'
      || Letra == 'E'
      || Letra == 'I'
      || Letra == 'O'
      || Letra == 'U'
      || Letra == 'a'
      || Letra == 'e'
      || Letra == 'i'
      || Letra == 'o'
      || Letra == 'u'){

      cout<< "Eh uma vogal";
   }

   else {

        cout<< "Nao eh uma vogal";
    }

    return 0;
}
