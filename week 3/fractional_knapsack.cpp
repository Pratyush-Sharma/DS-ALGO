#include <iostream>
#include <vector>
using namespace std;

/*double maximum(vector<long int> weights, vector<long int> values){
  int n = weights.size();
  double max[n] = {0};
  for (int i=0;i<n;i++){
    if(weights[i]>0){
      max[i] = values[i]/weights[i];
    }
  }
  int j=0;
  double k = max[0];
  for (j=0;j<n;j++){
    if(max[j]>k){
        k = max[j];
      }
  }
  return j;
}*/

int maximum(vector<int> weights, vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            max_i = i;
        }
    }
    return max_i;
}

/*double minimum(long int weight , long int capacity){
  double i =0;
  if(weight>capacity){
    i = capacity;
  }
  else{
    i = weight;
  }
  return i ;
}*/

/*double get_optimal_value(long int capacity, vector<long int> weights, vector<long int> values) {
  double value = 0.0;
  int n = weights.size();
  for (int i =0 ; i<n;i++){
    if (capacity==0){
      return value;
    }
    int m = maximum(weights,values);
    double a = min(weights[m], capacity);
    value = value + a*(values[m]/weights[m]);
    weights[m] = weights[m] - a;
    capacity = capacity - a ;

  }
  return value;
}*/

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;

    for (int i = 0; i < weights.size(); i++) {
        if (capacity == 0) return value;
        int index = maximum(weights, values);
        int a = min(capacity, weights[index]);
        value += a * (double) values[index] / weights[index];
        weights[index] -= a;
        capacity -= a;
    }

    return value;
}


int main() {
  int n;
  long int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << endl;
  return 0;
}
