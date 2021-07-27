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
    while(value != 12){
        newnode = new struct node;
        newnode->data = value;
        value = value + 2;
        if(head==nullptr){
            head = newnode;
        }
        else{
            struct node *temp{head};
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    display();

    size_t pos{0}, index{0};
    cout<<"Enter a valid position and data"<<endl;
    cin>>pos>>value;
    newnode = new struct node;
    newnode->data = value;

    struct node *temp{head}, *temp2{nullptr};
    while(temp != nullptr){
        if(index == pos){
            temp2->next = newnode;
            newnode->next = temp;
            cout<<"r1"<<endl;
            break;
        }
        temp2 = temp;
        temp = temp->next;
        index++;
    }
    display();
}

void display(){

    size_t index{0};
    struct node *temp{head};
    while(temp != nullptr){
        cout<<"index: "<<index++<<", data: "<<temp->data<<endl;
        temp = temp->next;
    }
}