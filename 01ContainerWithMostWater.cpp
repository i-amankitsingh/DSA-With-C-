#include <iostream>
#include <vector>
using namespace std;

vector<int> containerWithMostWater(vector<int>& arr, int s){

  int start = 0;
  int end = s-1;
  
  int maxWater = 0;
  int leftWall = 0;
  int rightWall = 0;

  while(start < end){
    int w = end - start;
    int h = min(arr[start], arr[end]);
    int currentWater = w*h;

    if(currentWater > maxWater){
      maxWater = currentWater;
      leftWall = start;
      rightWall = end;
    } 
    arr[start] > arr[end] ? end-- : start++;

  }
  return {leftWall, rightWall};
}

int main() {
  
  vector<int> arr = {1,8,6,2,5,4,8,3,7};
  vector<int> ans = containerWithMostWater(arr, arr.size());
  cout<<"Left Wall Index: "<<ans[0]<<" Right Wall Index: "<<ans[1]<<endl;
  return 0;
}



