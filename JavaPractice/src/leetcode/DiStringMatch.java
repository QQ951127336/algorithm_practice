package leetcode;

public class DiStringMatch {
    public int[] diStringMatch(String S) {
        int[] N = new int[S.length()+1];
        int max = S.length();
        int min = 0;
        for(int i =0; i < S.length(); i++){
            char X = S.charAt(i);
            if (X == 'I') {
                N[i] = min;
                min++;
            } else if(X == 'D'){
                N[i] = max;
                max--;
            }
        }
        N[S.length()] = min++;
        return N;
    }
}
