import java.util.Scanner;
public class DerivacionNumerica{
    
    double x[]=new double[10];
    double y[]=new double[10];
    double punto;
    
    public void Derivacion(){
        
        System.out.println("\n\n---------------------------------------------");
        System.out.println("*******   Metodo Derivacion Numerica   ******");
        System.out.println("---------------------------------------------");
        DerivacionNumerica D=new DerivacionNumerica();
        Scanner teclado= new Scanner(System.in);
        System.out.print("\nIngrese el tamano de tu arreglo: \n");
        int n=teclado.nextInt();
        
        for(int i=0; i<n; i++){
            System.out.println("Ingrese el dato x["+i+"]: ");
            D.x[i]=teclado.nextDouble();
            System.out.println("Ingrese el dato y["+i+"]: ");
            D.y[i]=teclado.nextDouble();
       
        }
        System.out.println("\tIngrese el punto a derivar: ");
        D.punto=teclado.nextDouble();
       System.out.println("\nLa diferencia centrada es "+D.Centrada(D, n)+"");
       System.out.println("La diferencia Adelante es "+D.Adelante(D, n)+"");
       System.out.println("La diferencia Atras es "+D.Atras(D, n)+"");
    }
    
        public double Centrada(DerivacionNumerica D, int n){
        double der=0;
        for(int i=0; i<n; i++){
            if(D.x[i]==D.punto){
                der=(D.y[i+1]-D.y[i-1])/(2*(D.x[1]-D.x[0]));
            }   
        }
        return der;
        }
            public double Adelante(DerivacionNumerica D, int n){
        double der=0;
        for(int i=0; i<n; i++){
            if(D.x[i]==D.punto){
                der=(D.y[i+1]-D.y[i])/(D.x[1]-D.x[0]);
            }   
        }
        return der;
        }
        public double Atras(DerivacionNumerica D, int n){
        double der=0;
        for(int i=0; i<n; i++){
            if(D.x[i]==D.punto){
                der=(D.y[i]-D.y[i-1])/(D.x[1]-D.x[0]);
            }   
        }
        return der;
        }
    
    
}
