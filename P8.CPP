/*SWAPPING USING REFERENCES*/
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main()
{
    int a,b;
    cout<<"ENTER TWO NUMBERS : "<<endl;
    cin>>a>>b;
    cout<<"BEFORE SWAPPING : "<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"AFTER SWAPPING : "<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}