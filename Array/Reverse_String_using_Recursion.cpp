#include <iostream>
using namespace std;

void ReverseRecursion(string &str, int length)
{
	if(length <= -1){
		return;
	}
	else{
		cout<<str[length];
		length = length-1;
		ReverseRecursion(str, length);
	}
}
int main()
{
    string str = "Hello World";
    int length = str.length();
    ReverseRecursion(str, length-1);
}

