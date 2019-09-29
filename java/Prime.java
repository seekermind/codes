public class Prime{
	public static void main(String[] args){
		long n;
		int test = 0, count = 1, i, j;
		for (i=3; count <= 1500;){
			for (j=2; j<i; j++){
				if(i%j == 0){
					test = 1;
					break;
				}
			}
			if (test == 0){
				count += 1;
				System.out.println("prime: " + i + "count: " + count);
			}
			i += 2;
		}
	}
}
