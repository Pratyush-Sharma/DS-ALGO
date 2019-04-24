#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

/*int binary_search(const vector<int> &a,int left, int right, int x) {

  if (left>right){
  	return (-1);
  }

  int mid = (left + (int)(right-left)/2);

  if (x=a[mid]){
  	return mid;
  }
  else if(x<a[mid]){
  	return binary_search(a,left,mid-1,x);
  }
  else{
  	return binary_search(a,mid+1,right,x);
  }
}
*/



int binary_search_iterative(const vector<long long int> &a, long long int x) {
    int left = 0, right = (int) a.size();
    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (x == a[mid]) return mid;
        else if (x < a[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int linear_search(const vector<long long int> &a, long long int x) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == x) return i;
    }
    return -1;
}

int main() {
    long long int n;
    std::cin >> n;
    vector<long long int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
        std::cin >> a[i];
    }
    long long int m;
    std::cin >> m;
    vector<long long int> b(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        //replace with the call to binary_search when implemented
        std::cout << binary_search_iterative(a, b[i]) << ' ';
    }
}

