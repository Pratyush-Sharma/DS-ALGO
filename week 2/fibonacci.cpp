#include <iostream>
#include <cassert>
#include <vector>
using namespace std ;

/*int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}*/

/*int fibonacci_fast(int n) {
	if (n <= 1)
        return n;

    vector<int> F(n+1);
    F[0] = 0;
    F[1] = 1;
    for(int i=2;i<=n;i++)
    {
    	F[i] = F[i-1] + F[i-2] ;
    }
    return F[n] ;
}*/


int fibonacci_fast(int n) {
    if (n <= 1)
        return n;

    int F1, F2, F;
    F1 = 0;
    F2 = 1;
    for (int i = 2; i <= n; i++) {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
    }
    return F;
}

/*void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}*/

int main() {
    int n = 0;
    cin >> n;

    //cout << fibonacci_naive(n) << '\n';
    //test_solution();
    cout << fibonacci_fast(n) << '\n';
    getchar();
    return 0;
}
