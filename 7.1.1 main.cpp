# include <iostream>
using namespace std;
# include "7.1.1 shallow and deep copy.cpp"

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char name[] = "abcd";
    Student s1(19, name);
    s1.display();

    name[3]='e';

    Student s2(20, name);
    s2.display();
    s1.display();




    return 0;
}