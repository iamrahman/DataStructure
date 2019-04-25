#include <iostream>
#include <cstring>

using namespace std;

void permute (char[], int, int);
int main()
{
    char a[] = "ABCD";
    int n = strlen(a)-1;
    permute(a, 0, n);

    return 0;
}

void permute(char a[], int i, int n)
{
   int j;
   if (i == n)
     cout << a << endl;
   else
   {
       for (j = i; j <= n; j++)
       {
          swap(a[i], a[j]);
          permute(a, i+1, n);
          swap(a[i], a[j]);

       }
   }
}
