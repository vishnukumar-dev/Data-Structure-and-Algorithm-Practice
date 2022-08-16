# include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<i<<endl;   //garrbage value in i
    cout<<++i<<endl; // incrementing in garbage value

    int *p;            // always use this , int * p=0;             
    cout<<p<<endl;   //garbage address in p pointer
    cout<<*p<<endl;  // garbage value at garbage address in p pointer
    return 0;
}