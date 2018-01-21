#include <iostream>
#include <cstring>
#include<stdio.h>
using namespace std;


int main()
{
const char c='T';
char mas[100];
char *ptr;
cout<<"Vyvedete niz: ";
gets(mas);
ptr = strchr(mas,c);
if (ptr)
{
    cout<<"purvata poziciq,v koqto e otkrit znakyt "<<c<<" e poziciq: "<<ptr-mas+1<<endl;
}
else
cout<<"Znakyt ne e otkrit.";

return 0;
}
