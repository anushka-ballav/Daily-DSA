#include <bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>> &mat) {
    int n=mat.size();
    vector<int> indegree(n, 0), outdegree(n, 0);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int x=mat[i][j];
            outdegree[i]+=x;
            indegree[j]+=x;
        }
    }
    for(int i=0;i<n;i++)
        if(indegree[i]==n-1 && outdegree[i]==0)
            return i;
    return -1;
}

int main() {
    vector<vector<int>>mat={{ 1, 1, 0 },
                            { 0, 1, 0 },
                            { 0, 1, 1 }};
    cout << celebrity(mat);
    return 0;
}