import java.util.*;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc = new Scanner(System.in);
        int num = Integer.parseInt(sc.nextLine());
        Deque<Integer> dq = new ArrayDeque<>();

        for(int i=0; i<num; i++){

            String[] arr = sc.nextLine().split(" ");
            if(arr[0].equals("push_front")){
                dq.addFirst(Integer.parseInt(arr[1]));
            } else if(arr[0].equals("push_back")){
                dq.addLast(Integer.parseInt(arr[1]));
            } else if(arr[0].equals("pop_front")){
                System.out.println(dq.pollFirst());
            } else if(arr[0].equals("pop_back")){
                System.out.println(dq.pollLast());
            } else if(arr[0].equals("size")){
                System.out.println(dq.size());
            } else if(arr[0].equals("empty")){
                if(!dq.isEmpty()){
                    System.out.println(0);
                } else{
                    System.out.println(1);
                }
            } else if(arr[0].equals("front")){
                System.out.println(dq.peekFirst());
            } else if(arr[0].equals("back")){
                System.out.println(dq.peekLast());

            }
        }


    }
}