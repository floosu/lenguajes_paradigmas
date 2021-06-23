package javaqh;

import jdk.javadoc.internal.doclets.toolkit.taglets.SystemPropertyTaglet;

public class main {
    public static void main(String[] args) {
        qh qh = new qh();
        int []arr= {12,4,6};
        int n = arr[2];
        int b=arr[0];
        
        qh.factorial(n);
        qh.pitagoras(n, b);
        //qh.Revolver(arr, n);
        qh.FactoresPrimos(n);
        qh.bubbleSort(arr);
        qh.suma_binomio(n, b);
        qh.fibonacci(n);
        System.out.println("Tengo un arreglo y lo voy a ordenar");
        qh.bubbleSort(arr);
        System.out.println("ahora voy a sacar el fibonacci con el tercer elemento de mi arreglo");
        qh.fibonacci(n);
        System.out.println("tambien puedo sacar los factores primos de este 3er elem");
        qh.FactoresPrimos(n);
        System.out.println("veamos el factorial de este elemento 3 del arreglo");
        qh.factorial(n);
        System.out.println("podemos ver la formula pitagoras con elementos de el arreglo");
        double H= qh.pitagoras(n, b);

        System.out.println("o podemos hacer un suma de binomio");
        qh.suma_binomio(n, b);
        
    }

}
