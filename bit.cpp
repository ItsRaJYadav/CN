#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int test1(int arr[]){
	int i;
	if(arr[0]==1) return 0;
	for(i=1;i<6;i++){
		if(arr[i]==0) return 0;
	}
	return 1;
}
int main(){

	int i,j,k;
	int data[20]={1,0,0,1,1,1,1,1,0,1,1,0,0,1,1,1,1,1,1};
	int code[20];
	int n = sizeof(data)/sizeof(int);
	i=0;  k=0;
	cout<<"Data : ";
	for(int i=0;i<19;i++)
		cout<<data[i]<<" ";
	while(i<=n-6){
		if(test1(&data[i])==1){
			for(j=i;j<i+6;j++)
				code[k++]=data[j];
			code[k++]=0;
			i=i+6;
		}
		else
			code[k++]=data[i++];
	}

	for(;i<n;i++){
		code[k++]=data[i++];
	}
    cout<<"\nBit Stuffing : ";
	for(int i=0;i<21;i++)
		cout<<code[i]<<" ";
    k=0;i=0;
    int m = sizeof(code)/sizeof(int);
    int code1[20];
    while(i<m-6){
        if(test1(&code[i])==1){
            for(j=i;j<i+6;j++)
				code1[k++]=code[j];
            i=i+7;
        }
        else code1[k++]=code[i++];
    }

    for(;i<=m;i++){
		code1[k++]=code[i];
	}

    cout<<"\nBit Destuffing data : ";
	for(int i=0;i<19;i++)
		cout<<code1[i]<<" ";

	return 0;
}
