/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Lorenzo Socci 30/03/2023
*/

# include <iostream>
using namespace std;
int main()
{
  int i=0 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (i < 3)
  {
   cout<<"Bada come la fuma"<<endl;
   i++;
  }
  return 0;
}
