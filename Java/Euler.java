import java.util.Scanner;

public class Euler{
	double x0,y0,y1,h,b;

	public Euler(){
		Scanner sc = new Scanner(System.in);
		
			System.out.println("Dame b");
			this.b=sc.nextDouble();
			System.out.println("Dame h");
			this.h=sc.nextDouble();
			System.out.println("Dame x0");
			this.x0=sc.nextDouble();
			System.out.println("Dame y0");
			this.y0=sc.nextDouble();
	}
	public static void main(String[] args) {
		Euler e = new Euler();
		System.out.println("x,y");
		System.out.println(e.x0+" , "+e.y0);

		for (double i=e.x0;i<e.b;i=i+e.h ) {
			e.y1=e.y0+e.h*f(e.x0,e.y0);
			e.y0=e.y1;
			e.x0=e.x0+e.h;
			System.out.println(e.x0+e.h+" , "+e.y1);
			
		}
	}
	public static double f(double x, double y){
			return y-Math.pow(x,2);
	}
}