import java.util.*;

class Sol
{
  private int icnt=0,i=0,ilarge=0,icnt1=0,ilen=0,ismall=9,irev=0;
  public int CountSpace(String arr)
  {
    char str[]=arr.toCharArray();
  	if(i<str.length) 
  	{
  		if(str[i]==' ')
  		{
  			icnt++;
  		}
  		i++;
  		String ptr = new String(str);
  		CountSpace(ptr);
  	}
  	return icnt;
  }

  public  int LargestDig(int ino)
  {
  	 int idigit=0;
  	if(ino!=0)
  	{
  		idigit=ino%10;
        if(idigit>ilarge)
        {
        	ilarge=idigit;
        }
        ino=ino/10;
        LargestDig(ino);
  	}
  	return ilarge;
  }
  
  public  int CountSmallChar(String arr)
  {
  	char str[]=arr.toCharArray();
     if(ilen<str.length)
  	 {
  		if((str[ilen]>='a')&&(str[ilen]<='z'))
  		{
  			icnt1++;
  		}
  		ilen++;
  		String ptr = new String(str);
  		CountSmallChar(ptr);
  	}
  	return icnt1;
  }

  public  int SmallestDig(int ino)
  {
    int idigit=0;
  	if(ino!=0)
  	{
  		idigit=ino%10;
  		if(idigit<ismall)
  		{
  			ismall=idigit;
  		}
  		ino=ino/10;
  		SmallestDig(ino);
  	}
  	return ismall;
  }

  public  int RevNo(int ino)
  {
  int idigit=0;
  	if(ino!=0)
  	{
  		idigit=ino%10;
  		irev=irev*10+idigit;
  		ino=ino/10;
  		RevNo(ino);
  	}
  	return irev;
  }

}

class Program
{
  public static void main(String[] args) 
  {
  	int iret=0;

  	Scanner sc = new Scanner(System.in);

    System .out .println("enter String");
  	String s = sc.nextLine();

  	System .out .println("enter no");
    int ino = sc.nextInt();
    
    Sol sobj = new Sol();

    iret=sobj.CountSpace(s);
    System.out.println("No of white spaces in String is "+iret);

    iret=sobj.LargestDig(ino);
    System.out.println("LargestDig from no is "+iret);

     iret=sobj.CountSmallChar(s);
     System.out.println("No of small Character are "+iret);

     iret=sobj.SmallestDig(ino);
    System.out.println("Smallest digit from no is "+iret);

    iret=sobj.RevNo(ino);
    System.out.println("Reverso  no is "+iret);

    System .out .println("enter String");
    String c = sc.nextLine();
  	String ss = sc.nextLine();

  	System .out .println("enter no");
    int ino1 = sc.nextInt();
    
    Sol obj = new Sol();

    iret=obj.CountSpace(ss);
    System.out.println("No of white spaces in String is "+iret);

    iret=obj.LargestDig(ino1);
    System.out.println("LargestDig from no is "+iret);

     iret=obj.CountSmallChar(ss);
     System.out.println("No of small Character are "+iret);

     iret=obj.SmallestDig(ino1);
    System.out.println("Smallest digit from no is "+iret);

    iret=obj.RevNo(ino1);
    System.out.println("Reverso  no is "+iret);

  }
}