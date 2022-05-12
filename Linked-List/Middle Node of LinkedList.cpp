class Solution{
    public:
    
    int getMiddle(Node *head)
    {
        // Your code here
        Node *fast=head;
        Node *slow=head;
        
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
        }
        return slow->data;
    }
};
