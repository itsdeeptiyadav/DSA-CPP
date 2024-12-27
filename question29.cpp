class Solution {
public:
   public:
    int getSum(int a, int b) {
        while (b != 0) {
            // Calculate the carry
            int carry = (a & b) << 1;

            // Calculate sum without carry
            a = a ^ b;

            // Update b to the carry
            b = carry;
        }

        return a;
    }
};