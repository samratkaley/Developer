class Ifelse_04
{
	public static void main(String args[])
	{
		int a = 10;
		int b = 20;
		int c= 0;

		a+=b;
		System.out.println("Value of a + b is :"+a);

		a-=b;
		System.out.println("Vale of a - b is :"+a);

		a*=b;
		System.out.println("Value of a * b is :"+a);

		b/=a;
		System.out.println("Value of b / a is :"+b);


		if(a==b)
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");
		}
	}
}
