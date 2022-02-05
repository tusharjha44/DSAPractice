class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           map<string,int> mp;
           int ct=0;
           
           for(int i=0;i<n;i++){
               mp[list[i]]++;
           }
           
           for(auto &x: mp){
               if(x.second==2){
                   ct++;
               }
           }
           return ct;
        }

};
