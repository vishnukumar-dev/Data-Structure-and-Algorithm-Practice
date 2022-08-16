//class student for progrram "6.2.1 class and objects.cpp"
using namespace std;
class student
{
    public:
     int rollNumber;
    private: 
     int age;
    public: 
    // default constructor
     student(){
        cout<<"constructor is 1 called"<<endl;
     }
     
     //parameterized constructor
     student(int r){

        cout<<"constructor is 2 called"<<endl;
        rollNumber=r;
     }
     
     student(int a, int r){
        cout<<"constructor is 3 called"<<endl;
        rollNumber=r;
        age=a;
     }

    void display()
    {
        cout<<age<<"    "<<rollNumber<<endl;
    }
    
    // getter
    int getAge()
    {
        return age;
    }

    // setter
    void setAge(int a, int password)
    {
        if(password != 123){return;}
        if(a<0){return;}
        age=a;
    }


};     
