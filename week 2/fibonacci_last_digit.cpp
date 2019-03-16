#include <iostream>
#include <vector>
using namespace std ;

/*int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}*/

int get_fibonacci_last_digit_fast(int n) {
	 if (n <= 1)
        return n;

    vector<int> F(n) ;

    F[0] = 0;
    F[1] = 1;

    for(int i =2 ; i<=n;i++)
    {
    	F[i] = (F[i-1]+F[i-2])%10 ;
    }
    return F[n] ;


}
int main() {
    int n;
    cin >> n;
    //int c1 = get_fibonacci_last_digit_naive(n);
    int c2 = get_fibonacci_last_digit_fast(n);
    //cout << c1 << '\n';
    cout << c2 << '\n';

    }
