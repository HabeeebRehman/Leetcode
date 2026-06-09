class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses , 0);

        for(const auto& pre : prerequisites) {

            int course = pre[0];
            int preReq = pre[1];
            adj[preReq].push_back(course);
            indegree[course]++;
        }

        queue<int>q;

        for(int i = 0 ; i < numCourses; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        int processedCourses = 0;
        
        while(!q.empty()) {
            int current = q.front();
            q.pop();
            processedCourses++;

            for(int n : adj[current]) {
                indegree[n]--;

                if(indegree[n] == 0) {
                    q.push(n);
                }
            }
        }
        return processedCourses == numCourses;
    }
};