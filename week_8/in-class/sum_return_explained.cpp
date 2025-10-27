// Input
        /*
        We are given an array of integers and a target value        
        */


        // What DS/Algo:
        /*   
        We are going to use a hashTable, to store the complement values

        complement = target - Array Number
        Explanation Array Number + complement = target

        1. Initialize an empty hash table to store complement values
        */


       // What do we do with the data
       /*
       We are going to iterate through our array.
       
       For each element:.....
       
       check if the complement value exists in the hash table.

       For if the element and the complement add up to the target and exists;
       we have found a pair which sums up to the target.

       2. Loop over each element in the array
           a. Calculate the coompliment value by subtracting the current element from the  target to get our complement. 
          
           complement = target - Array Number

           
           b. Check if the complement value exists in the hash table.
           i.  If it exist, return the indices to the current element and its complement from the hash table.
           ii. If it doesnt exists, insert the current element into the hash table.

       */


        //output
        /*
        We will return the indices of the two element that sums up to the target       

        3. Retrurn an empty array (edge case)
        */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Step 1. Input-Given an array of integers and a target value
        unordered_map<int, int> hashTable;

        //what dsa to use?

        /*
        2. Loop over each element in the array
           a. Calculate the coompliment value by subtracting the current element from the  target to get our complement. 
          
           complement = target - Array Number

           
           b. Check if the complement value exists in the hash table.
           i.  If it exist, return the indices to the current element and its complement from the hash table.
           */

        for(int i = 0;i < nums.size(); i++) {
            int complement = target - nums[i];

            if (hashTable.count(complement)) {
                return{hashTable[complement], i};
            }
            //ii. If it doesnt exists, insert the current element into the hash table.
            hashTable[nums[i]] = i;
        }

        //what to do with the data?---return the indices of the two elements
        return {};

        //output
}
};