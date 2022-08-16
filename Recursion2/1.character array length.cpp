#include <iostream>
using namespace std;

// replace character c1 with c2
void repalceChar(char s[], char c1, char c2)
{
    if(s[0]=='\0') return;
    if(s[0]!= c1) repalceChar(s+1, c1,c2);
    else
    {
        s[0]=c2;
        repalceChar(s+1,c1,c2);
    }
}


// Length of character arry
int length(char s[])
{
    if(s[0]=='\0') return 0;
    int smallStringLength = length(s+1);
    return 1+smallStringLength;
}

int main()
{

   

    char str[100];
    cin>>str;
    cout<<str;

    // int l=length(str);
    repalceChar(str,'a','x');
    cout<<str;

}

