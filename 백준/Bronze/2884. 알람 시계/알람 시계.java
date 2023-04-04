import java.util.Scanner;
import static java.lang.Math.abs;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int hour, minute;
        int temp;
        hour = scanner.nextInt();
        minute = scanner.nextInt();

        if(minute-45<0) {
            temp=abs(minute-45);
            temp=60-temp;
            if(hour == 0){
                hour = 23;
                System.out.println(hour+" "+temp);
            }
            else{
                hour--;
                System.out.println(hour+" "+temp);
            }
        }
        else{
            minute-=45;
            System.out.println(hour+" "+minute);
        }
    }
}