class Sol
{
 int i1=1,i2=1,i3=5;
 char ch='a',ch1='A';

 public void Display1()
 {
   if(i1<=5)
   {
   	System.out.print("* ");
   	i1++;
   	Display1();
   }
 }

 public void Display2()
 {
   if(i2<=5)
   {
   	System.out.print(i2+" ");
   	i2++;
   	Display2();
   }
 }

 public void Display3()
 {
   if(i3>=1)
   {
     System.out.print(i3+" ");
   	i3--;
   	Display3();
   }
 }

 public void Display4()
 {
   if(ch<='e')
   {
   	 System.out.print(ch+" ");
   	 ch++;
   	 Display4();
   }
 }

 public void Display5()
 {
   if(ch1<='E')
   {
   	 System.out.print(ch1+" ");
   	 ch1++;
   	 Display5();
   }
 }
}

class Programs
{
	public static void main(String[] args) 
	{
	  Sol sobj = new Sol();
	  sobj.Display1();
	  System.out.println();
	  sobj.Display2();
	  System.out.println();
	  sobj.Display3();
	  System.out.println();
	  sobj.Display4();
	  System.out.println();
	  sobj.Display5();
	  System.out.println(); 


	}
}