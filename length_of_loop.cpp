/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(struct Node *head) {
        // Code here
        if(head==NULL)
        return 0;
        Node *slow=head,*fast=head,*temp=head;
        bool flag=0;
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast->next==NULL)
            {
                break;
            }
            else
            {
                fast=fast->next;
            }
            if(slow==fast)
            {
                temp=slow;
                flag=1;
                break;
            }
        }
        if(flag==0)
        return 0;
        slow=slow->next;
        int count=0;
        while(slow!=temp)
        {
            slow=slow->next;
            count++;
        }
        return count+1;
        
    }
};
