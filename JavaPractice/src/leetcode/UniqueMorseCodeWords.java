package leetcode;

import java.util.HashMap;

public class UniqueMorseCodeWords {
    class Solution {
        private final String[] MORSE_MAP = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        public int uniqueMorseRepresentations(String[] words) {
            HashMap<String,Boolean> resultMap = new HashMap<>();
            for(String line:words){
                StringBuilder morseBuilder = new StringBuilder();
                for(int i=0; i < line.length(); i++){
                    char tmpChar = line.charAt(i);
                    morseBuilder.append(MORSE_MAP[tmpChar-'a']);
                }
                resultMap.put(morseBuilder.toString(), true);
            }
            return resultMap.size();
        }
    }
}
