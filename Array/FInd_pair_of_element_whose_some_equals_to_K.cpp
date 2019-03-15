#include <iostream>

using namespace std;
int main(){
	
	int Arr[10] = {1,2,3,4,5,6,7,8,9,10};   //Define Array
	
	int K =8;  //Set size of K
	
	int last = sizeof(Arr)/sizeof(Arr[0]);  //Get the Last Index of the Array
	
	int first =0; //Stor the first index of the array
	
	while(last>first){
		
		if(Arr[first] + Arr[last] == K){
			cout<<"Pair :"<<Arr[first]<<", "<<Arr[last]<<"\n";
			last = last-1;
		}
		
		if(Arr[first] + Arr[last] > K){
			last = last -1;
		}
		
		if(Arr[first] + Arr[last] < K){
			first = first+1;
		}
	}
}
	
