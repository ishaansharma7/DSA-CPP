#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node{

    ll data{0};
    struct node *next{nullptr};

}*newnode{nullptr}, *head{nullptr};

void display();

int main(){

    ll value{0};
    char reply{'y'};
    while(reply=='y'){

        cout<<"enter node value"<<endl;
        cin>>value;
        newnode = new struct node;
        newnode->data = value;
        if(head == nullptr){
            head = newnode;
        }
        else{
            struct node *temp{head};
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cout<<"press y for adding a node"<<endl;
        cin>>reply;
    }
    display();
}

void display(){

    struct node *temp{head};
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}