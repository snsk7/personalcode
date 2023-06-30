import java.util.Scanner;

public class Seven{
	public static final double PI = 3.14159;
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter radius:");
		double radius = sc.nextDouble();
		System.out.println("Enter height:");
		double height = sc.nextDouble();
		double volume = PI * radius * radius * height;
		System.out.println("The area of circle is: "+volume);


	}
}