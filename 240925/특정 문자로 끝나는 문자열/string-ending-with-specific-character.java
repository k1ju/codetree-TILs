import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        String[] arr = new String[11];

        Scanner sc = new Scanner(System.in);
        int count = 0;

        for(int i=0; i<11; i++){
            arr[i] = sc.nextLine();
        }

        for(int i=0; i<10; i++){
            if(arr[i].charAt(arr[i].length()-1) == arr[10].charAt(0)){
                System.out.println(arr[i]);
                count++;
            }    
        }
        if(count == 0){
            System.out.println("None");
        }

    }
}