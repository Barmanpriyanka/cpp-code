#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
       this->data=data;
        this->next=NULL;
    }
};
int main()
{
  Node* n=new Node(1);
  cout<<n ->data<<" "<<n->next<<endl;
  return 0;

}