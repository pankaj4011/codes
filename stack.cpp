#include<bits/stdc++.h>
using namespace std;
#define max 100
class Stack
{
int top;
public:
 Stack(){
 	top=-1;
 }
 int a[max];

bool push(int x);
int pop();
bool isEmpty();
};


bool Stack::push(int x){
	if(top>=(max-1)){
		cout<<"Stack overflow";
		return false;
   
	}
	else{
		a[++top]=x;
   return true;
	}
}
int Stack::pop(){
if(!isEmpty()){
	return a[top--];
}
else{
	cout<<"Stack underflow";
}


}
bool Stack::isEmpty(){

	return (top<0);
}


 int main()
{
	struct Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
cout<<s.pop();


	return 0;
}