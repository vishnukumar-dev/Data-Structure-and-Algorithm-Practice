# include <bits/stdc++.h>
# include <queue>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;

        heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int val){
            size = size+1;
            int index = size;
            arr[index] = val;

            while(index>1){
                int parent = index/2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else return;
            }


        }

        void print(){
            for(int i=1; i<=size; i++){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }


        void deleteRoot(){
            if(size == 0){
                cout<<"nothing to delete"<<endl;
                return;    
            } 
            arr[1]=arr[size];
            size--;

            //take root node to its correct position
            int i = 1;
            while(i<size){
                int leftIndex = 2*i;
                int rightIndex = 2*i+1;

                if(leftIndex < size && arr[i]<arr[leftIndex]){
                    swap(arr[i],arr[leftIndex]);
                    i=leftIndex;
                } 
                else if(rightIndex < size && arr[i]<arr[rightIndex]){
                    swap(arr[i],arr[rightIndex]);
                    i=rightIndex;
                } 
                else{
                    return;
                }

            }

        }
};

// void heapify

// Kth smallest element


int main(){
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // h.deleteRoot();
    // h.deleteRoot();
    // h.print();

    priority_queue<int>pq;  //max heap
    pq.push(1);
    pq.push(6);
    pq.push(3);
    pq.push(8);
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();
    
    priority_queue<int, vector<int>,greater<int>>min;
    min.push(10);
    min.push(3);
    min.push(6);
    cout<<"..."<<min.top();


}