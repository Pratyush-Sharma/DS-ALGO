#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int k=0;
  for(k=1;k<=n;k++){
  	
  	if(n>(2*k)){
  		n=n-k;
  		summands.push_back(k);
  	}
  	else{
  		summands.push_back(n);
  		break;
  	}
 
  }
  
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
