class Solution {
public:
    int partitionString(string s) {
        vector<int> lastseen(26,-1);
        int count = 0;
        int currSubstringStart = 0;
        for(int i=0;i<s.length();i++){
            if(lastseen[s[i]-'a']>=currSubstringStart){
                count++;
                currSubstringStart=i;
            }
            lastseen[s[i]-'a']=i;
        }
    return count+1;
    }
};
