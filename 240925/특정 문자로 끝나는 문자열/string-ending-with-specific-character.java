import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        String[] arr = new String[11];

        Scanner sc = new Scanner(System.in);
        boolean isOk = false;

        for(int i=0; i<11; i++){
            arr[i] = sc.nextLine();
        }

        ArrayList<String> list = new ArrayList<>();

        for(int i=0; i<10; i++){
            if(arr[i].charAt(arr[i].length()-1) == arr[10].charAt(0)){
                isOk = true;
                list.add(arr[i]);
            }    
        }

        if(isOk == false){
            System.out.print("None");
            return;
        }


        for(int i=0; i<list.size(); i++){

            System.out.println(list.get(i));

        }
    }
}