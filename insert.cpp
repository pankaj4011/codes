#include<bits/stdc++.h>

int main(){
int i,j,key;
int ar[]={9,8,7,6,5,4,3,2,1};

for(j=1;j<9;j++)
	{
		i=j-1;
		key=ar[j];
		while(i>=0 && ar[i]>key){
		ar[i+1]=ar[i];
		i=i-1;

	}
		ar[i+1]=key;

}

for(int i=0;i<9;i++){
	std::cout<<ar[i];
}


	return 0;

}


