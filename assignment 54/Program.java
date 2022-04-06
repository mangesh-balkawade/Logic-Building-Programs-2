class Solution
{
	public void toLower(char arr[])
	{
		for (int i=0;i<arr.length;i++ ) 
		{
			if(arr[i]>='A'&&arr[i]<='Z')
			{
				int a = arr[i]+32;
				char c = (char)a;
				arr[i]=c; 
			}
			System.out.print(arr[i]+" ");
		}
       System.out.println();
	}

	public void toUpper(char arr[])
	{
		for (int i=0;i<arr.length;i++ ) 
		{
			if(arr[i]>='a'&&arr[i]<='z')
			{
				int a = arr[i]-32;
				char c = (char)a;
				arr[i]=c; 
			}
			System.out.print(arr[i]+" ");
		}
       System.out.println();
	}

	public int Occurence(char arr[],char c)
	{
		int icnt=0;
		if(c>='a'&&c<='z')
		{
		    int a = c-32;
			char cd = (char)a;
			  c=cd; 
		}
		for (int i=0;i<arr.length;i++ ) 
		{
			if(arr[i]>='a'&&arr[i]<='z')
			{
				int a = arr[i]-32;
				char cf = (char)a;
				arr[i]=cf; 
			}
			if(arr[i]==c)
				icnt++;
		}
		return icnt;
	}

	public int CapSmallDiff(char arr[])
	{
		int icap=0,ismall=0;
		for (int i=0;i<arr.length ;i++) 
		{
			if(arr[i]>='A'&&arr[i]<='Z')
				icap++;
			if(arr[i]>='a'&&arr[i]<='z')
				ismall++;
		}
		int idiff=icap-ismall;
		if(idiff<0)
			idiff=-idiff;
		return idiff;
	}

	public void Display(int arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			for ( int j=1;j<=arr[i];j++) 
			{
				System.out.print('*'+" ");
			}
			System.out.println();
		}
	}
}

class main
{
	public static void main(String[] args) 
	{
		Solution s = new Solution();
		char arr1[]={'A','c','D','s','r','F','S'};
		char arr2[]={'A','c','D','s','r','F','S'};
		char arr3[]={'A','c','s','D','s','r','F','S','s','s','s'};
		char arr4[]={'A','c','D','s','r','F','S'};
		int arr5[]={3,7,9,10,27,3,3,4,2,6,7};
		s.toLower(arr1);
		s.toUpper(arr2);
		int iret=s.Occurence(arr3,'s');
		System.out.println("Occurence of element is "+iret);
		 iret=s.CapSmallDiff(arr4);
		System.out.println("Diff between small and cap is "+iret);
		s.Display(arr5);
	}
}