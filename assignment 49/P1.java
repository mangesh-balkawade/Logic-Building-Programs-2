import java.util.*;

class Sol
{
 private int icnt=1,isum=0,ifact=1,ipro=1;

 public void Display(int ino)
 {
 	if(ino!=0)
 	{
 		System.out.print(ino+"*"+" ");
 		ino--;
 		Display(ino);
 	}
 	System.out.println("");
 }

 public int SumDig(int ino)
 {
   if(ino!=0)
   {
   	isum=isum+(ino%10);
   	ino=ino/10;
   	SumDig(ino);
   }
   return isum;
 }

 public int CountChar(String str)
 {
 	char arr[]=str.toCharArray();
 	if(icnt<arr.length)
 	{
 		icnt++;
 		String p = new String(arr);
 		CountChar(p); 
 	}
  return icnt;
 }

 public int Fact(int ino)
 {
 	if(ino!=0)
 	{
 		ifact=ifact*ino;
 		ino--;
 		Fact(ino);
 	}
 	return ifact;
 }

public int ProDig(int ino)
{
	if(ino!=0)
	{
		ipro=ipro*(ino%10);
		ino=ino/10;
		ProDig(ino);
	}
	return ipro;
}

}

class P1
{
	public static void main(String[] args)
    {
    	int iret=0;
		Scanner sc = new Scanner(System.in);
        
        System.out.println("enter String");
		String s = sc.nextLine();
		System.out.println("enter ino1");
		int ino1 = sc.nextInt();
		System.out.println("enter ino2");
		int ino2 = sc.nextInt();

		Sol sobj= new Sol();

		//sobj.Display(ino1);
        
       // iret=sobj.SumDig(ino2);
        //System.out.println("sum of digit is "+iret);

        iret=sobj.CountChar(s);
        System.out.println("no of character in string is "+iret);

       /* iret=sobj.Fact(ino1);
        System.out.println("fact of no is "+iret);

        iret=sobj.ProDig(ino2);
        System.out.println("product of digit is "+iret);*/

	}
}