#include <iostream>
using namespace std;
class node{
    public:
int data;
node*next;
node(int value){
data=value;
next=NULL;}
};
void display(node*head){
node* temp=head;
while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
}

}
node *one_rev(node*&head){
node*temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
temp->next->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;
}

void insert(node*&head,int n){
    node*ne=new node(n);
if(head==NULL){
    head=ne;
}
else{
    node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=ne;


}
}

int main(){
node *head=NULL;
insert(head,1);
insert(head,2);
insert(head,3);
insert(head,4);
insert(head,5);
insert(head,6);
display(head);
cout<<endl;
node* new_node=one_rev(head);
display(head);

return 0;

}
