#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout<<"5 is present or not : "<<binary_search(v.begin(), v.end(), 5)<<endl;
    
    vector<int> n;
    n.push_back(1);
    n.push_back(5);
    n.push_back(3);
    n.push_back(2);
    n.push_back(4);

    sort(n.begin(), n.end());

    for(int i : n){
        cout<<i<<" ";
    }
}