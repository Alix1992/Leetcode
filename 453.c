/*
453. 最小移动次数使数组元素相等
给定一个长度为 n 的非空整数数组，找到让数组所有元素相等的最小移动次数。每次移动可以使 n - 1 个元素增加 1。

示例:

输入:
[1,2,3]

输出:
3

解释:
只需要3次移动（注意每次移动会增加两个元素的值）：

[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minInnums=nums[0];
        int sumnums = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(minInnums>nums[i])minInnums=nums[i];
            sumnums=sumnums+nums[i];
        }
        return (sumnums-minInnums*nums.size());
        
    }
};