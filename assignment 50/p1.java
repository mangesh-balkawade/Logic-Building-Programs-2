import java.io.*;
class FileX
{
  public static void main(String[] args)
  {
  	try
  	{
	 	FileReader fr = new FileReader("abc.txt");
	  	int i=0;
	  	while((i=(fr.read()))!=-1)
	  	{
	  		System.out.print((char) i);
	  	}
   }
   catch(Exception e)
   {
     System.out.print("unable to read a file");
   }
  } 
}