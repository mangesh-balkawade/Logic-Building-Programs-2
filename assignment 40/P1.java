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
			for (j=1;j<=icol;j++ ) 
			{
				if(j==m)
				{
				System.out.print("#"+" ");
			    }
			    else
			    {
			    	System.out.print("*"+" ");
			    }
			}
		 System.out.println();	
		}
	}
}
class P1
{
	public static void main(String[] args)
	{
		Show sobj = new Show();
		sobj.Accept();
		sobj.Display();
	}
}