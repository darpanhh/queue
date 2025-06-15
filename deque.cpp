#include<iostream>
using namespace std;
#define N 5
int deque[N];
int front=-1;
int rear=-1;
void enqueuefront(int x){
    if((front==0 && rear==N-1)||(front==rear+1)){
        cout<<"Queue is full"<<endl;
    }
    else if(front ==-1 && rear==-1){

        front = rear =0;
        deque[front]=x;
    }
    else if(front==0){
        front = N-1;
        deque[front]=x;
    }
    else{
        front--;
        deque[front]=x;
    }
}
void enqueuerear(int x){
    if((front==0 && rear==N-1)|| (front==rear+1)){
        cout<<"Queue is full"<<endl;
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1){
        rear=0;
        deque[rear]=x;
    }
    else{
        rear++;
        deque[rear]=x;
    }
}
void display(){
    int i=front;
    while(i!=rear){
        cout<<deque[i]<<" ";
        i=(i+1)%N;
    }
    cout<<deque[rear]<<endl;
}
void dequeuefront(){
    if(front == -1 && rear==-1){
        cout<<"Queue is empty\n";
    }
    else if(front == rear){
        cout<<"Popped element is"<<deque[front]<<endl;
        front = -1;
        rear = -1;
    }
    else if (front == N-1){
        cout<<"Popped element is"<<deque[front]<<endl;
        front = 0;
    }
    else{
        cout<<"Popped element is"<<deque[front]<<endl;
        front ++;
    }
}
void dequeuerear(){
    if(front == -1 && rear==-1){
        cout<<"Queue is empty\n";
    }
    else if(front == rear){
        cout<<"Popped element is"<<deque[rear]<<endl;
        front = -1;
        rear = -1;
    }
    else if(rear==0){
        cout<<"popped element is"<<deque[rear]<<endl;
        rear=N-1;
    }
    else{
        cout<<"Popped element is:"<<deque[rear]<<endl;
        rear--;

    }
}
int main(){
    enqueuefront(5);
    enqueuefront(4);
    enqueuefront(3);
    enqueuefront(2);
    enqueuefront(1);
    display();
    dequeuerear();
    dequeuerear();
    display();
    enqueuerear(9);
    display();
    return 0;
}