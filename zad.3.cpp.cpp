#include <iostream>
using namespace std;


int main()
{
char a;
int b;
int c=0;
for (a='A';a<='Z';a++)
{
if (c %2 ==0)
{cout<<endl;}
  c++;
b=int(a);
cout<<"Bukva: "<<a<<" ima ASCII kod: "<<b<<"\t";

}
cout<<endl;
   return 0;
}
