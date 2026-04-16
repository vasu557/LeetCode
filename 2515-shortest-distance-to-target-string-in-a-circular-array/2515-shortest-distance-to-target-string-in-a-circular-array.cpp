class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        for(int i=0;i<n;i++){
            words.push_back(words[i]);
        }
        int ans = INT_MAX;
        int end = startIndex + n;
        for(int i=startIndex;i<end;i++){
            if(words[i%n] == target)
            {
                ans = min(i-startIndex,ans);
                break;
            }
        }
        end = startIndex+n;
        for(int i=end;i>startIndex;i--){
            if(words[i%n] == target){
                ans = min(end-i,ans);
                break;
            }
        }
    return ans == INT_MAX ? -1 : ans;
    }
};