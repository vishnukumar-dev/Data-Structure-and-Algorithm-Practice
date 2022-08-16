# include <bits/stdc++.h>
using namespace std;


template <typename T>
class Pair{
    T x;
    T y;
    public:
    void setX(T x){
        this->x=x;
    }
    T getX(){
        return x;
    }

    void sety(T y){
        this->y=y;
    }
    T gety(){
        return y;
    }

};

template <typename t, typename v>
class Sum{
    t x;
    v y;
    public :
    void setXY(t x, v y){
        this->x=x;
        this->y=y;
    }
    void Suum()
    {
        cout<<x+y;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Pair <int> p1;
    Pair <double> p2;

    p1.setX(10);
    cout<<p1.getX();
    p2.setX(30);
    cout<<p2.getX();
    
    cout<<endl;
    Sum<int,float> s1;
    Sum<double,char>s2;

    s1.setXY(10,10.5);
    s2.setXY(2.0,'A');
    s1.Suum();
    cout<<endl;
    s2.Suum();


    return 0;
}