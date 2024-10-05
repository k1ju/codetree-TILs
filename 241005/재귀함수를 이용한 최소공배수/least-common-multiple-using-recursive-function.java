import java.util.*;
public class Main {

    public static int lcm(int a, int b){
        int num = 0;
        for(int i=1; i<=Math.min(a,b); i++ ){
            if(a%i==0 && b%i==0){
                num = i;
            }
        }
        return (a*b)/num;
    }

    public static int findLcm(int arr[], int index) {

        if(index == 1){
            return arr[0];
        }

        return lcm(arr[index-1], findLcm(arr, index-1));
    }


    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = Integer.parseInt(sc.next());
        int num = 0;
        int[] arr = new int[a]; 

        for(int i=0; i<a; i++){
            int n = Integer.parseInt(sc.next());
            arr[i] = n;
        }

        System.out.println(findLcm(arr, a));


    }
}