#include <iostream>
#include <array>
using namespace std;

int main(){
  
  array <int, 10> ognum = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  array <int, 11> newnum;
  int newitem = 77;

  newnum[0] = ognum[0];
  newnum[1] = newitem;
 
  for(int i = 2; i < ognum.size() + 1; i++){
    newnum[i] = ognum[i-1];
  }

  cout << "New array: ";
  for(int elem : newnum){
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}