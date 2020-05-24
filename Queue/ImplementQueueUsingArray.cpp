#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
};

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }
// } Driver Code Ends


/* 

The structure of the class is
class MyQueue {
private:
    int arr[10001];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

/* The method push to push element into the queue */
void MyQueue :: push(int x)
{
        // Your Code
        arr[rear] = x; 
        rear++;
}
/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code 
        int x;
        if(front==rear)
        {
            return -1;
        }
        else 
        {
            x = arr[0];
            for(int i=0;i<rear-1;i++)
            {
                arr[i] = arr[i+1];
            }
            rear--;
        }
        return x;
}
