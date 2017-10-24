#include <bits/stdc++.h>

//username : https://www.hackerrank.com/riconniag

using namespace std;
bool used[11];
bool check(int n,int k){
    for(int i=0;i<10;i++) used[i]=false;
    int count=0,d;
    for(int i=1;count<k;i++)
        {
        int temp=i*n;
        while(temp)
            {
            d=temp%10;
            temp/=10;
            if(d==0||d>k||used[d])
                return false;
            used[d]=true;
            count++;
           }
         }
    return (count==k);
}

int main() {
    int n,k;
    cin>>n>>k;
    for(int i=2;i<n;i++)
        if(check(i,k))
            cout<<i<<endl;
            
    return 0;
}

