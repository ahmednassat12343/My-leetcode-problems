class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int max = 0;
        while(i <= j)
        {
         int amount = (j - i) * min(heights[i] , heights[j]);
         if(max < amount) max = amount;
         if(heights[i] < heights[j])i++;
         else j--;

        }
        return max;
    }
    
};
