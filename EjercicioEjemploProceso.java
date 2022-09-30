class SumaRecur {
    public int SumaR(int a) {
        if (a == 0)
            return 0;
        return (a + SumaR(a - 1));
    }

    public static void main(String[] args) {
        try {
            System.out.println("El valor del sumario es " + new SumaRecur().SumaR(4));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}