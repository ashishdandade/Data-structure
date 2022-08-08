/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode *p1 = headA;
    ListNode *p2 = headB;
        
    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        
        if (p1 == p2) return p1;

       
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }
        
    return p1;
}
        
    
};
// set solution
class Solution {
public:
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       unordered_set<ListNode*> s;
        while(headA!=NULL){
            s.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            if(s.find(headB)!=s.end()) return headB;
            headB = headB->next;
        }
        return NULL;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b){
            if(a==NULL) a=headB;
            else a=a->next;
            if(b==NULL) b=headA;
            else b=b->next;
        }
        return a;
    }
};
