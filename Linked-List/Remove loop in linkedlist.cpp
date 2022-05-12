Problem Link:- https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1/?page=1&company[]=Amazon&category[]=Linked%20List&sortBy=submissions#


class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head->next==head){
            head->next=NULL;
            return;
        }
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
            
            if(slow->next==head){
                slow->next=NULL;
                return;
            }
            if(fast==slow){
                slow=head;
                while(slow->next!=fast->next){
                    slow=slow->next;
                    fast=fast->next;
                   
                }
                fast->next=NULL;
                return; 
            }
           
        }
        return ;
    }
};
