// Approach-1 : Brute force approach will be to use hashing.

bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        unordered_set<ListNode*> uset;
        
        while(temp != NULL){
           if(uset.find(temp) != uset.end()) 
               return true;
            
            uset.insert(temp);
            temp=temp->next;
        }
        return false;
    }
// Time Complexity: O(N), due to traversing the whole Linked List
// Space Compexity: O(N), due to unordered set

// Approach-2: Use slow and fast pointer

bool hasCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        
        if(head == NULL) return false;
        
        while(fast->next != NULL and fast->next->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return true;
        }
        return false;
    }
// Time Complexity: O(N), due to traversing the whole Linked List
// Space Compexity: O(1)
