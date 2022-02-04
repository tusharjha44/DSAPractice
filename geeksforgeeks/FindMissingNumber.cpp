#include<bits/stdc++.h>
using namespace std;

class Solution{
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<long long> res;
	    unordered_set<long long> s;
	    
	    for(int i=0;i<M;i++){
	        s.insert(B[i]);
	    }
	    
	    for(int i=0;i<N;i++){
	        if(s.find(A[i]) == s.end()){
	            res.push_back(A[i]);
	        }
	    }
	    return res;
	}

};
