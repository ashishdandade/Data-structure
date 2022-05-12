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
