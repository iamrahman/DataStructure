#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	int A[10] = {1,2,3,4,5,7,8,9,10};
	int n =10;
	sum = (n*(n+1))/2;
	for(int i =0; i<n-1; i++){
		sum = sum - A[i];
	}
	cout<<"Missing Number: "<< sum;
}
