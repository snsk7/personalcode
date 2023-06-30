import java.util.Scanner;

public class Sixth{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number:");
		int a = sc.nextInt();
		if(a%2 != 0){
			System.out.println("odd");
		}else{
			System.out.println("even");
		}
		


	}
}