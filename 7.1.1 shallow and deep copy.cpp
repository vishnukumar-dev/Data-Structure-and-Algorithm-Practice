#include <string.h>
class Student
{
    private:
        int age;
        char *name;
    public:
        Student(int age, char *name)
        {
            this->age = age;

            //shallow copy : just copying the referance address of the array
            //this->name = name;

            //deep copy : copying the complete array
            this -> name =  new char[strlen(name)+1];
            strcpy(this->name, name);
        }      

        void display()
        {
            cout<<"age : "<<age<<endl;
            cout<<"name : "<<name<<endl;
        }
};