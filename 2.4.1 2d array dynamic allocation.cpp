# include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int r, c;
    cin>>r>>c;

    int ** p = new int*[r];  //creating row, r pointers

    
    for(int i=0; i<r; i++)
    {
        p[i]=new int[c];          //creating column
        for(int j=0; j<c; j++)    // taking elements value
        {
            cin>>p[i][j];
        }
    }


    // printing data 
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<p[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    // safai aabhiyan

    for(int i=0; i<r; i++)
    {
        delete []p[i];
    }
    
    delete []p;


    return 0;
}