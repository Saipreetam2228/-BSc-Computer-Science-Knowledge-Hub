import java.util.Map;
import java.util.HashMap;

public class Main {
    public static void main(String... args) {
        Map<String, String> map = new HashMap<> ();
        map.put("ABC", "12345");
        map.put("ABCD", "123456");
        //System.out.println(map.get("ABC"));
        Integer[] numbers = {10, 20, 30, 40, 25};
        Integer target = 65;
        Integer[] res = new Main().sums(numbers, target);
        System.out.println("Indexes: " + res[0]);
        System.out.println("Indexes: " + res[1]);
        //Main().sums();
    }

   
    public Integer[] sums(Integer[] numbers, Integer target) {
        Map<Integer, Integer> lookup = new HashMap<> ();

        for (int i = 0; i < numbers.length; i++) {
            Integer previousCompute = lookup.get(numbers[i]);
            if (previousCompute != null) {
                // Meaning, you have found the match
                // compute the response and return
                Integer[] res = new Integer[2];
                res[0] = previousCompute;
                res[1] = i;
                return res;
            }
            Integer x = target - numbers[i];
            lookup.put(x, i); // x is the difference
            // it is the index of the first index
        }
        return null;
    }
}