#include<iostream>
using  namespace std;

int func(int a,int b)
{
    if (b==0)
    {
        return  1;
    }
    if (b==1)
   {
        return a;
   }
       return a*func(a,b-1);
}


int main () {
    int a;
    int b;
cout<<"Please enter numbers for a and b:  "<<endl;
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
cout<< "result= "<<func(a,b);
return 0;
}
