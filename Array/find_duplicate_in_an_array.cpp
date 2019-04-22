
#include <iostream>
using namespace std;

int main(){
	int temp = 0;
	int A[10] = {6,2,1,8,5,9,2,4,5,3};
	
	for(int i =0; i<10; i++){
		for(int j =0; j<10; j++){
			if(A[i] < A[j]){
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
				}
			}
		}
	cout<<"Duplicate Number: "<<"\n";
	for(int i =0; i<10; i++){
		if(A[i] == A[i+1]){
			cout<<A[i]<<" ";
		}
	}
}
