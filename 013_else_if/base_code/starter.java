import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		int x = rand.nextInt(1000) + 1;
		int y = sc.nextInt();
		if(x==y)
		{
			System.out.println("ok");
		}
		else if (x<y)
		{
			System.out.println("lower");
		}
		else if (x>y)
		{
			System.out.println("higher");
		}
	}
}

