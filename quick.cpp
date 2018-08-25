#include<bits/stdc++.h>
using namespace std;

void swap(int* i,int* j){
	int temp= *i;
	*i=*j;
	*j=temp;


}


int partition(int arr[],int s,int e){
	int pivot=arr[e];
	int index=s;
	for(int i=s;i<e;i++){
		if(arr[i]<=pivot){
			swap(&arr[i],&arr[index]);
			index++;

		}
	}
	swap(&arr[e],&arr[index]);
return index;

}

void quicksort(int arr[], int st ,int ed){

	
	if(st<ed){
		int  index=partition(arr,st,ed);
		
		quicksort(arr,st,index-1);
		quicksort(arr,index+1,ed);
	}

}


int main(){
int arr[]={7,5,1,8,6,2,5,9,4},start,end;
// cout<<"Enter array";
// for(int i=0;i<9;i++){
// 	cin>>arr[i];
//    }

start=0;
end=8;


quicksort(arr,start,end);
for(int i=0;i<9;i++){
	cout<<arr[i];
}

	return 0;

}

