//need improvement

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> result;
       
        for (auto el : A ){
		    result.push_back(el*el);
	    }
    
        sort(result.begin(), result.end());

        return result;
       
    }
};