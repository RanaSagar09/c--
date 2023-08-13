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
node *dd(node*&head){

node*temp=head;
while(temp!=NULL){
    node*temp1=temp;
    while(temp1->next!=NULL){
        if(temp->data==temp1->next->data){
            node*dup=temp1->next;
            temp1->next=temp1->next->next;
        }
        else
            temp1=temp1->next;
    }
     temp=temp->next;
}
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
insert(head,3);
insert(head,2);
insert(head,3);
insert(head,2);
insert(head,5);
display(head);
cout<<endl;
cout<<"After deleting duplicates";
cout<<endl;
node*dead=dd(head);
display(head);

return 0;

}
