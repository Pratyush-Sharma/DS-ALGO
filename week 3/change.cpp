#include <iostream>
using namespace std;

/*int get_change(int m) {
  	int i = m/10;
  	int j = m%10;
  	int k = j/5;
  	int l = j%5;
  	int n = i + k + l;  
  return n;
}*/


int get_change(int m) {
    int coins[] = {10, 5, 1};
    int count = 0;
    for (int i = 0; m > 0; i++) {
        count += m / coins[i];
        m %= coins[i];
    }
    return count;
}


int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
