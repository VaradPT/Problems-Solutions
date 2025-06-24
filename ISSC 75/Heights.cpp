class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;              //Declaring array 'expected' and copying contents of 'heights'  
        
        sort(expected.begin(),expected.end());       
        /* Inbuilt cpp Introspective sort (Quicksort + heap sort + insertion sort)
        std::sort() from <algorithm> */
       
        int count = 0;
        for (int i = 0; i< expected.size(); i++){
            if(expected[i]!=heights[i])
                count++;
        }
        return count;            
    }
};
