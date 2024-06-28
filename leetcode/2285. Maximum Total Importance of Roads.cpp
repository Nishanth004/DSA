class Solution {
public:
    static bool compareByValue(const pair<int, int> &a, const pair<int, int> &b) {
        return a.second > b.second;
    }
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map< int, int> map;
        //get the frquency of all cities
        for(auto& edge:roads)
        {
            map[edge[0]]++;
            map[edge[1]]++;
        }
        vector<pair<int, int>>vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), compareByValue);
        //use this to seee the output
        // for(auto it=vec.begin();it!=vec.end(); it++)
        // {
        //     cout<<it->first<<"->"<<it->second<<endl;
        // }
        //assign impotance to each city
        // cout<<"after"<<endl;

        // for(auto it=vec.begin();it!=vec.end(); it++)
        // {
        //     it->second=n--;
        // }
        
         long long sum=0;
        // for(auto& edge:roads)
        // {
        //     sum+=vec[edge[0]]+vec[edge[1]];
        // }
        unordered_map<int, int> importanceMap;
        for(auto& it : vec) {
            importanceMap[it.first] = n--;
        }
         for(auto& edge : roads) {
            sum += importanceMap[edge[0]] + importanceMap[edge[1]];
        }
        return sum;
    }
};



Easier method:

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> count(n, 0);
        for(auto &e : roads)
            ++count[e[0]], ++count[e[1]];
        
        sort(count.begin(), count.end());

        long long ans = 0;
        for(long long i = n; i >= 1; --i)
            ans += i*count[i-1];
        
        return ans;
    }
};
