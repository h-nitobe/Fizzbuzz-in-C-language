//
//		FizzBuzz.java
//
//				2022/03/06 Written by H.Nitobe
//
public class FizzBuzz {
	public static void main(String[] args)
	{		
		fizzBuzz(35);
	}

    public static void fizzBuzz(int end) {
    	int		i;
    	
    	for (i = 1; i <= end; i++) {
    		if (i % 3 != 0) {
    			if (i % 5 != 0) {
    				System.out.print(i);
    			}
    		} else {
    			System.out.print("Fizz");
    		}
    		if (i % 5 == 0) {
    			System.out.print("Buzz");
    		}
    		System.out.print(" ");
    	}
    	System.out.print("\n");
    }
}
