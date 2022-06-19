// Rotate a linked list (Left rotation)

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        int size=0,counter=0;
        Node *temp=head,*temp2,*temp3;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        temp=head;
        if(size != k)
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=head;
            temp=head;
            while(counter!= k-1)
            {
                counter++;
                temp=temp->next;
            }
            temp2=temp;
            temp=temp->next;
            temp2->next=NULL;
            return temp;
        }
        return head;
    }
};
