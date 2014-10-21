 import java.util.Scanner;
 public class Derivada{
 	int xi;
 	double dy;

 	public static void main(String[] args) {
 		 	Derivada dv = new Derivada();
 		 	Scanner sc = new Scanner(System.in);
 		 	int salir=0;
	 		double[][] Matrix= new double[5][2];

			for (int i=0;i<5;i++) {
				for (int j=0;j<2;j++) {
					System.out.println("Ingresa el valor de ["+i+"]["+j+"]");
					Matrix[i][j]=sc.nextDouble();
				}
			}
			System.out.println("\nTu matriz es:\n");
			for (int i=0;i<5;i++) {
				for (int j=0;j<2;j++) {
					System.out.print("\t"+Matrix[i][j]);
				}
				System.out.println();
			}
			while(salir==0){
			System.out.print("Ingresa el lugar de xi: ");
			dv.xi=sc.nextInt();
			dv.dy=(Matrix[dv.xi+1][1]-Matrix[dv.xi-1][1])/Math.abs((2*(Matrix[dv.xi][0]-Matrix[dv.xi-1][0])));
			System.out.println("Tu derivada es "+dv.dy);
			System.out.println("FLAG!! "+Matrix[dv.xi+1][1]+" - "+Matrix[dv.xi][1]+"/ 2*"+Matrix[dv.xi][0]+"-"+Matrix[dv.xi-1][0]);
			
			dv.dy=(Matrix[dv.xi+1][1]-Matrix[dv.xi][1])/Math.abs(Matrix[dv.xi][0]-Matrix[dv.xi-1][0]);
			System.out.println("Tu derivada adelante es "+dv.dy);
			
			dv.dy=(Matrix[dv.xi][1]-Matrix[dv.xi-1][1])/Math.abs(Matrix[dv.xi][0]-Matrix[dv.xi-1][0]);
			System.out.println("Tu derivada atras es "+dv.dy);
			
			System.out.println("Deseas salir?");
			salir=sc.nextInt();
		}
 	}	 	
 		 	
 	
 	void df(){

 	}
 }
