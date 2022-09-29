public class MinYMaximo {
    private static int MIN_VALUE;
    private static int MAX_VALUE;

    public static int numerosPares(int MIN_VALUE, int MAX_VALUE){
        int contador = MIN_VALUE;
        for(int i = MIN_VALUE;i<MAX_VALUE;++i){
            System.out.println(i);
            contador = ++i;
        }
        return contador;
    }
}
