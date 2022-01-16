/*PROGRAM TO ILLUSTRATE THE CONCEPT OF PASS BY VALUE AND PASS BY REFERENCE */
#include<bits/stdc++.h>
using namespace std;
void increment(int &n,int n1)
{
    n++;
    n1++;
}
int main()
{
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    cout<<a<<"  "<<b<<endl;
    increment(a,b);
 
   cout<<a<<endl<<" :: PASS BY REFERENCE(INCREMENT BY 1) "<<endl<<b<<endl<<":: PASS BY VALUE(NO CHANGE) "<<endl;
   return 0;
}

