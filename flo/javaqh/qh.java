package javaqh;
public class qh{
    
    public int factorial(int n) {
        if(n==1||n==0){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }

    }


    public double pitagoras(int a, int b){
        System.out.println("El teorema de pitagoras dice que el resultado es: ");
        double c;
        double H;
        c = Math.pow(a,2) + Math.pow(b,2);
        H = Math.pow(c,2);
        System.out.print(H);
        return H;
        }

    public static void Revolver( int arreglo[], int n){
        Random r = new Random();
        for (int i = n-1; i > 0; i--) {
        int j = r.nextInt(i+1);
        int temp = arreglo[i];
        arreglo[i] = arreglo[j];
        arreglo[j] = temp;
        }
        System.out.println(Arrays.toString(arreglo));
        }

    public static void FactoresPrimos(int n)
    {
       while (n%2==0){
         System.out.print(2 + " ");
          n /= 2;
       }
       for (int i = 3; i <= Math.sqrt( n ); i+= 2){
         while (n%i == 0){
           System.out.print(i + " ");
            n /= i;
          }
        }
       if (n > 2){
        System.out.print( n );
       }
    }

    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        int temp = 0;
        for (int i = 0; i < n; i++) {
              for (int j = 1; j < (n - i); j++) {
                    if (arr[j - 1] > arr[j]){
                        temp = arr[j - 1];
                        arr[j - 1] = arr[j];
                        arr[j] = temp;
                    }
                }
        }
    }
 
    public static void suma_binomio(int a, int b){
        System.out.println("esto imprime la suma del cuadrado de binomio de " + a + " y " + b);
        double x;
        x = Math.pow(a,2) + 2*a*b + Math.pow(b, 2);
        System.out.print(x);
    }


    public int fibonacci(int n) {
    if ((n == 0) || (n == 1))
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
       
}