import java.io.*;
import java.nio.file.*;
class p10
{
  public static void main(String[] args)
  {
  	try
  	{
      File f = new File("hsj");
      boolean bret=f.isFile();
      if(bret==true)
      {
        System.out.println("file is regular");
      }
      else
      {
        System.out.println("file is not regular");
      }
      

   }
   catch(Exception e)
   {
     System.out.print("unable to read a file");
   }
  } 
}