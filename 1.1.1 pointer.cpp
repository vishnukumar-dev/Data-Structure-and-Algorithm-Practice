# include <iostream>
using namespace std;
int main()
{
   int i = 10;
   cout<<&i<<endl;
   int *p=&i;
   cout<<p<<endl;
   cout<<sizeof(p)<<endl;

   *p=20;
   cout<<*p<<endl<<i<<endl;


 

    return 0;
}