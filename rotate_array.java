import java.util.*;
class W{

public static void main(String [] args){
Scanner s=new Scanner(System.in);

int d=s.nextInt();
int arr[]={1,2,3,4,5,6,7,8};

rotate(arr,d);

}

static void rotate (int arr[],int d){
	int n= arr.length;
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);


for(int i=0;i<n;i++)
System.out.print(arr[i]);
}


static void reverse(int arr[],int start,int end){
	int temp;
	while(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}


}