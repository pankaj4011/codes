#include<bits/stdc++.h>
using namespace std;


void countsort(int arr[] , int n){

int count[10];
int output[n];
for(int i=0;i<10;i++){
count[i]=0;
}
for(int i=0;i<n;i++){
count[arr[i]]++;
}

for(int i=1;i<10;i++){
	count[i]=count[i]+count[i-1];
}



for(int i=0;i<n;i++){
	
output[count[arr[i]]-1]=arr[i];
count[arr[i]]--;
}

for(int i=0;i<n;i++){
	cout<<output[i];
	cout<<" ";
}
cout<<endl;

}


int main(){

int arr[7]={1, 4, 1, 2, 7, 5, 2};

int size=sizeof(arr)/sizeof(arr[0]);
 countsort(arr,size);

for(int i=0;i<size;i++){
	cout<<arr[i];
	cout<<" ";
}



	return 0;
}
