#include <bits/stdc++.h>
using namespace std;
 
int i = 0;
typedef struct node {
    int key;
    struct node* prev;
    struct node* next;
 
} node;
 
node* head = NULL;
node* first = NULL;
node* temp = NULL;
node* tail = NULL;
 
void addnode(int k)
{
 
    node* ptr
        = (node*)malloc(sizeof(node));
 
    ptr->key = k;
 
    ptr->next = NULL;
    ptr->prev = NULL;
 
    if (head == NULL) {
        head = ptr;
        first = head;
        tail = head;
    }
 
    else {
        temp = ptr;
        first->next = temp;
        temp->prev = first;
        first = temp;
        tail = temp;
    }
 
    i++;
}
 
void traverse()
{
    node* ptr = head;
       cout<<"\nThe elements are\n\n";
     while (ptr != NULL) {
        cout << ptr->key<<"  ";
        ptr = ptr->next;
    }
    cout <<"\n";
}
 
void insertatbegin(int k)
{
 
    node* ptr
        = (node*)malloc(sizeof(node));
 
    ptr->key = k;
 
    ptr->next = NULL;
    ptr->prev = NULL;
 
    if (head == NULL) {
        first = ptr;
        first = head;
        tail = head;
    }
 
    else {
        temp = ptr;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    i++;
}
 
void insertatend(int k)
{
 
    node* ptr
        = (node*)malloc(sizeof(node));
 
    ptr->key = k;
 
    ptr->next = NULL;
    ptr->prev = NULL;
 
    if (head == NULL) {
        first = ptr;
        first = head;
        tail = head;
    }

    else {
        temp = ptr;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    i++;
}
 
void insertatpos(int k, int pos)
{
 
    if (pos < 1 || pos > i + 1) {
        cout <<"Please enter a"
               " valid position\n";
    }
 
    else if (pos == 1) {
        insertatbegin(k);
    }
 
    else if (pos == i + 1) {
        insertatend(k);
    }
 
    else {
        node* src = head;
 
        while (pos--) {
            src = src->next;
        }
 
        node **da, **ba;
        node* ptr
            = (node*)malloc(
                sizeof(node));
        ptr->next = NULL;
        ptr->prev = NULL;
        ptr->key = k;
 
        ba = &src;
        da = &(src->prev);
        ptr->next = (*ba);
        ptr->prev = (*da);
        (*da)->next = ptr;
        (*ba)->prev = ptr;
        i++;
    }
}
 
void delatbegin()
{
    head = head->next;
    i--;
}
 
void delatend()
{
    tail = tail->prev;
    tail->next = NULL;
    i--;
} 
void delatpos(int pos)
{
 
    if (pos < 1 || pos > i + 1) {
        cout <<"Please enter a"
               " valid position\n";
    }
 
    else if (pos == 1) {
        delatbegin();
    }
 
    else if (pos == i) {
        delatend();
    }
 
    else {
        node* src = head;
        pos--;
 
        while (pos--) {
            src = src->next;
        }
 
        node **pre, **aft;
        pre = &(src->prev);
        aft = &(src->next);
 
        (*pre)->next = (*aft);
        (*aft)->prev = (*pre);
 
        i--;
    }
}
 
int main(){
  cout<<"\nEnter The number of element \n";
  int n;cin>>n;
 
      cout<<"\nEnter the elements\n";
      for(int j=0;j<n;j++){

         int x;cin>>x;
         addnode(x);   
      }

    while(1){
    cout<<"\nEnter 1 for insert element\n";
    cout<<"\nEnter 2 for delete element\n";
    cout<<"\nEnter 3 for  show  element\n";
    cout<<"\nEnter 4 for  exit\n";
    int type;cin>>type;
    if(type==1){
     cout<<"\nEnter 1 for insert at begin\n";
     cout<<"\nEnter 2 for insert at end\n";
     cout<<"\nEnter 3 for insert at pos\n";
      int ty;cin>>ty;
      if(ty==1){
       cout<<"\nEnter the number\n";
       int x;cin>>x;       
        insertatbegin(x);   
      }
      else if(ty==2){
       cout<<"\nEnter the number\n";
       int x;cin>>x; 
      insertatend(x);  
      }else{
        int pos,x;
        cout<<"\nEnter the pos and number\n";
        cin>>pos>>x;pos--;
        insertatpos(x, pos); 
      }    
    }
    else if(type==2){
    cout<<"\nEnter 1 for delete at begin\n"; 
    cout<<"\nEnter 2 for delete at end\n";
    cout<<"\nEnter 3 for delete at pos\n";
     int ty;cin>>ty;
     if(ty==1){
         delatbegin();
     }
     else if(ty==2){
          delatend();
     }
     else{
       cout<<" \nEnter pos \n";
       int pos;cin>>pos;
         delatpos(pos);
     }

    }
    else if(type==3){
        traverse();
    }
    else{
        break;
    }

  }
 
    return 0;
}
 