#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
struct edge {
    int from, to, cap, flow;
    edge(int u, int v, int c, int f) : from(u), to(v), cap(c), flow(f) {}
};
struct Dinic {
    vector<edge> edges;
    vector<vector<int>> adj;
    vector<int> level, ptr;
    int n, m = 0, s, t;
    Dinic(int n, int s, int t) : n(n), s(s), t(t) {
        adj.resize(n);
        level.resize(n);
        ptr.resize(n);
    }
    void addEdge(int u, int v, int c) {
        edges.emplace_back(u, v, c, 0);
        edges.emplace_back(v, u, 0, 0);
        adj[u].push_back(m);
        adj[v].push_back(m + 1);
        m += 2;
    }
    bool bfs() {
        fill(level.begin(), level.end(), -1);
        queue<int> q;
        q.push(s);
        level[s] = 0;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int id : adj[u]) {
                if (edges[id].cap - edges[id].flow < 1) continue;
                int v = edges[id].to;
                if (level[v] != -1) continue;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
        return level[t] != -1;
    }
    int dfs(int u, int pushed) {
        if (pushed == 0) return 0;
        if (u == t) return pushed;
        for (int &cid = ptr[u]; cid < (int)adj[u].size(); cid++) {
            int id = adj[u][cid];
            int v = edges[id].to;
            if (level[u] + 1 != level[v] || edges[id].cap - edges[id].flow < 1)
                continue;
            int tr = dfs(v, min(pushed, edges[id].cap - edges[id].flow));
            if (tr == 0) continue;
            edges[id].flow += tr;
            edges[id ^ 1].flow -= tr;
            return tr;
        }
        return 0;
    }
    int flow() {
        int f = 0;
        while (true) {
            if (!bfs()) break;
            fill(ptr.begin(), ptr.end(), 0);
            while (int pushed = dfs(s, INT_MAX)) {
                f += pushed;
            }
        }
        return f;
    }
};
int main() {
    int n,m,ans;char c;
    while(cin>>n>>m){
    	ans=n;
    	vector<int>s(m),t(m);
    	for(int k=0;k<m;k++)cin>>c>>s[k]>>c>>t[k]>>c;
    	for(int k=0;k<n-1;k++)for(int i=k+1;i<n;i++){
    		Dinic dinic(n*2,n+k,i);
    		for(int j=0;j<n;j++)dinic.addEdge(j, j+n, 1);
    		for(int j=0;j<m;j++){
    			dinic.addEdge(s[j]+n, t[j], n);
    			dinic.addEdge(t[j]+n, s[j], n);
    		}
    		ans=min(ans,dinic.flow());
    	}
    	cout<<ans<<'\n';
    }
}