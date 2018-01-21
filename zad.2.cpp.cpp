#include <iostream>
#include<string>
using namespace std;


int main()
{
string word;
int a,b,c,k;
cout<<"Vyvedete 10 bukvi i cifri: "<<endl;
  a=b=c=0;
cin>>word;
for (k=0;k<word.length();k++)
{
if (word.at(k)<='9' && word.at(k)>='0')
{a++;} ;
if (word.at(k)<='Z' && word.at(k)>='A')
{b++;} ;
if (word.at(k)<='z' && word.at(k)>='a')
{c++;} ;
}
cout<<"Broi cifri: "<<a<<endl;
cout<<"Broi glavni bukvi: "<<b<<endl;
cout<<"Broi malki bukvi: "<<c<<endl;

return 0;
}
