import java.util.*;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        Scanner sc = new Scanner(System.in);

        String str1 = sc.next();

        for(int i=0; i<str1.length(); i++){

            if(str1.substring(1,2).equals(str1.substring(i,i+1))){
                System.out.print(str1.substring(0,1));
            } else{
                System.out.print(str1.substring(i,i+1));
                
            }

        }


    }
}