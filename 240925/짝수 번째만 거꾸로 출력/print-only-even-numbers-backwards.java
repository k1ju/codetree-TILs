import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        String str2 = "";

        for(int i=1; i<str.length(); i+=2){
            str2 += str.substring(i,i+1);
        }

        for(int i=str2.length()-1; i>=0; i--){
            System.out.print(str2.charAt(i));
        }
    }
}