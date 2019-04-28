package leetcode;

public class Test {
    public static void main(String[] args){
        String a1 = "xxx";
        String a2 = a1.intern();
        String a3 = new String(a1);
        System.out.println(a1 == a2);
        System.out.println(a1.equals(a2));
        System.out.println(a1 == a3);
        System.out.println(a1.equals(a3));

    }
}
