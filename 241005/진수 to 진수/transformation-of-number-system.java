import java.util.*;
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] str = sc.nextLine().split(" "); 
        int a = Integer.parseInt(str[0]);
        int b = Integer.parseInt(str[1]);

        String c = sc.nextLine();

        int decimalValue = 0;

        StringBuilder sb2 = new StringBuilder();
        sb2.append(c).reverse();

        for(int i=0; i<c.length(); i++ ){
            decimalValue += Integer.parseInt(String.valueOf(sb2.charAt(i))) * Math.pow(8,i);
        }

        StringBuilder sb = new StringBuilder();

        if(decimalValue==0){
            sb.append(0);
        } else{
            while(decimalValue>0){
                sb.append( decimalValue % Integer.parseInt(str[1]) );
                decimalValue /= Integer.parseInt(str[1]);
            }
        }

        System.out.println(sb.reverse().toString());

    }
}