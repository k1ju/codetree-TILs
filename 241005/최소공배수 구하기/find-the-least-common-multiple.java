import java.util.*;
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = Integer.parseInt(sc.next());
        int b = Integer.parseInt(sc.next());
        int num = 0;

        for(int i=1; i<=Math.min(a,b); i++ ){

            if( a%i==0 && b%i==0 ){
                num = i;
            }
        }

        System.out.println(a*b/num);



        // 여기에 코드를 작성해주세요.
    }
}