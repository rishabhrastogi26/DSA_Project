#include <iostream>
#include "List.h"
using namespace std;

// constructor
List::List(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode(int addData)
{
    nodeptr n = new node;
    n->next = NULL;
    n->data=addData;
    //when LL is not empty
    if(head != NULL){
        curr = head;
        while (curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head =n;
    }
}

void List::DeleteNode(int deleteData)
{
    nodeptr delptr = NULL;
    temp = head ;
    curr = head ;
    while((curr != NULL) && (curr->data == deleteData) ){
        temp = curr ;
        curr = curr->next;
    }
    if(curr= NULL){
        cout<< deleteData << " was not in the list \n";
        delete delptr;
    }
    else{
        delptr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delptr;
        cout<<"The value " << deleteData << " was deleted. \n ";
    }
}

void List::PrintList(){
    curr= head;
    while (curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
int main()
{
    List Rishabh ;
    Rishabh.AddNode(3);
    Rishabh.AddNode(5);
    Rishabh.AddNode(6);
    Rishabh.AddNode(7);
    Rishabh.PrintList(); 

}
