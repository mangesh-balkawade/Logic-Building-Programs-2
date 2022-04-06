import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			if(j%2==0)
			{
			System.out.print('#'+" "); 
		    }
		    else
		    {
		    System.out.print('*'+" "); 
		    }
		}
		System.out.println("");
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