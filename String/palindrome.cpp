#include <iostream>
using namespace std;

int checkPalindrome(string str){
	int l = str.length() -1;
	int i=0;
	while(i<=l){
		if(str[i] != str[l]){
			return 0;
		}
		i = i+1;
		l = l-1;
	}
}

int main(){
	string str = "AaaAaaA";
	int result = checkPalindrome(str);
	if(result){
		cout<<"\nPalindrome";
	}
	else{
		cout<<"Not a Palindrome";
	}
	return 0;
}
