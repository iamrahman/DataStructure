#include <iostream>
using namespace std;


int main()
{
	int n=6;
	for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j + i > n-2) {
               cout<<"#";
            }
            else {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
	return 0;
}

