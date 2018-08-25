#include<iostream>
using namespace std;
// void swapit(int *x,int *y){
// 	int temp=*y;
// 	*y=*x;
// 	*x=temp;

// }


int main(){

int ar[]={1,4,7,2,5,8,3,6,9};

int i,j,k,min,temp;

for(int i=0;i<8;i++){
	min=ar[i];
	for(j=i+1;j<9;j++)
	{
		if(ar[j]<min){
			temp=min;
			ar[i]=ar[j];
			ar[j]=temp;
			min=ar[i];
		}
	}
}

// std::cout<<"Hello";

	for(k=0;k<9;k++)
	{
	cout<<ar[k];
	}



}

