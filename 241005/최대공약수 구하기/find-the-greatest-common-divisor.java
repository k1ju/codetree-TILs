import java.util.*;
public class Main {
    public static void main(String[] args) {



        Scanner sc = new Scanner(System.in);

        int a = Integer.parseInt(sc.next());
        int b = Integer.parseInt(sc.next());

        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();
        int answer = 0;

        for(int i=1; i <= Math.min(a,b); i++){
            
            if( a%i==0 && b%i==0 ) {
                answer = i;
            }
        }

        System.out.println(answer);

        // 여기에 코드를 작성해주세요.
    }
}