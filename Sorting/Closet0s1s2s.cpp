#include<bits/stdc++.h>
using namespace std;

void segragate012(int A[], int N);

int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    }

}
// } Driver Code Ends



// Function to segregate 0s, 1s and 2s
// A[]: input array
// N: size of array
void segragate012(int a[], int n)
{
    //Your code here
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        count0++;
        if(a[i]==1)
        count1++;
        if(a[i]==2)
        count2++;
    }
    for(int i=0;i<count0;i++)
    a[i] = 0;
    for(int i=count0;i<count0+count1;i++)
    a[i] = 1;
    for(int i=count0+count1;i<n;i++)
    a[i] = 2;
}