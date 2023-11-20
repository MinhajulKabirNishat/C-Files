#include <iostream>
using namespace std;

struct StackList{
    string data;
    struct StackList* next;
};
typedef struct StackList node;
node* top= nullptr;

void push(int value){
   node* temp=new node;
  temp->data=value;
  temp->next=top;
  top=temp;
}

void PrintList(){
    if(top== nullptr){
        cout<<"Stack Overflow";
        return;
    }
  node* temp =top;
    while (temp!= nullptr){
        cout<<temp->data;
    }
}


int main(){
    push(1);
    push(2);
    push(3);

    PrintList();
}
