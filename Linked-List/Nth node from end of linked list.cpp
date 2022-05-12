problem Link:- https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/?page=1&company[]=Amazon&category[]=Linked%20List&sortBy=submissions#


int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *fast=head;
       Node *slow=head;
       while(n>1){
           //move fast pointer n-1 position from head of linkedlist
           fast=fast->next;
           if(fast==NULL)return -1;
           n--;
       }
       while(fast->next!=NULL){
           
           fast=fast->next;
           slow=slow->next;
       }
       return slow->data;
}
