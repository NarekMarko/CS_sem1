import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your name");
		String name = sc.nextLine();
		System.out.println("What is your age");
		int age = sc.nextInt();
		System.out.println("What is your Birthmonth");
		int month = sc.nextInt();
		System.out.println("What is your birthday day");
		int day = sc.nextInt();
		System.out.println("What is your birth year");
		int year = sc.nextInt();
		System.out.println("What is a buck fifty");
		double money = sc.nextDouble();
		System.out.print("Your name is " +name+ " You are " +age +" You were born on " + month + "/" +day + "/" + year + " a buck fifty is " + money);
	}
}
