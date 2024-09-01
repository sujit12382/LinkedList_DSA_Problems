/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverse(Node *head)
    {
        if(head==NULL || head->next==NULL)
        return head;
        Node *prev=NULL,*temp=head,*curr=head;
        while(curr!=NULL)
        {
            curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        return prev;
    }
    Node *compute(Node *head) {
        // your code goes here
        Node *prev=reverse(head),*temp=head,*curr=head;
        
        int maxi=prev->data;
        temp=prev->next;
        curr=prev;
        while(temp!=NULL)
        {
            if(temp!=NULL && temp->data<maxi)
            {
                curr->next=temp->next;
                temp=curr->next;
            }
            else
            {
                maxi=temp->data;
                curr=temp;
                temp=temp->next;
            }
        }
        head=reverse(prev);
        return head;
        
        
    }
};
