#include<iostream>
using namespace std;
#define N 5
int queue[5];
int front = -1,rear = -1;
void enqueue(int x){
    if(rear == N-1){
        cout<<"Queue overflow";
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear]=x;
    }
    else{
        rear++;
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
        front++;

    }
}
void display(){
    if(front == -1 && rear == -1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i = front;i <= rear;i++){
            cout<<queue[i]<<" ";
        }
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
    display();
    peek();
    return 0;
}
