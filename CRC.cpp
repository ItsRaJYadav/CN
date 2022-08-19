#include<bits/stdc++.h>
using namespace std;
int data[6]={1,0,0,1,0,0};
int divs[4]={1,1,0,1};
int xor1(int a,int b){
    if(a==b)return 0;
    else return 1;
}
void crc1(int a[4],int b[4]){
    int i,m;
    m=a[0];
    for(i=0;i<4;i++){
        a[i]=xor1(a[i],b[i]*m);
    }
}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i];
}

int main()
{
    int i,j,m,code[20];
    cout<<"data : ";

    for(i=0;i<6;i++){
        cout<<data[i]<<" ";
    }
    for(i=0;i<6;i++){
        code[i]=data[i];
    }
    for(i=6;i<9;i++){
        code[i]=0;
    }
    for(i=0;i<6;i++){
        crc1(&code[i],divs);
    }
    cout<<"\ncode : ";
    for(i=0;i<6;i++){
        cout<<data[i]<<" ";
    }
    for(i=6;i<9;i++){
        cout<<code[i]<<" ";
    }
}
