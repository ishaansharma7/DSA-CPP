#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node
{
    ll data;
    struct node *next;
}*newnode=nullptr, *head=nullptr;

void display();

int main()
{
    ll value;
    char reply='y';
    while(reply=='y')
    {
        cout<<"enter the node value"<<endl;
        cin>>value;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=nullptr;
        if(head==nullptr)
        {
            head=newnode;
        }
        else
        {
            struct node *temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cout<<"type 'y' for more node and 'n' for stopping"<<endl;
        cin>>reply;
    }
    display();
}

void display()
{
     struct node *temp=head;
     while(temp!=nullptr)
     {
         cout<<temp->data<<endl;
         temp=temp->next;
     }
}
