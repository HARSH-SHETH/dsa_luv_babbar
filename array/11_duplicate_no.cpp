int findDuplicate(vector<int>& nums) {
  for(int i = 0; i < nums.size(); i++) {
    if(nums[-(-nums[i]) - 1] < 0) return (nums[i] < 0) ? -nums[i] : nums[i];

    nums[i] *= -1;
  }
  return -1;
}
