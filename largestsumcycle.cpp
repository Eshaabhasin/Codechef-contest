#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>edge(n),indegree(n);
    for(int i=0;i<n;i++){
        cin>>edge[i];
        if(edge[i]!=-1){
            indegree[edge[i]]++;
        }
    }
   queue<int>q;
   vector<int>visited(n,0);
   for(int i=0;i<n;i++){
    if(indegree[i]==0){
        q.push(i);
    }
   }
   while(q.size()>0){
    int x=q.front();
    q.pop();
    visited[x]=1;
    int next=edge[x];
    if(next==-1)continue;
    indegree[next]--;
    if(indegree[next]==0){
        q.push(next);
    }
   }
   int ans=0;
   for(int i=0;i<n;i++){
    if(visited[i]==0){
        int current=i;
        int sum=0;
        while(visited[current]==0){
           visited[current]=1;
           sum+=current;
           int next=edge[current];
           if(next==-1)break;
           current=next;
        }
        if(current!=-1){
            ans=max(ans,sum);
        }

    }
  
   }
   cout<<ans<<endl;
}