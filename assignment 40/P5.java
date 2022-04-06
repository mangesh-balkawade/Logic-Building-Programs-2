import Mangesh.PatternM;
class Show extends PatternM
{
	int i=0;
	int j=0;
	public void Display()
	{
		for (i=1;i<=irow;i++) 
		{
			for (j=1;j<=icol;j++) 
			{
				if(i==1||j==1||i==irow||j==icol||i==j)
				{
					System.out.print(j+" ");
				}
			    else
			    {
			    	System.out.print(" "+" ");
			    }
			}
		 System.out.println();	
		}
	}
}
class P5
{
	public static void main(String[] args)
	{
		Show sobj = new Show();
		sobj.Accept();
		sobj.Display();
	}
}