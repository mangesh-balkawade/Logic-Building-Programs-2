import java.io.*;
class p7
{
	public static void main(String[] args) 
	{
		try
		{
			String[] s;
			File f = new File("E:/marvelous assignment C");
			s=f.list();
			for(int i=0;i<s.length;i++)
			{
			 System.out.println(s[i]);
		    }
		}
		catch(Exception e)
		{

		}
	}
}