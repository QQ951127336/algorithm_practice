package leetcode;

import java.math.BigInteger;
import java.util.Scanner;

public class ReverseInteger {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        Solution solution = new Solution();
        System.out.println(solution.reverse(x));
    }

    static class Solution {
        public int reverse(int x){
            boolean Flag = false;
            BigInteger oldValue = new BigInteger(String.valueOf(x));
            if(x < 0) {
                Flag = true;
                oldValue = oldValue.abs();
            }
            String xValue = String.valueOf(oldValue);
            StringBuilder xReverse = new StringBuilder();
            int length = xValue.length();
            for(int index =length-1; index>=0;index--){
                xReverse.append(xValue.charAt(index));
            }
            BigInteger newValue = new BigInteger(xReverse.toString());
            if (Flag){
                newValue = newValue.negate();
            }

            if(Flag) {
                BigInteger minValue = new BigInteger(String.valueOf(Integer.MIN_VALUE));
                if (newValue.compareTo(minValue) == -1)
                    return 0;
            }
            else{
                BigInteger maxValue = new BigInteger(String.valueOf(Integer.MAX_VALUE));
                if(newValue.compareTo(maxValue) == 1)
                    return 0;
            }
            return newValue.intValue();
        }
    }
}
