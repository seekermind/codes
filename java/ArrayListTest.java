import java.util.ArrayList;
import java.util.Collections;
public class ArrayListTest{
	public static void main(String[] args){
		ArrayList<Integer> a = new ArrayList<Integer>();
		for (int i=0; i<10; i++){
			a.add((int)(Math.round(Math.random()*10)));
		}
		Collections.sort(a);
		System.out.println(a);
	}
}
