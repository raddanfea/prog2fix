public class Main {

    public static void main(String[] args) {
        System.out.println("Teszt kezdése.");
        gagyi2();
        gagyi1();
    }
    public static void gagyi1(){
        Integer x = -129;
        Integer t = -129;
        System.out.println (x);
        System.out.println (t);

        System.out.println("Vár: Teszt második fázis vége.");
        while (x <= t && x >= t && t != x);
        System.out.println("Teszt második fázis vége.");
    }
    public static void gagyi2(){
        System.out.println("Teszt 1. fázis.");
        Integer x = -128;
        Integer t = -128;
        System.out.println (x);
        System.out.println (t);
        System.out.println("Vár: Teszt első fázis vége");
        while (x <= t && x >= t && t != x);
        System.out.println("Teszt első fázis vége");
    }
}
