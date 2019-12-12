#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int n,int x){
int start=0;
int end=n-1;
while(start<=end){
	int m=(end+start)/2;
	if(x==arr[m])
		{return m;}
	else if(x<arr[m])
		{end=m-1;}
	else if(x>arr[m])
		{start=m+1;}
	
}
	
		return -1;
}


int main(){

int arr[]={47,58,62,86,21,14,48};
int x;
sort(arr,arr+7);
for(int i=0;i<7;i++)
{	cout<<arr[i];
cout<<" ";
}

cout<<endl;
cout<<"Enter number :";
cin>>x;


 int a=binary(arr,7,x);
cout<<endl;
cout<<a;
}
