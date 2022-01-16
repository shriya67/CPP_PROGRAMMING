/* PROGRAM TO ILLUSTRATE SOME INBUILT FUNCTIONS IN C++ */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER 2 NUMBERS : "<<endl;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"SWAPPING OF TWO NUMBERS : "<<endl;
    cout<<a<<" "<<b<<endl;
    cout<<"MAX OF TWO NUMBERS : "<<max(a,b)<<endl;
    cout<<"MIN OF TWO NUMBERS : "<<min(a,b)<<endl;
}