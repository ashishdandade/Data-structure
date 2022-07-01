//brute force sort the array 
//traverse the array and cheack next element then return that element
//method two use hashmap count the elment if if any number occure more than one time return that element


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>count(nums.size(),0);
        int index=0;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;               
    }
     for(int i=0;i<count.size();i++){
        if(count[i]>1){
            index=i;
            break;
        }
    }
    return index;
    }
    
};
//Time complexity is the o(n)
//space complexity is the o(1)
