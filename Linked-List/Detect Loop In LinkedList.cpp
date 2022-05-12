Problem Link:- https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1/?page=1&company[]=Amazon&category[]=Linked%20List&sortBy=submissions#


class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node *slow=head;
        Node *fast=head;
        
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
               return true;
        }
        return false;
    }
};
