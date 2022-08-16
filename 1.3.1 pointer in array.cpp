# include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;

    a[0] = 5;
    a[1] = 10;
    cout << *a << endl;
    cout << *(a+1) << endl;

    int * p = &a[0];
    cout << a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << &a << endl;

    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;

    p=p+1;
    p=a+1;
    //a=a+1;

    



    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       