import java.io.*;
class f
{
	public static void main(String[] args) 
	{
		int i=0;
		try
		{
		   
			FileWriter fr = new FileWriter("abc.txt",true);
			fr.write("balkawade"); 
		    fr.close();
		}
		catch(Exception e)
		{
           System.out.println("unable to write");
		}
	}
}