#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int maxS=INT_MIN;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum+=ar[k];
            }
             maxS=max(maxS,sum);
        }
    }
    cout<<maxS;
}