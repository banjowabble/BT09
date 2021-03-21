#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a = 4;
    int* pa = &a;
    cerr << a << ' ' << pa << '\n';
    delete pa;
    cerr << a << ' ' << pa;
    return 0;
}
//delete khong co tac dung boi pa khong phai la con tro duoc cap phat bo nho dong
