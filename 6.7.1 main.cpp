# include <iostream>
using namespace std;
#include "6.7.1 class freaction.cpp"

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();





    return 0;
}