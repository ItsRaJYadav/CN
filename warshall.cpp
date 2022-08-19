#include<iostream>
#include<math.h>
using namespace std;
int main(){
 	int p[4][4]={{2,7,2,4},{1000,1000,3,1000},{1000,1000,1000,6},{3,1000,1000,1000}};
 	int i,j,k;
 	for(k=0;k<4;k++){
 		for(i=0;i<4;i++){
 			for(j=0;j<4;j++){
 				p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
 			}
 		}
 	}
    cout<<"Shortest Path Matrix : \n";
 	for(int i=0;i<4;i++){
 		for(j=0;j<4;j++){
 			cout<<p[i][j]<<" ";
 		}

 		cout<<endl;
 	}
 	return 0;
}