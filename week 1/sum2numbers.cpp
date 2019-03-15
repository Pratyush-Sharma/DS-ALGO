#include <iostream>
#include <assert.h>
using namespace std;
int main() {
int a = 0;
int b = 0;
cin >> a;
cin >> b;
assert(a>=0 & a<=9);
assert(b>=0 & b<=9);
cout << a + b;
return 0;
}
