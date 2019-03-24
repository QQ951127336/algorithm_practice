package leetcode;

import java.util.HashMap;
import java.util.Scanner;

public class JewelsAndStones {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String line = scanner.nextLine();
        String[] input = line.split("\"");
        String J = input[1], S = input[3];
        Solution solution = new Solution();
        int count = solution.numJewelsInStones(J, S);
        System.out.println(count);
    }

}
class Solution {
    public int numJewelsInStones(String J, String S) {
        HashMap<Character, Boolean> jewel = new HashMap();
        for(int index =0; index<J.length(); index++){
            Character jewelKind = J.charAt(index);
            if(!jewel.containsKey(jewelKind))
                jewel.put(jewelKind, true);
        }
        int count = 0;
        for(int index=0;index<S.length();index++){
            Character stoneKind = S.charAt(index);
            if(jewel.containsKey(stoneKind))
                count++;
        }
        return count;
    }
}
