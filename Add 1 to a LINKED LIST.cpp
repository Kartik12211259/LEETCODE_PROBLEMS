
class Solution {
  public:
  
  
  Node * reverse(Node *prev, Node* curr)
  {
      if(curr==NULL)
      {
          return prev;
      }
      
      Node * forward= curr->next;
      
      curr->next=prev;
      prev=curr;
      curr=forward;
      return reverse(prev,curr);

  }
  
  
  Node* add(Node* r, int carry)
  {
      Node* temp =r;
       temp->data=temp->data +1;
       carry=temp->data/10;
      while(carry!=0)
      {
          temp->data=(temp->data)-10;
         
          if(temp->next==NULL)
          {
              Node* newnode= new Node(1);
              temp->next=newnode;
              return r;
          }
          
          
           temp=temp->next;
           
           
          temp->data=temp->data+1;
          
          carry=temp->data/10;
      }
      
      return r;
  }
    Node* addOne(Node* head) {
        
        if(head==NULL)
        {
            return head;
        }
        
        
        
        Node* prev=NULL;
        Node*curr=head;
        Node* r=   reverse(prev,curr);
        
        int carry=0;
      Node*s=  add(r,carry);
      
       Node* p=NULL;
        Node*c=s;
        
        return reverse(p,c);
        
    }
};
