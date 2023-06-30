import java.util.Scanner;

public class Fifth{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number:");
		int a = sc.nextInt();
		System.out.println("Enter number:");
		int b = sc.nextInt();
		System.out.println("Enter number:");
		int c = sc.nextInt();
		if(a>b && a>c){
		System.out.println("A is greatest");
		}else if(b>c && b>a){
			System.out.println("B is greatest");
		}else{
			System.out.println("C is greatest");
		}



	}
}