#include<stdlib>
using namespace std;
int main(){
struct node *ptr;
{
    int item;
    prt =(struct node *)malloc(sizeof(struct node *));
    if(prt==null){
        cout<<"overflow";
    }
    else{
        cout<<"enter value";
        cin>>item;
        ptr ->data =item;
        ptr->next =head;
        head =ptr;
        cout<<"item inserted";
    }
}
}
