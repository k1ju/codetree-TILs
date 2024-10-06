import java.util.*;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int num = Integer.parseInt(sc.nextLine());

       Deque<Integer> dq = new ArrayDeque<>();

       for(int i=1; i<=num; i++){
            dq.addLast(i);
       }

       while(dq.size() > 1){
        dq.pollFirst();
        dq.addLast(dq.pollFirst());
       }

        System.out.println(dq.poll());


    }
}