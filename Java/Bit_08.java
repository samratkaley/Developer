
class Sam_003{
public static void main(String args[]){

	int a = 60; // 0011 1100
	int b = 13; // 0000 1101 
	int c = 0;

	c = a&b; // [Multiply]
	System.out.println(c); // [0000 1100]

	c = a|b; // [Adding]
	System.out.println(c); // [0011 1101]

	c = a^b; // [EX-OR (1+1=0)]
	System.out.println(c); // [0011 0001]

	c = ~a; //[1100 0011]
	System.out.println(c);

	c = a<<1; // [0111 1000]
	System.out.println(c);

	c = a>>1; // [1 1110]
	System.out.println(c);

	c = a>>>1; // [0001 1110]
	System.out.println(c); 
}
}
