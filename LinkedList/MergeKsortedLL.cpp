#include<bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};

Node* mergeKLists(Node* arr[], int N);

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}

   		Node *res = mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
// } Driver Code Ends


/*Linked list Node structure

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

/* arr[] is an array of pointers to heads of linked lists
  and N is size of arr[]  */
  
Node* merge(Node* head1,Node* head2){
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node* temp;
    if(head1->data>=head2->data){
        temp = head2;
        temp->next = merge(head1,head2->next);
    }
    else if(head1->data<head2->data){
        temp = head1;
        temp->next = merge(head1->next,head2);
    }
    return temp;
}


Node * mergeKLists(Node *arr[], int N)
{
       // Your code here
       if(N<2)
       {
           return arr[0];
       }
       Node* head = merge(arr[0],arr[1]);
       for(int i=2;i<N;i++)
       {
           head = merge(head,arr[i]);
       }
       
       return head;
       
}

