#include <bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b)
{
    int l1 = strlen(a);
    int l2 = strlen(b);
    char* result = new char [l1 + l2];
    strcpy(result, a);
    strcat(result, b);
    return result;
}
int main ()
{
    char* a = new char [100];
    cin >> a;
    char* b = new char [100];
    cin >> b;
    cout << concat (a, b);
    return 0;
}
