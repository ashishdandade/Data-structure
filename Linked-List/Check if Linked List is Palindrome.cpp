TIME COMPLEXITY:O(N)
SPACE COMPLEXITY:O(N)
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        stack<int>s;
        Node *temp=head;
        while(temp!=NULL){
            s.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->data!=s.top()){
               return false;
            }
            else{
                s.pop();
                temp=temp->next;
                
            }
        }
        return true;
    }
};
