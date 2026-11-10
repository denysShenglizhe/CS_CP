using namespace std;
#include<bits/stdc++.h>
bool check(vector<vector<long long int >> & x, long long int d,int n){
       
       int cow =1;
       long long int  now= x[0][0];
       int ind =0;
       while(cow<=n){
        now+=d;
        
        
        for(;ind<x.size();){
            
            if(now>=x[ind][0]&& now<=x[ind][1]){cow+=1;break;}
            if(now<x[ind][0]){now=x[ind][0];cow+=1;break;}
            if(now>x[ind][1]){ind+=1;}
            
        
             
       }
       if(cow==n){return true;}
       if(ind>=x.size()){return false;}
   
        
    }
    return true;

}





void solve(){
    freopen("socdist.in","r",stdin);
    freopen("socdist.out","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<vector<long long int>> x(m,vector<long long int>(2));
    for(int i=0;i<m;i++){
        cin>>x[i][0]>>x[i][1];
    }
    sort(x.begin(),x.end());
   
    
    long long int r=1;
    long long int l=1e18;
    while(l-r>1){
        long long int mid = (l+r)/2;
        if(check(x,mid,n)){r=mid;}
        else{l=mid;}
    }
    cout<<r<<endl;
   
}
int main(){
    
    solve();
}
