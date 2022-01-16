/*PROGRAM TO ILLUSTRATE DECLARATION OF THE SIZE OF 2D ARRAY IF WE HAVE LARGE INPUT 
 AND TO SHOW 2D ARRAY ARE PASS BY REFERNCE*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N][N];
void func()
{
    a[0][0]=5;
}
int main()
{
    a[0][0]=7;
    cout<<a[0][0]<<endl;
    func();
    cout<<a[0][0]<<endl;
    return 0;
}