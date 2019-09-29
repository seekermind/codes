import java.util.*;
public class Fibonacci{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		//int n;
		//do {
		//	n = in.nextInt();
		//	if (n>40 || n<0){
		//		System.out.println("Enter a positive number less then 40.");
		//	}
		//} while (n>40 || n<0 );
		int n = in.nextInt();
		ArrayList<Long> fib = new ArrayList<Long>();
		for (int i=0;i<n;i++){
			if (i == 0 || i == 1){
				fib.add(1L);
			}
			else {
				fib.add(fib.get(i-1)+fib.get(i-2));
			}
		}
		System.out.println(fib);

	}
}
