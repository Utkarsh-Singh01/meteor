class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int c,arm=0;
        c=n;
        while (n>0) {
            int r=n%10;
            arm=arm + (r*r*r);
            n=n/10;
        }
        if (c==arm) {
            return true;
        }
        else {
           return false;
         }
    }
};
