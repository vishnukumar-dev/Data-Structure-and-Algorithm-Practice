# include <iostream>
# include "student.cpp"
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    // creating objects statically
    student s1;
    student s2;
    
    s1.rollNumber=101;
    s1.setAge(42,123);
    s1.display();   
    cout<<s1.rollNumber<<endl;

    
    // creating objects dynamically
    student * s6=new student;
    (*s6).rollNumber=123;
    
    cout<<(*s6).rollNumber<<endl;

    
    student * s7=new student;
    s7->rollNumber=333;
    
    cout<<s7->rollNumber<<endl;



    return 0;
}