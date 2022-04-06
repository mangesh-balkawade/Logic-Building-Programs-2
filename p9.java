import java.io.*;
import java.nio.file.*;
class p9
{
  public static void main(String[] args)
  {
  	try
  	{
      Path path= Paths.get("p9.java");
     long i= Files.size(path);
     System.out.println(i);

   }
   catch(Exception e)
   {
     System.out.print("unable to read a file");
   }
  } 
}