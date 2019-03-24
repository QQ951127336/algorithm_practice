package leetcode;

public class FlippingAnImage {
    class Solution{
        public int[][] filpAndInvertImage(int[][] A){
            for(int i=0; i<A.length; i++){
                int length = A[i].length;
                int[] tmp = new int[length];
                for(int j=0; j<length; j++){
                    tmp[j] = A[i][length -1 -j] ^ 1;
                }
                for(int j=0; j <length; j++){
                    A[i][j] = tmp[j];
                }
            }
            return A;
        }
    }
}
