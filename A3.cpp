#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl; //cau lenh nay k hoat dong nhu mong muon
    //vi delete chi dung duoc doi voi cac con tro duoc cap phat bo nho thong qua lenh new
}
