import java.io.*;
class p8
{
  public static void main(String[] args)
  {
  	try
  	{
	 	FileReader fr = new FileReader("abc.txt");
	  	int i=0,j=0;
	  	while((i=(fr.read()))!=-1)
	  	{
	  		j++;
	  	}
      System.out.print(j);
   }
   catch(Exception e)
   {
     System.out.print("unable to read a file");
   }
  } 
}