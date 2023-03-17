use std::cmp::Ordering;

impl Solution {
    pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
        let (mut left, mut right) = (0, nums.len());

        while left < right {
            let mid = left + ((right - left) >> 2);
            match nums[mid].cmp(&target) {
                Ordering::Less => left = mid + 1,
                _ => right = mid
            }
        }
        left as _
    }
}