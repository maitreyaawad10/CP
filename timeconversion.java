import java.util.*;
import java.io.*;

public class solution
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = sobj.nextLine();

        String s[] = str.split(":");
        String s1 = s[0];

        int hour = Integer.parseInt(s[0]);
        
        String min = s[1];
        String sec_period = s[2];
        String sec = s[2].substring(0, sec_period.length() - 2);
        String period = s[2].substring(sec_period.length() - 2, sec_period.length());

        if(period.equals("PM")){
            if(hour == 12){
                System.out.println(hour + ":" + s[1] + ":" + sec);
                return;
            }
            else{
                hour = hour+12;
            }
        }
        
        
        else if(period.equals("AM")){
            if(hour == 12){
                String new_hour = Integer.toString(hour);
                new_hour = "00";
                System.out.println(new_hour + ":" + s[1] + ":" + sec);
                return;
            }
            else{
                System.out.println(s1 + ":" + s[1] + ":" + sec);
                return;
            }
            
        }
        
        System.out.println(hour + ":" + s[1] + ":" + sec);
    }
}