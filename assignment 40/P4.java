import Mangesh.PatternM;
class Show extends PatternM
{
	int i=0;
	int j=0;
	public void Display()
	{
		int m=icol;
		for (i=1;i<=irow;i++,m--) 
		{
			for (j=1;j<=icol;j++) 
			{
				if(i==1||j==1||i==irow||j==icol||j==m)
				{
					System.out.print("*"+" ");
				}
			    else if(j<m)
			    {
			    	System.out.print("#"+" ");
			    }
			    else
			    {
			    	System.out.print("@"+" ");
			    }
			}
		 System.out.println();	
		}
	}
}
class P4
{
	public static void main(String[] args)
	{
		Show sobj = new Show();
		sobj.Accept();
		sobj.Display();
	}
}