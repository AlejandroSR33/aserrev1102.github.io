package com.iesvdc.acceso;

import java.util.Random;

public class Personas {
    private String name;
    private String apellidos;
    private String DNI;
    private String email;
    private String direccionYCiudad;

    public String getName() {
        return name;
    }

    public String getApellidos() {
        return apellidos;
    }

    public String getDNI() {
        return DNI;
    }

    public String getEmail() {
        return email;
    }
    
    public String getDireccionYCiudad() {
        return direccionYCiudad;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    public void setDNI(String dNI) {
        DNI = dNI;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setDireccionYCiudad(String direccionYCiudad) {
        this.direccionYCiudad = direccionYCiudad;
    }

    public Personas(String name, String apellidos, String dNI, String email, String direccionYCiudad) {
        this.name = name;
        this.apellidos = apellidos;
        DNI = dNI;
        this.email = email;
        this.direccionYCiudad = direccionYCiudad;
    }

    @Override
    public String toString() {
        return String.format("Nombre: %s, Apellidos: %s, DNI: %S, Email: %s, Direccion y ciudad: %s",name, apellidos, DNI, email, direccionYCiudad);
    }

    public static int devolverNumeroDNIAlt(){
        Random generadorAleatorios = new Random();
        int numeroaleatorio = 9999999+generadorAleatorios.nextInt(100000000);
        return numeroaleatorio;
    }

    public static String letraDelDni(){
        int numeroaleatorio = devolverNumeroDNIAlt();
        int resto = numeroaleatorio%23;
        String tabla[] = {"T","R","W","A","G","M","Y","F","P","D","X","B","N","J","Z","S","Q","V","H","L","C","K","E"};
        String letra = null;
        
        for (int i = 0; i <= tabla.length; i++) {
            letra = tabla[resto];
        }

        return letra;
    }

    public static String devolverDniCompleto(){
        int numeroaleatorio = devolverNumeroDNIAlt();
        String letra = letraDelDni();
        return numeroaleatorio+letra;
    }

    public static String[] nombreAleatorio(int name){
        String[] nombresAleatorios = new String[name];
        String[] nombres = { "Andrea", "David", "Baldomero", "Balduino", "Baldwin", "Baltasar", "Barry", "Bartolo",
				"Bartolomé", "Baruc", "Baruj", "Candelaria", "Cándida", "Canela", "Caridad", "Carina", "Carisa",
				"Caritina", "Carlota", "Baltazar"};
        String[] apellidos = { "Gomez", "Guerrero", "Cardenas", "Cardiel", "Cardona", "Cardoso", "Cariaga", "Carillo",
				"Carion", "Castiyo", "Castorena", "Castro", "Grande", "Grangenal", "Grano", "Grasia", "Griego",
				"Grigalva" };
        for (int i = 0; i < name; i++) {
            nombresAleatorios[i] = nombres[(int) (Math.floor(Math.random() * ((nombres.length - 1) - 0 + 1) + 0))] + " " 
            + apellidos[(int) (Math.floor(Math.random() * ((apellidos.length - 1) - 0 + 1) + 0))];
        }
        return nombresAleatorios;
    }
}
