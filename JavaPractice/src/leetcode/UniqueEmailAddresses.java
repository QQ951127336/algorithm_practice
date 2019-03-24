package leetcode;

import java.util.HashMap;

public class UniqueEmailAddresses {
    class Solution {
        public int numUniqueEmails(String[] emails) {
            HashMap<String,Integer> result = new HashMap<>();
            for(String email:emails) {
                String message[] = email.split("@");
                String local = message[0];
                String host = message[1];
                local = local.split("\\+")[0];
                local = local.replaceAll("\\.","");
                email = local + host;
                if(!result.containsKey(email))
                    result.put(email,1);
            }
            return result.size();
        }
    }
}
