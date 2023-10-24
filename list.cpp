//List=>{doubly linked list , means insertion and deletion from both sides}
#include<iostream>
#include<list>
using namespace std;
int main(){

    //creation
    list<int> l;//or list<int> l(5,1);
    int s=l.size();
    //copying list
    //list<int> l1(l);

    //insertion from both sides
    l.push_back(9);
    l.push_back(10);
    l.push_front(8);
    l.push_front(7);
    //size()
    cout<<l.size()<<endl;
    // iterating for printing 
   //it does not support normal for iteration so

   for(int i:l){
    cout<<i<<" ";
   }
    cout<<endl;



    return 0;
}