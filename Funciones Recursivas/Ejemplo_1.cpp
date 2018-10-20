/*
TUTORIAL DE RECURSIVIDAD EN C++
Ejemplo de funcion recursiva para calcular un factorial
*/¿

#include <iostream>

using namespace std;
  
//Funcion recursiva
long int factorial(int n)
{
   //Caso base:
   if(n == 1)
      return 1;
  
   //Caso recursivo
   else
      return n*factorial(n-1);
}

int main(void)
{
   int val; // El entero del que queremos calcular el factorial
   long int result; // El resultado del factorial

   // Leemos un entero y lo guardamos en val
   cout << "\nIntroduce valor" << endl;
   cin >> val;
  
   result = factorial(val); //Aqui calculamos el factorial y lo guardamos en result
  
   cout << "El resultado de " << val << "! es " << result << endl << endl;
  
   return 0;
  
}
