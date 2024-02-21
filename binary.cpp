#include<iostream>
using namespace std;
 void inter(){
  int arr[]={1,2,3,4,5,6};
  int h=5,l=0,m,n;
  cout<<"enter the binary number :";
  cin>>n;
  while(l<=h){
    m=l+(h-l)/2;
   if(arr[m]==n){
    cout<<"index is: "<<m;
    break;
   }
    if(arr[m]<n){
    l=m+1;
    }
    if(arr[m]>n){
    h=m-1;
   }
   }
 }
    int main(){
    inter();

 }
