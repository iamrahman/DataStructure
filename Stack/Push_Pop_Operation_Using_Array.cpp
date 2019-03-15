#include <iostream>

using namespace std;
int Stack[10];
int top =-1;

void push(int element){
	if(top>10){
		cout<<"Stack Overflow\n";
	}
	else{
		top = top+1;
		Stack[top] = element;
	}
}

void pop(){
	if(top<=-1){
		cout<<"No Element is Present\n";
	}
	else{
		Stack[top] = 0;
		top = top-1;
	}
}

void display(){
	 
	for(int i=0;i<=top;i++){
		cout<<Stack[i]<<", ";
	}
	cout<<"\n";
}

int main(){
	char ch = 'Y';
	int number;
	while(ch != '4'){
		cout<<"1: Push\n";
		cout<<"2: Pop\n";
		cout<<"3: Display\n";
		cout<<"4: Exit\n";
		cout<<"Enter Your Choice : ";
		cin>>ch;
		if(ch=='1'){
			cout<<"Enter the Number";
			cin>>number;
			push(number);
		}
		if(ch=='2'){
			pop();
		}
		if(ch=='3'){
			display();
		}	
	}
	display();
}
