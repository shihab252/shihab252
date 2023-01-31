#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin >> n;
    cin >> k;
    int x[51];
    for (int i=0;i<n;i++)
             cin >> x[i];
    for (int i=0;i<n;i++){
        if(x[i]>=x[k-1] && x[i]>0)
        sum= sum+1;
        }


    cout << sum;
}
