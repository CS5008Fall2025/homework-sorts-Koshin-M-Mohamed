/*
Sort Array By Parity
Given an integer array nums, move all the even integers at the beginning 
of the array followed by all the odd integers.

Return any array that satisfies this condition.

Example 1:
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] 
would also be accepted.

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
1 <= nums.length <= 5000
0 <= nums[i] <= 5000
*/



int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    
    // Allocating memory for a new array to hold the sorted reult
    *returnSize = numsSize;

     int* result = (int*)malloc(numsSize * sizeof(int));

    //left for even numbers in the beggining and right for odd numbers at the end
     int left = 0;
     int right =numsSize -1;

    // for loop to loop through all elements
    for (int i = 0; i < numsSize; i++) {
    // if number is even move it to the left then move left side one step to the right 
        if (nums[i] %2 == 0){
        result[left++] = nums[i];
    }
    // else do the opposite
    else{
        result [right--] = nums[i];
    }
}
    // Set the size of the output the same as the input array 
    *returnSize = numsSize;
    
    
    return result;


}



/*
Quadratic Sorts
Given an array [1, 5, 4, 6], 
explain how each of the Quadratic Sorts will sort this list.

*/

//ANSWER:

//Bubble Sort: keeps swapping neighbors until everything is in order.

//Selection Sort: finds the smallest number and moves it to the front, over and over.

//Insertion Sort: takes one number at a time and puts it where it belongs in the sorted part.