#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

enum enprimenumber {prime = 1 , nutprime = 2} ;

int ReadPositiveNumber(string Message) {
int number = 0;
do {
cout << Message;
cin >> number;
} while (number <= 0);

return number ;
}

bool isperfictnumber(int number)
{
  int cont = 0 ;
  for(int i = 1 ; i<number ; i++)
  {
    if(number % i == 0)
    cont+=i ;
  }
  return number== cont ;
}

void print(int number)
{
  if(isperfictnumber(number))
  {
    cout<<"perfict"<<endl;
  }
    
  else
  {
    cout<<"notperfict"<<endl;
  }
}




int main()
{

  print( ReadPositiveNumber("enter number "));
   
}