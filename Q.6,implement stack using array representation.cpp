Question 6: 
Implement a stack using Array representation 

#include <iostream>
using namespace std;
class Stack{
private:
 int top = -1;
 int arr[5];
public:
 void push(int element){
 if(top==4){
 cout<<"Stack Overflow"<<endl;
 }
 else{
 arr[++top]=element;
 }
 }
 void pop(){
 bool mt = isEmpty();
 if(mt){
 cout<<"Stack Underflow"<<endl;
 }
 else{
 cout<<"Item Popped"<<endl;
 top--;

 }
 }
 bool isEmpty(){
 if(top==-1){
 return true;
 }
 else{
 return false;
 }
 }
 void display(){
 for(int i=top; i>=0; i--){
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 }
 int Top(){
 return arr[top];
 }
};
int main(){
 Stack stk = Stack();
 int choice;
 do{
 cout<<"1. Push into Stack "<<endl;
 cout<<"2. Pop From the Stack"<<endl;
 cout<<"3. Display the Stack"<<endl;
 cout<<"4. Is Stack Empty"<<endl;
 cout<<"5. Top of the Stack"<<endl;
 cout<<"Enter 0 to Exit"<<endl;
 cout<<"Enter Choice : ";
 cin>>choice;
 switch(choice){
 case 1:
 int x;
 cout<<"Enter the variable ";
 cin>>x;
 stk.push(x);
 break;
 case 2:
 stk.pop();
 break;
 case 3:
 stk.display();
 break;
 case 4:
 cout<<stk.isEmpty()<<endl;
 break;
 case 5:
 cout<<stk.Top()<<endl;
 break;

 
 
 }
 }while(choice!=0);
 return 0;
}
