#include<iostream>
#include<string>
using namespace std;

int main()
{
   string sen;
   getline(cin, sen);

    int br(0), i(0);
    char ch;
    while(i<128) {
        for(int j=0; j<sen.length(); j++) {
            if(i == int(sen.at(j))) {
                br++;
                ch = sen.at(j);
            }
        }
        if(br > 0) {
         cout<<"'"<<ch<<"'"<<": "<<br<<",";
         br = 0;
        }
        i++;
    }

   return 0;
}
