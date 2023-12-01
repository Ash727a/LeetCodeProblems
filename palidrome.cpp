class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0) return false;

        unsigned int val =  0; 
        unsigned int xt   = x; 
        
        for(;;)
        {
            if(xt <= 0) break;
            val = (val* 10) + (xt % 10); 
            xt  = (xt - (xt % 10)) / 10; 
        }
       return x == val; 
    }
};

