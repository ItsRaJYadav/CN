#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int i,j,k,n;
int code[15];
int d[6]={1,0,1,1,0,1};
int chk_power_2(int m){
    int i,p=1;
    for(i=0;i<k;i++){
        if(p==m) return 1;
        p=p*2;
    }
    return 0;
}
bool xor1(int a, int b){
    return !(a==b);
}
int main(){
    int p=0,ndx=0;
    k=1; n=6;
    while(pow(2,k)<n+k+1)
        k++;

    cout<<"k = "<<k<<endl;
    for(i=1;i<=n+k;i++){
        if(chk_power_2(i)==1) code[i]=0;
        else code[i]=d[ndx++];
    }
    cout<<"Code before encryption : ";
    for(i=1;i<=n+k;i++){
        cout<<code[i]<<" ";
    }
    for(i=0;i<k;i++){
        int stepSize = (int)pow(2,i);
        int start = stepSize;
        int p=0;
        while(start<=n+k){
            for(j=start;j<=start+stepSize-1 && j<=n+k;j++)
                p=xor1(p,code[j]);
            start=start+2*stepSize;
        }
        code[stepSize]=p;
    }
    cout<<"\nCode after encryption  : ";
    for(i=1;i<=n+k;i++){
        cout<<code[i]<<" ";
    }
    return 0;
}
