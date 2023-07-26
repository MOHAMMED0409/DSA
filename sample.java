import java.util.*;
public class sample{
    public static void main(String[] args)
    {
        Set<String> hash_set = new HashSet<String>();
        hash_set.add("Greeks");
        hash_set.add("For");
        hash_set.add("Greeks");
        hash_set.add("Greeks");
        hash_set.add("Example");
        hash_set.add("Set");
        System.out.println(hash_set);
    }
}