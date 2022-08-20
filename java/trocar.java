import java.util.Scanner;

public class trocar {
    
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        int a, b, aux;

        System.out.println("Digite um valor: ");
        a = scan.nextInt();

        System.out.println("Digite outro valor: ");
        b = scan.nextInt();

        aux = a;
        a = b;
        b = aux; 

        System.out.println(a +"\n"+ b);
    }
}
