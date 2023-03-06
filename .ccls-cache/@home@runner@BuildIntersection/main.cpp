#include <iostream>

using namespace std;
#include <vector>
#include <iostream>

std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
  // todo
  vector<int> result;
    cout<<" result size: "<<result.size();
  for (int i=0; i<a.size(); i++)
  {
    for (int j=0; j<b.size(); j++)
    {
      if(a[i]==b[j])
      {
        result.push_back(a[i]);
      }
    }
}
  cout<<" result size: "<<result.size();
  for(int i=0; i<result.size(); i++)
    cout<<" "<<result[i];
  return result;
}


int main() {
  std::vector<int> a;
  std::vector<int> b;
  for (int i = 0; i < 32; i += 1) {
    a.push_back(i);
    b.push_back(i);
  }

  intersection(a, b);
//  intersection ( {4,2,1,6}, {3,6,9,2,10});
}