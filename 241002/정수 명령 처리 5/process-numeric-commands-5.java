import java.util.*;
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int num = Integer.parseInt(sc.nextLine());

        ArrayList<String> list = new ArrayList<>();

        for(int i=0; i< num; i++){
            String[] str = sc.nextLine().split(" ");

            if( str[0].equals("push_back") ){
                list.add(str[1]);
            } else if( str[0].equals("get") ){
                System.out.println(list.get(Integer.parseInt(str[1])-1));
            } else if( str[0].equals("size") ){
                System.out.println(list.size());
            } else if ( str[0].equals("pop_back") ) {
                list.remove(list.size()-1);
            }
        }
    }
}