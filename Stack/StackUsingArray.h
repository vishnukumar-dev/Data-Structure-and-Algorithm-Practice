# include <climits>
# include <iostream>
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    
    public :
    //constructor
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
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
            std::cout<<"Stack FUll"<<std::endl;
            return;
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
