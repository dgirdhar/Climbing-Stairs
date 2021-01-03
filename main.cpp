class Solution {
public:
    int climbStairs(int n) {
        int array[n + 1];
        
        array[0] = 1;
        array[1] = 1;
        
        for (int i = 2; i <= n; ++i) {
            int temp = i;
            
            int step1 = i - 1;
            int step2 = i - 2;
            
            array[i] = array[step1] + array[step2];
        }
        
        return array[n];
    }
};
