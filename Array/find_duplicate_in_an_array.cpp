
#include <iostream>
using namespace std;

int main(){
	int temp = 0;
	int k =0;
	int A[10] = {6,2,1,8,5,9,2,4,5,3};
	cout<<"Original Array: "<<"\n";
	for(int i =0; i<10; i++){
			cout<<A[i]<<" ";
	}
	
	for(int i =0; i<10; i++){
		for(int j =0; j<10; j++){
			if(A[i] < A[j]){
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
				}
			}
		}
	cout<<"\nDuplicate Number: "<<"\n";
	for(int i =0; i<10; i++){
		if(A[i] == A[i+1]){
			cout<<A[i]<<" ";
		}
	}
	cout<<"\n\nRemove Duplicate\n";
	for(int i =0; i<10; i++){
		if(A[i] != A[i+1]){
			A[k] = A[i];
			k++;
		}
	}
	A[k] = A[10];
	cout<<"Final Array: "<<"\n";
	for(int i =0; i<k; i++){
			cout<<A[i]<<" ";
	}
	
	
}
