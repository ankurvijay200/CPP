#include<iostream>

using namespace std;

int main(){
    int x = 5;
    int y = 6;

    if((y = 1) == x)
        cout<<y;
    else
        cout<<y+1;
}