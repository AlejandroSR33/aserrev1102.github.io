import java.util.ArrayList;
import java.util.List;

public class ListaAlumno{
    public static void main(String[] args) {
        Alumno alumno1 = new Alumno("Alejandro", "Serrano Revueltas", 19, 2);
        List <Alumno> lstalumnos = new ArrayList<Alumno>();
        lstalumnos.add(alumno1);
        System.out.println(lstalumnos);
    }
}
