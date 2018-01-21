#include <iostream>
#include<cstring>
#include<stdio.h>
using namespace std;


 int main()
{
int b;
char a;
char mas1[100];
char mas2[100];
cout<<"Enter the first word: ";
gets(mas1);
cout<<"Enter the second word: ";
gets(mas2);

for (b=0;b<5;b++)
{
a=mas1[b];mas1[b]=mas2[b];mas2[b]=a;
 }
cout<<"lenght: "<<endl;

if (strlen(mas1)>strlen(mas2) )
{
    cout<<strlen(mas1)<< "; after swap: "<<mas1<<endl;
    }
else
 {
    cout<<strlen(mas2)<< "; after swap: "<<mas2<<endl;
}

return 0;
}
