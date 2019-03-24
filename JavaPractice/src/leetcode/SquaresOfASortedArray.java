package leetcode;

import java.util.Arrays;

public class SquaresOfASortedArray {
    class Solution{
        public int[] sortedSquares(int[] A){
            for (int index = 0; index < A.length; index++){
                A[index] = A[index] * A[index];
            }
            Arrays.sort(A);
            return A;
        }
    }
}
