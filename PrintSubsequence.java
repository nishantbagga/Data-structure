import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
    String s;
    Scanner obj = new Scanner(System.in);
    s=obj.nextLine();
    ArrayList<String>s1=new ArrayList<String>();
    s1 =printSS(s);
    String st;
    for(int p=s1.size()-1;p>=0;p--)
    {
        System.out.println(s1.get(p));
    }
    }

    public static ArrayList<String> printSS(String str) {
        
        if(str.length()==0)
        {
            ArrayList<String>s1=new ArrayList<>();
            s1.add("");
            return s1;
        }
        
         ArrayList<String>sres=new ArrayList<>();
          ArrayList<String>rres=new ArrayList<>();
        
        sres = printSS(str.substring(1));
        
        for(String s :sres)
        {
            rres.add(""+s);
        }
        for(String s :sres)
        {
            rres.add(str.charAt(0)+s);
        }
        return rres;
    }

}
