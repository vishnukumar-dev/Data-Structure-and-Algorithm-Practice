// Implementing queue using array
using namespace std;
template<typename T>
class Queue{
    private:
        T *data;
        int capacity;
        int size;
        int ni;  //next index
        int fi; //first index

    public:
        Queue(int s)
        {
            data = new T[s];
            size=0;
            ni = 0;
            fi=-1;
            capacity=s;
        }

        int getSize()
        {
            return size;
        }
        bool isEmpty()
        {
            return size==0;
        }

        //Insert an Element
        void enqueue(T x)
        {
            if(size == capacity)
            {
                T *newData = new T[2*capacity];

                int j=0;
                for(int i=fi; i<capacity;i++,j++)
                {
                    newData[j]=data[i];
                }
                for(int i=0;i<fi;i++)
                {
                    newData[j]=data[i];
                }

                delete [] data;
                data = newData;
                fi=0;
                ni=capacity;
                capacity*=2;

            }
            data[ni]=x;
            ni=(ni+1)%capacity; // to find the next index circularly 
            if(fi == -1) fi=0;
            size++;
        }

        T front()
        {
            if(isEmpty())
            {
                cout<<"Queue is Empty!!!"<<endl;
                return 0;
            }
            return data[fi];
        }

        T dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue is Empty!!!"<<endl;
                return 0;
            }
            T ans = data[fi];
            fi=(fi+1)%capacity; // to set the first index circularly
            size--;
            if(size==0)  // resetting the first index and next index position 
            {             //when queue is empty
                fi=-1;
                ni=0;
            }
            return ans;


        }
        
};