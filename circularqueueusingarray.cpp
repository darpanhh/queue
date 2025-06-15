
#include<iostream>
using namespace std;
#define N 5
int queue[5];
int front = -1,rear = -1;
void enqueue(int x){
    if((rear+1) % N == front){
        cout<<"Queue overflow";
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear]=x;
    }
    else{
        rear = (rear+1)%N;
        queue[rear]=x;
    }

}

void dequeue(){
    if(front == -1 && rear == -1){
        cout<<"queue underflow"<<endl;
    }
    else if(front == rear){
        cout<<"Popped element is:"<<queue[front]<<endl;
        front = -1;
        rear = -1;
    }
    else{
        cout<<"Queue popped element is:"<<queue[front]<<endl;
        front = (front+1)%N;

    }
}
void display(){
    int i = front;
    if(front == -1 && rear == -1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is:"<<endl;
        while(i!=rear){
            cout<<queue[i]<<" ";
            i = (i+1) % N;
        }
        cout<<queue[i]<<" ";
    }
}
void peek(){
    if(front == -1 && rear == -1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"\nFront element in queue is:"<<queue[front];
    }

}
int main(){
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(2);
    enqueue(1);
    dequeue();
    dequeue();
    enqueue(5);
    enqueue(4);
    display();
    peek();
    return 0;
}