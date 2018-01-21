#include<iostream>
using namespace std;

int func(int a)
{
 if (a==1) {
    return 1;
 }
 if (a==0) {
    return 0;
 }
 cout<<func(a/2);
 return a%2;
}


int main () {
    int a;
cout<<"Enter a number:"<<endl;
cout<<"a= ";
cin>>a;
cout<<"result= ";
cout<<func(a);


return 0;
}
