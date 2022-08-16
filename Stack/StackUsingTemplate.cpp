# include <climits>
# include <iostream>

template <typename T>
class StackUsingTemplate
{
    T *data;
    int nextIndex;
    int capacity;
    
    public :
    //constructor   
    StackUsingTemplate(){
        data = new T[4];
        nextIndex = 0;
        capacity = 4; // initial size of the stack
    }

    //return the number of elements in the stack
    int size()
    {
        return nextIndex;
    }

    // to check if the stack is empty or not
    bool isEmpty()
    {
        // if(nextIndex == 0) return true;
        // else return false;

        return nextIndex == 0;
    }

    //insert an element in the stack
    void push(T x)
    {
        if(nextIndex == capacity)
        {
            T *newData= new T[capacity*2];  // making the size of array double to 
            for(int i=0;i<capacity;i++)        // to insert more element
            {
                newData[i] = data[i];
            }
            capacity*=2;
            delete [] data;
            data = newData;
        }
        data[nextIndex]=x;
        nextIndex++;
    }

// Deleting an element from the stack
    T pop()
    {
        if(isEmpty())
        {
            std::cout<<"Stack is Empty";
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

// returning the top element of the stack
    T top()
    {
        if(isEmpty())
        {
            std::cout<<"Stack is Empty";
            return 0;
        }
        return data[nextIndex -1];
    }
};
