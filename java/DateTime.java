import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter; 

public class DateTime{
    public static void main(String[] args) {
        LocalDateTime dateTime = LocalDateTime.now();
        DateTimeFormatter formateDateTime = DateTimeFormatter.ofPattern("HH:mm:ss E, MMM dd, yyyy");
        System.out.println(dateTime); 
        System.out.println(dateTime.format(formateDateTime));
    }
}