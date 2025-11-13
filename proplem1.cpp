#include <iostream>
#include <string>

using namespace std ;

void thehedierline()
{

  cout<<"\n\n\t\t\tMOLTEBUL TABEEL FEOM 1 TO 10\n\n"<<endl ;

  for(int i =1 ; i<=10; i++)
  {
    cout<<"\t"<<i<<" " ;
  }

  cout<<"\n____________________________________________________________________________________\n" ;

}


string lines(int i)
{
  if (i<10)
  
    return "   |" ;
  
  else

    return "  |" ;
  
  
  
} 


void moltebultabe()
{
  thehedierline() ;
  for(int i = 1 ; i<=10 ; i++)
  {
     cout<<""<< i << lines(i)<<"\t" ;
    for(int j = 1 ; j<=10 ; j++)
  {
    cout<< i * j <<"\t" ;
  }
  cout<<endl ;
  }
}




int main()
{
   moltebultabe();
}