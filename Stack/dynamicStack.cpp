# include <climits>
# include <iostream>
class DynamicStack
{
    int *data;
    int nextIndex;
    int capacity;
    
    public :
    //constructor
    DynamicStack (){
        data = new int[4];
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
    void push(int x)
    {
        if(nextIndex == capacity)
        {
            int *newData= new int[capacity*2];  // making the size of array double to 
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
    int pop()
    {
        if(isEmpty())
        {
            std::cout<<"Stack is Empty";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

// returning the top element of the stack
    int top()
    {
        if(isEmpty())
        {
            std::cout<<"Stack is Empty";
            return INT_MIN;
        }
        return data[nextIndex -1];
    }
};
