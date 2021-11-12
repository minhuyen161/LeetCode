class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            slow = numSquareSum(slow);
            fast = numSquareSum(numSquareSum(fast));
        }
        while(slow!=fast);
        if(slow == 1) {return true;}
        else{ return false;}
    }
    int numSquareSum(int n)
    {
    int squareSum = 0;
    while (n)
    {
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    return squareSum;
    }
};