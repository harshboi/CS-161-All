#include <iostream>

using namespace std;

int main(){
   int n = 5;
   int a[n];
   int *p;
   p = new int[n];

   cout << "&a is " << &a << endl;
   cout << "a is " << (a+4) << endl;
   cout << "p is " << a << endl;
   cout << "&(p[0]) " << &(a[0]) << endl;
   cout << "&(p[0]) " << &(a[1]) << endl;
   cout << "*a is " << *a << endl;
   cout << "(p[0]) " << (a[0]) << endl;

// delete []a;  // Never delete arrays allocated on the stack
}
