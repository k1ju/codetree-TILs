import java.util.*;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int count = 0;

        for(int i=0; i<str.length(); i++){

            if(count ==0 && str.charAt(i) == 'e'){
                count++;
                continue;
            }
            System.out.print(str.charAt(i));

        }


    }
}