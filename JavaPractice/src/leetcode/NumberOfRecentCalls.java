package leetcode;

import java.util.ArrayList;

public class NumberOfRecentCalls {
    class RecentCounter {
        ArrayList<Integer> pingRecord;
        public RecentCounter() {
            pingRecord = new ArrayList();
        }

        public int ping(int t) {
            pingRecord.add(t);
            int i;
            for(i=0; i < pingRecord.size(); i++){
                if(pingRecord.get(i) >= t-3000)
                    break;
            }
            for(int j = 0; j < i ; j++){
                pingRecord.remove(0);
            }
            return pingRecord.size();
        }
    }
}
