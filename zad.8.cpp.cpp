#include<iostream>
#include<string>
using namespace std;

void  func(string s1,string s2)
{
cout<<s1.length()<<endl;
cout<<s2.length()<<endl;
}

int main () {

string s1;
string s2;
cin>>s1;
cin>>s2;
func(s1,s2);
return 0;
}
