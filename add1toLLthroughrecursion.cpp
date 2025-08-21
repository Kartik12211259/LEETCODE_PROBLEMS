class Solution {
  public:
  
  Node* solve(Node*& head, int& carry)
  {
       if(head==NULL)
        {
            return head;
        }
        
        
        
    solve(head->next,carry);
        
        
        int sum = head->data + carry;
        int digit = sum % 10;
        carry= sum/10;
        head->data= digit;
        
        
       return head;
  }
  
  
  
    Node* addOne(Node* head) {
        
        int carry=1;
        solve(head,carry);
        Node * temp = head;
        if(carry!=0)
        {
            Node* newnode= new Node(1);
            
            newnode->next=head;
            head=newnode;
            
            
        }
        
        return head;
       
    }
};
