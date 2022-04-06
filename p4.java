import java.io.*;
class p4
{
	public static void main(String[] args) 
	{
	  	try
	  	{
	  		File f = new File("E:/marvelous assignment C/assignment 50/mangesh");
	  		if(f.exists())
	  		{
                 System.out.println("aleready exist");
	  		}
	  		else if(f.mkdir())
	  		{
	  			System.out.println("created succesfully");
	  		}
	  	}
	  	catch(Exception e)
	  	{
	  		System.out.println("unable to create dir");
	  	}
	}
}