class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()<2) return 0;
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){
            return a[0]<b[0];
        });
        int count=0;
        int last_included=0;
        for(int i=1;i<intervals.size();++i){
            if(intervals[i][0]<intervals[last_included][1]){
                count++;
                if(intervals[i][1]<intervals[last_included][1])
                    last_included=i;
            }else{
                last_included=i;
            }
            
        }
        return count;
    }
};

//the greedy approch take time nlogn for sorting and n for traversing 
// so the time complexity is ologn
// space complexity is constant o(1)
