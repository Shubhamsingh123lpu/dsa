#include<iostream>
using namespace std;
int input( int arr[],int l,int h,int m,int n)
{
    while (l<=h)
    {
    
    m=l+(h-l)/2;
    if(arr[m]==n){
        return m;
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
    int arr[]={1,2,3,4,5,6,7};
    cout<<"index : ";
   cout<< input(arr,0,6,0,2);
}
