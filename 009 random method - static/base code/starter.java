import java.util.Random;

class starter {
	public static void main(String args[]) {
		Random rand = new Random();
		
		
		int x = rand.nextInt(10);
		System.out.println(x);
		
		int y = rand.nextInt(100) + 1;
		System.out.println(y);
		
		double z = rand.nextDouble() + 2.5;
		System.out.println(z);
		
		double w = rand.nextInt(575) + 14 + rand.nextDouble();
		System.out.println(w);
		
		
		
		
	}
}
