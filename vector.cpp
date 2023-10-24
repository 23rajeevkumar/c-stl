#include<iostream>
#include<vector>
using namespace std;
int main(){
    //creation
    vector<int> v;
    //capacity(){denotes the memory assign to the vector}
    cout<<v.capacity()<<endl;

    //pushing element in vector v
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    
    //FOR USING THE SIZE OF VECTOR STORE SIZE IN ONE VARIABLE.if we directly
    //use v.size() fun then while popping it will create an error
    int size=v.size();
    //iterating and printing
    for(int i=0;i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //Accessing element of vector using indexes
    cout<<"elemnet at index3->"<<v.at(3)<<endl;
    cout<<"element at index2->"<<v.at(2)<<endl;

    //starting and last element
    cout<<"first element->"<<v.front()<<endl;
    cout<<"last element->"<<v.back()<<endl;

   
    cout<<"size before clearing->"<<v.size()<<endl;
    //clearing the vector
    v.clear();
    cout<<"after clearing->"<<v.size()<<endl;

    //another way to creating vector
    vector<int> vect(5,1); //or vector<int> vect(5) without element 
    for(int i=0;i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;

    //copying vector
    vector<int> vec(vect);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;


    return 0;
}