/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head==NULL || head->next==NULL)
        return NULL;
        Node *slow=head,*fast=head,*temp=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            
        }
        temp->next=slow->next;
        return head;
    }
};
