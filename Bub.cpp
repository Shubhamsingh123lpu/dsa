#include<iostream>
#include <wingdi.h>
using namespace std;
int input (int num[],int size)
{
    for(int i=0;i<(size-1);i++)
    {
for(int j=0;j<(size-1-i);j++){
          if(num[j]>num[j+1])
          {
            swap(num[j],num[j+1]);
          }
    }
}
}
void print(int num[],int n){
for(int k=0;k<n;k++){
cout<<num[k]<<" ";
}

}
int main(){
    int size;
      cout<<"enter the number : "<<endl;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    input(num,size);
    print(num,size);
}
