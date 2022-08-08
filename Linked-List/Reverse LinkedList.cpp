//brute force
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //If linked list is empty then return head
        if(head==NULL)return head;
        stack<int> stk;
        ListNode *temp=head;
        while(temp!=NULL){
            stk.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            temp->val=stk.top();
            stk.pop();
            temp=temp->next;
        }
        return head;
    }
};
// time o(n)
// space o(n)
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
      Node *prev=NULL;
      Node *curr=head;
      Node *next=head;
      while(next!=NULL){
          next=next->next;
          curr->next=prev;
          
          prev=curr;
          curr=next;
      }
      head=prev;
    }
    
};
time o(n)
space o(1)
