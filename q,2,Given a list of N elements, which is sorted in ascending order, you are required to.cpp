Question 2 
Given a list of N elements, which is sorted in ascending order, you are required to 
search an element x in the list. The list is stored using array data structure. If the 
search is successful, the output should be the index at which the element occurs, 
otherwise returns -1 to indicate that the element is not present in the list. Assume 
that the elements of the list are all distinct. Write a program to perform the 
desired task. 
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
 int start = 0;
 int end = n-1;
 while(start<end){
 int mid = start+end/2;
 if(arr[mid]==key){
 return mid;
 }
 else if(arr[mid]>key){
 start = mid+1;
 }
 else{
 end = mid-1;
 }
 }
 return -1;
}
int main() {
 int n,key;
 cout<<"Enter the number of elements you want in list : ";
 cin>>n;
 int arr[n];
 cout<<"Enter the elemeents in ASCENDING ORDER "<<endl;
 for(int i=0; i<n; i++){
 cout<<"Enter : ";
 cin>>arr[i];
 }
 cout<<"Enter the element to Search for : ";
 cin>>key;
 cout<<"Element found at index : "<<binarySearch(arr, 
n,key)<<endl;
 return 0;
}

