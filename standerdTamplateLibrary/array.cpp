#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Element at 2nd index -->"<<a.at(2)<<endl;
    cout<<"isEmpty -->"<<a.empty()<<endl;

    cout<<"Front element -->"<<a.front()<<endl;
    cout<<"Last elment -->"<<a.back()<<endl;
}