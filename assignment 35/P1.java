import java.util.*;
class Mangesh
{
	public String StringConcatNo(String str,String ptr,int ino)
	{ 
	    int isize=(str.length()+ino);
		 char arr[]=str.toCharArray();
		 char brr[]=ptr.toCharArray();
		 char crr[]=new char[isize];
		 int i=0,j=0;
		// System.out.println(arr.length);
		 for (i=0;i<arr.length;i++)
		 {
		 	crr[i]=arr[i];
		 }
		 for(i=arr.length,j=0;i<(isize);i++,j++)
		 {
		 	crr[i]=brr[j];
		 }
		 String s = new String(crr);
		 return s;
	}
	
}
class P1
{
	public static void main(String[] args) 
	{	
		String r;
	Scanner sc = new Scanner(System.in);
	System.out.println("enter string ");
	String s= sc.nextLine();
	System.out.println("enter string ");
	String m= sc.nextLine();
	System.out.println("enter no");
	int ino= sc.nextInt();
	Mangesh mobj= new Mangesh();
	r=mobj.StringConcatNo(s,m,ino);
	System.out.println(r);
    }
}

