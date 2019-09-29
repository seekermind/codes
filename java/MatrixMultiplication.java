import java.util.Scanner;
import java.util.Arrays;

public class MatrixMultiplication {
	public static void main(String[] args){

		Scanner scanner = new Scanner(System.in);


		double[][][] A = new double[2][3][3];
		double[][] AB = new double[3][3];
		double element;

		for (int x=0; x<2; x++){
			for (int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					System.out.print("Enter element of row: " + (i+1) + " and col: " + (j+1) + " of matrix " + x + " : ");
					element = scanner.nextDouble();

					A[x][i][j] = element;
				}
			}
		}
		for (int i=0; i<3; i++){
			for (int j=0; j<3; j++){
				for (int k=0; k<3; k++){
					
					AB[i][j] += (A[0][i][k] * A[1][k][j]); 
					
				}
				
			}
		}

		for (double[] i : AB){
			System.out.println(Arrays.toString(i));
		}
		
	}
}
