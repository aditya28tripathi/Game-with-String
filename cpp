class Solution{
public:
    int minValue(string s, int k){
        map<char, int> m;
        priority_queue<int> pq;
        
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        
        for(auto x:m){
            pq.push(x.second);
        }
        
        while(k--){
            int temp = pq.top();
            pq.pop();
            temp--;
            pq.push(temp);
        }
        
        int sum=0;
        while(!pq.empty()){
            sum += pow(pq.top(), 2);
            pq.pop();
        }
        
        return sum;
    }
};
