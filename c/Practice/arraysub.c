
// Input: nums = [1,5,0,3,5]
// Output: 3
// Explanation:
// In the first operation, choose x = 1. Now, nums = [0,4,0,2,4].
// In the second operation, choose x = 2. Now, nums = [0,2,0,0,2].
// In the third operation, choose x = 2. Now, nums = [0,0,0,0,0].


// Input: nums = [1,5,0,3,5] { when u subtract u have to subtract with all but not if its zero }

// 1 5 0 3 5 
// -1 
// 0 4 0 2 4 
// -2 
// 0 2 0 0 2 
// -2 
// 0 0 0 0  0