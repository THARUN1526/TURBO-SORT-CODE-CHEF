import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        
        int[] k = new int[a];
        for (int i = 0; i < a; ++i) {
            k[i] = scanner.nextInt();
        }
        
        Arrays.sort(k);
        
        for (int i : k) {
            System.out.println(i);
        }
    }
}
