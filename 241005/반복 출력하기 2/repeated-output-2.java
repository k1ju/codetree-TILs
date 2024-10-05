import java.util.*;

public class Main {

    public static void helloWorld(int n){
        if(n==0){
            return;
        }

        System.out.println("HelloWorld");
        helloWorld(n-1);
    }

    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);

        int a = Integer.parseInt(sc.next());

        helloWorld(a);

    }
}