# [Group Anagrams](https://leetcode.com/problems/group-anagrams/)

## Goal

Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

## Approach

With the commonality between anagrams being the fact that they have the same letters, but those letter are arranged in different orders, I use the sorted arrangment of the letters as the key in the map. This allows for the use of the inbuilt sort funtion.

I simply iterate through the strings, sort each string into it's key `k` then add the string to the `k` key vector in the hash map
The I iterate through this hashmap and return the from the final 2D vector

### Runtime
Assuming the length of the array is `n` and the length of the longest string `b`:
- To sort each string takes: `O(blogb)` time
- To iterate through the array takes `O(n)` time

Final Runtime: `O(n * b log b)`