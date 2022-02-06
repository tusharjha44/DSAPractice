class Solution {
public:
    /*the index of parent is i. left child is at index 2i+1(odd) whereas right child is at index 2i+2(even).
    Thus when we see K%2==0, means it is right child thus if parent is 0 (01)-> its child should be 1(as it is right child) or if parent is 1(10) it should be 0
    similar method when k is odd.*/
     int kthGrammar(int N, int K) {
    	if (N == 1) return 0;
    	if (K % 2 == 0) return (kthGrammar(N - 1, K / 2) == 0) ? 1 : 0;
	    else return (kthGrammar(N - 1, (K + 1) / 2) == 0) ? 0 : 1;
    }
};
