#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};//creartion
    cout<<"size->"<<a.size()<<endl;//printing size(means total ele present)
    //iterating
    for(int i=0;i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Empty or not->"<<a.empty()<<endl;//checking empty or not 

    //Accessiing element at indexes
    cout<<"Elelment at index 2->"<<a.at(2)<<endl;

    //Accessing first and last element using front and back fun()
    cout<<"First element->"<<a.front()<<endl;
    cout<<"Last element->"<<a.back()<<endl;

    return 0;
}