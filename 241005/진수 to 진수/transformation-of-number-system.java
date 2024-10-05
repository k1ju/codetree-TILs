import java.util.*;
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] str = sc.nextLine().split(" "); 

        int c = Integer.parseInt(sc.nextLine());

        int sum = 0;

        StringBuilder sb = new StringBuilder();

        sb.append(c).reverse();


        for(int i=0; i<sb.length(); i++ ){

            sum += Integer.parseInt(String.valueOf(sb.charAt(i))) * Math.pow(8,i);

        }
        
        StringBuilder sb2 = new StringBuilder();

        while(sum>0){

            sb2.append( sum % Integer.parseInt(str[1]) );
            sum /= Integer.parseInt(str[1]);
            
        }

        System.out.println(sb2.toString());

    }
}