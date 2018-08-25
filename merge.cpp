#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l ,int m ,int r){

int i,j,k;

int n1=m-l+1;
int n2=r-m;


int left[n1];
int right[n2];

for(i=0;i<n1;i++)
	left[i]=arr[l+i];

for(j=0;j<n2;j++)
	right[j]=arr[m+1+j];
i=0,j=0;
k=l;
while(i<n1 && j<n2){
	if(left[i]<=right[j]){
		arr[k]=left[i];
		i++;
	}
	else{
		arr[k]=right[j];
		j++;

	}
	k++;
}
while(i<n1){
	arr[k]=left[i];
	i++; k++;
}

while(j<n2){
	arr[k]=right[j];
	j++; k++;
}


}


void mergesort(int arr[] ,int l,int r){

	if(l<r){
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}

	

}


int main(){
int arr[]={7,4,3,5,1,5,9,6,2};
// int len=sizeof(arr)/sizeof(arr[0]);
// cout<<len;
mergesort(arr,0,8);

cout<<endl;
for(int i=0;i<9;i++){
	cout<<arr[i];

   }
}
//123455679

/*

// int len= sizeof(arr)/sizeof(arr[0]);
// int l= sizeof(left)/sizeof(left[0]);
// int r= sizeof(right)/sizeof(right[0]);

// while(i<l && j<r ){
// 	if(left[i]<=right[j]){
// 		arr[k]=left[i];
// 		i++;
// 	}
// 	else{
// 		arr[k]=right[j];
// 		j++;
// 	}
// k++;
// }

// while(i<l){
// 		arr[k]=left[i];
// 		i++;
// 		k++;
// 	}

// while(j<r){
// 		arr[k]=left[j];
// 		j++;
// 		k++;
// 	}




// int n=len/2;
	// if(len==1){		
	// 	return;
	// }
	// else{
	// 	int left[n], right[len-n];
 //  	  for(int i=0;i<n;i++){
 //    	left[i]=arr[i];
 //   		 }
 //   	  for(int j=n;j<len;j++){
 //    	right[j-n]=arr[j];
 //   		 }
 //    mergesort(left,n);
 // mergesort(right,len-n);
    // merge(left,right,arr,n,len-n,len);
 //     for(int i=0;i<len-n;i++){
	// cout<<right[i];
 //   }cout<<endl;
   // cout<<left[0];
   // cout<<endl;
 // cout<<right[0];
     // }



*/