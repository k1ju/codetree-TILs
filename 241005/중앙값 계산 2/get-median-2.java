import java.util.*;
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = Integer.parseInt(sc.nextLine());
        ArrayList<Integer> arr = new ArrayList<>();

        for(int i=1; i<=a; i++){

            int num = Integer.parseInt(sc.next());

            arr.add(num);

            Collections.sort(arr);

            if(i%2==1){
                System.out.print( arr.get(i/2) + " " );
            }
        }



    }
}