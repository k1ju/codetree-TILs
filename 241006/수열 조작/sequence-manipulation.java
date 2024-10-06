import java.util.*;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.


          Scanner sc = new Scanner(System.in);
        int num = Integer.parseInt(sc.nextLine());

        // Deque를 사용하여 정수를 저장
        Deque<Integer> dq = new ArrayDeque<>();

        // 1부터 N까지의 정수를 Deque에 추가
        for (int i = 1; i <= num; i++) {
            dq.addLast(i);
        }

        // 남은 수가 하나가 될 때까지 반복
        while (dq.size() > 1) {
            // 1. 맨 앞의 정수 제거
            dq.removeFirst();
            // 2. 맨 앞의 정수를 맨 뒤로 이동
            int front = dq.removeFirst();
            dq.addLast(front);
        }

        // 남은 정수를 출력
        System.out.println(dq.peekFirst());



    }
}