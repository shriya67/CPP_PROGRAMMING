#include<bits/stdc++.h>
using namespace std;
void printHello()
{
    cout<<"Hello World";
}
int sum(int a,int b){
    int result=a+b;
    return result;
}
int main()
{
    int a[2];

    for(int i=0;i<=2;++i)
    {
        cin>>a[i];
    }
    printHello();
    cout<<endl;
    cout<<"The sum of two numbers is :"<<endl;
    cout<<"SUM 1:  "<<sum(a[0],a[1])<<endl;
    cout<<"SUM 2:  "<<sum(a[1],a[1])<<endl;
    cout<<"SUM 3:  "<<sum(a[0],a[0])<<endl;
    cout<<"SUM 4:  "<<sum(a[2],a[1])<<endl;


    return 0;
}