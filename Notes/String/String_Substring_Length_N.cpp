
// CPP implementation of the approach
#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    string str = "ahbgdc";
    int n = 3;
    for (int i = 0; i < str.length() - n + 1; i++) {
        string substring = "";
        for (int j = i; j < i + n; j++)
            substring += str[j];
        cout << substring << " ";
    }
    return 0;
}