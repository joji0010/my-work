#include <iostream>
#include <vector>

using namespace std ;


int main()
{

 int arr[4] = {1,2,3,4} ;
 int *p = arr ;

/*cout << p << endl;
cout << p+1 << endl;
cout << p +2<< endl;
cout << p+3 << endl;
cout <<*( p) << endl;
cout << *(p+1) << endl;
cout << *(p +2)<< endl;
cout << *(p+3) << endl;*/

for(int i=0; i<4 ; i++)
{
    cout<< *(p+i) << endl;
}



return 0;
}



