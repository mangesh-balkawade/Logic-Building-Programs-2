import java.io.*;
import java.util.*;
class P6
{
	public static void main(String[] args) 
	{
		try
	{
		int i=0;
		Scanner sc = new Scanner(System.in);
		String first,last;
		System.out.println("enter first file");
		first=sc.nextLine();
		System.out.println("enter file where we want to copy our data");
		last=sc.nextLine();
		File f = new File(last);
		f.createNewFile();
		FileReader fr = new FileReader(first);
        while((i=(fr.read()))!=-1)
        {	   
			FileWriter fw = new FileWriter(last,true);
			fw.write((char) i); 
		    fw.close();
        }
    }
		catch(Exception e)
		{
           System.out.println("unable to write");
		}
    }
    
}