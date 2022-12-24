#include<iostream>
using namespace std;

int main(){
    int rangeStart, rangeEnd;
    cin>>rangeStart>>rangeEnd;

    for (int n = rangeStart; n < rangeEnd; n++)
    {
        int num = n, digit, rev = 0;

    while (num != 0)
    {
        digit = num % 10;
        rev = ( rev * 10) + digit;
        num = num / 10;
    }
    if (rev ==  n)
    {
        cout<<n<<" ";
    }
    }
    return 0;
}