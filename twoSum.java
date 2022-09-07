import java.util.HashMap;

// Logic:
// Create a map to store the  values of the target number - the current number
// We then check whether the difference between current number and targer number is already stored in the map
// if so, we return the current number plus the complement. Otherwise we add the current number to the map.





class solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> check = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (check.getOrDefault(complement, -1) == -1) { // this method returns the -1 if the key is not present in the map.
                check.put(nums[i], 1);
            } else {
                return new int[] {complement, nums[i]};
            }
        }
        return new int[] {-1, -1};
    }
}