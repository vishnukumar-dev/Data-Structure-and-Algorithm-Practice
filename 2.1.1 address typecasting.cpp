# include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    int i = 65;
    char j = i;  // explict typecasting

    cout<< i<<endl;
    cout<< j<<endl;

    int* p = &i;
    char* pc = (char*)p; // implict typecasting

    cout<< p <<endl;
    cout<< pc <<endl;

    cout<<*p<<endl; 
    cout<<*pc<<endl; 
    cout<<*(pc+1)<<endl; 
    cout<<*(pc+2)<<endl; 
    cout<<*(pc+3)<<endl; 



    return 0;
}