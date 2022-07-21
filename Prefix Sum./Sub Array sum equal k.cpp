class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return 0;
        unordered_map<int,int>umap;
        int currsum=0;
        int i=0;
        int count=0;
        while(i<n){
            currsum+=nums[i];
            if(currsum==k)
                count++;
            if(umap.find(currsum-k)!=umap.end())
            count+=umap[currsum-k];
            umap[currsum]+=1;
            i+=1;
            
        }
        return count;
        
    }
};
// time o(N)
// space o(N)
