# include <iostream>
using namespace std;
# include "student.cpp"

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    student s1;
    s1.display();

    student s2;

    student* s3 = new student;
    s3->display();

    cout<<"parametrized constructor DEMO"<<endl;
    student s4(10);

    s4.display();

    student* s5 = new student(12);
    s5->display();

    student s6(22, 1003);
    s6.display();





    return 0;
}