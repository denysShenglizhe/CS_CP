using namespace std;
#include<bits/stdc++.h>
vector<int> SumOfTwo(vector<vector<int>> & arr,int index, int sumi){
    if(index>=arr.size()){return {};}
    int n=arr.size();
    int l=index;
    int r=n-1;
    while(l<r){
        if(arr[l][0]+arr[r][0]==sumi){return {l,r};}
        else if(arr[l][0]+arr[r][0]<sumi){l+=1;}
        else{r-=1;}
    }
    return {};
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<vector<int>> arr(n,vector<int> (2));
    for(int i=0;i<n;i++){cin>>arr[i][0];arr[i][1]=i;}
    sort(arr.begin(),arr.end());
    for(int i=0;i<=n-3;i++){
        vector<int> now=SumOfTwo(arr,i+1,x-arr[i][0]);
        
        if(!now.empty()){cout<<1+arr[i][1]<<" "<<1+arr[now[0]][1]<<" "<<1+arr[now[1]][1]<<endl;return 0;}
    }
    cout<<"IMPOSSIBLE"<<endl;
    



}
