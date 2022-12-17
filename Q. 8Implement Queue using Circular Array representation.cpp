Question 8: 
Implement Queue using Circular Array representation 
#include <iostream>
using namespace std;
class Queue{
private:
 int front = -1;
 int rear = -1;
 int size = 5;
 int arr[5];
public:
 void enqueue(int x){
 if((front==0 && rear ==size-1) || (rear ==(front-1)%
(size-1))){
 cout<<"Queue is Full"<<endl;
 }
 
 else if (front == -1)
 {
 front = rear = 0;
 arr[rear] = x;
 }
 else if (rear == size-1 && front != 0)
 {
 rear = 0;
 arr[rear] = x;
 }
 else{
 rear++;
 arr[rear]=x;
 }
 }
 void dequeue(){
 if(front==-1){
 cout<<"Queue is Empty"<<endl;
 }
 //int temp = arr[front];
 arr[front]= -1;
 if(front == rear){
 front = -1;
 rear = -1;
 }
 else if(front == size-1){
 front = 0;
 }
 else{
 front++;
 }
}
 
 void display(){
 if(front == -1){
 cout<<"Queue is Empty "<<endl;
 }
 else if(rear > front){
 for(int i=front; i<=rear; i++){
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 }
 else{
 for(int i=front; i<size; i++){
 cout<<arr[i]<<" ";
 }
 for(int i=0; i<=rear; i++){
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 }
 }
 
};
int main() {
 Queue q = Queue();
 int choice;
 do{
 cout<<"1. Push into Queue "<<endl;
 cout<<"2. Pop From Queue"<<endl;
 cout<<"3. Display the Queue"<<endl;
 cout<<"Enter 0 to Exit"<<endl;
 cout<<"Enter Choice : ";
 cin>>choice;
 switch(choice){
 case 1:
 int x;
 cout<<"Enter the value : ";
 cin>>x;
 q.enqueue(x);
 break;
 case 2:
 q.dequeue();
 break;
 case 3:
 q.display();
 break;
 }
 }while(choice!=0);
 return 0;
}

