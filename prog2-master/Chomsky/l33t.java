import java.io.*;
import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String OUP = "";
        while(OUP != "Q") {
            OUP = sc.nextLine();
            for(int i = 0; i < OUP.length(); i++) {
                switch (OUP.charAt(i)) {
                    case 'e':
                        OUP = OUP.substring(0, i) + '3' + OUP.substring(i + 1); break;
                    case 'E':
                        OUP = OUP.substring(0, i) + '3' + OUP.substring(i + 1); break;
                    case 'a':
                        OUP = OUP.substring(0, i) + '4' + OUP.substring(i + 1); break;
                    case 'A':
                        OUP = OUP.substring(0, i) + '4' + OUP.substring(i + 1); break;
                    case 'o':
                        OUP = OUP.substring(0, i) + '0' + OUP.substring(i + 1); break;
                    case 'O':
                        OUP = OUP.substring(0, i) + '0' + OUP.substring(i + 1); break;
                }
            }
            System.out.println(OUP);
        }
        System.out.println("test.");
    }
}

