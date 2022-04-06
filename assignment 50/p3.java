import java.io.*;
import java.util.*;

class p3
{
	public static void main(String[] args) 
	{
		try{
		boolean bret=false;
	   Scanner sc = new Scanner(System.in);
	   System.out.println("enter file name");
       String s = sc.nextLine();
       File f = new File(s);
       if(f.exists())
       {
       	System.out.println("file aleready exist path is \n "+f.getCanonicalPath());
       }
       else
       {
       	f.createNewFile();
       }
       }
       catch(Exception e)
       {
         System.out.println("unable to Process");
       }
       
	}
}