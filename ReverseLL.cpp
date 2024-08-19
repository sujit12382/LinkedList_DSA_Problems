/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/


class Solution
{
    public:
    //Function to reverse a linked list.
    void re(struct Node* &head,struct Node *curr,struct Node*prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    struct Node *forward=curr->next;
    curr->next=prev;
    re(head,forward,curr);
   
}
    struct Node* reverseList(struct Node *head)
    {
      struct Node* prev=NULL,*curr=head;
      re(head,curr,prev);
      return head;
    }
    
};
    
