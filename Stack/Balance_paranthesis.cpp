#include <iostream>
using namespace std;
#define MAX 25

int top = -1;
char stack[MAX];

void push(char ch){
	top = top+1;
	stack[top] = ch;
}

int checkBalance(string str, int l){
	int result = 0;
	for(int i=0;i<l;i++){
		if(str[i]=='[' || str[i]=='{' || str[i]=='('){
			push(str[i]);
		}
		else{
			if(str[i] == ')'){
				if(stack[top] == '('){
					stack[top] = ' ';
					top = top - 1;
					result = 1;
				}
				else{
					cout<<"Not Balanced";
					result = 0;
					return 0;
				}
			} 
			if(str[i] == '}'){
				if(stack[top] == '{'){
					stack[top] = ' ';
					top = top - 1;
					result = 1;
				}
				else{
					cout<<"Not Balanced";
					result = 0;
					return 0;
				}
			} 
			if(str[i] == ']'){
				if(stack[top] == '['){
					stack[top] = ' ';
					top = top - 1;
					result = 1;
				}
				else{
					cout<<"Not Balanced";
					result = 0;
					return 0;
				}
			} 
		}
	}
	return result;
}

int main(){
	string str ="{[]()[{}]}";
	int l = str.length();
	int result = checkBalance(str, l);
	if(result){
		cout<<"Balanced";
	}
}
