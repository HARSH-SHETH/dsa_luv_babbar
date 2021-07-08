vector<int> factorial(int N){
  // code here
  vector<int> v;
  v.push_back(1);
  for(int i = 2; i <= N; i++) {
    int carry = 0;
    for(int j = 0; j < v.size(); j++) {
      int mul = i * v[j] + carry;
      int digit = mul % 10;
      carry = mul/10;
      v[j] = digit;
    }
    while(carry != 0){
      v.push_back(carry % 10);
      carry = carry / 10;
    }
  }
  reverse(v.begin(), v.end());
  return v;
}
