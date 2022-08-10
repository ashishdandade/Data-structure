/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
      vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<pair<int,int>> s;
        int i=0;
        while(head!=NULL){
            while(!s.empty() && s.top().first<head->val){
                int idx=s.top().second;
                s.pop();
                ans[idx]=head->val;
            }
            s.push({head->val,i++});
            head=head->next;
            ans.push_back(0);
        }
        return ans;
    }
        
    
};
