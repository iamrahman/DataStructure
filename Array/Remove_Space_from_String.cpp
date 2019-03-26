#include <iostream> 
using namespace std; 
  
char *removeSpaces(char *str) 
{ 
    int i = 0, j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
           str[j++] = str[i]; 
        i++; 
    } 
    str[j] = '\0'; 
    return str; 
} 

int main() 
{ 
    char str1[] = "Re mo ve Sp ace Fr om S t r i n g"; 
    cout << removeSpaces(str1) << endl;
    return 0; 
}
