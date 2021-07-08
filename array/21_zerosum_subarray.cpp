bool subArrayExists(int arr[], int n)
{
  unordered_set<int> s;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
    if(s.find(sum) != s.end() || sum == 0){
      return true;
    }else{
      s.insert(sum);
    }
  }
  return false;
  //Your code here
}
