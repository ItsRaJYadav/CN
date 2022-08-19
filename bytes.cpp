#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int j=0;
    string data = "I love my farms";
    char code[20];
    char d[20];
    for(int i=0;i<data.length();i++){
        if(toupper(data[i])=='E' || toupper(data[i])=='F')
            code[j++]='E';
        code[j++]=data[i];
    }
    cout<<"Byte Stuffing : ";
    for(int i=0;i<17;i++){
        cout<<code[i];
    }
    j=0;
    for(int i=0;i<17;i++){

        if(code[j]=='E')
            j++;

        d[i]=code[j++];
    }

    cout<<"\nRemove Stuffed Byte : ";
    for(int i=0;i<15;i++){
        cout<<d[i];
    }
    return 0;
}
