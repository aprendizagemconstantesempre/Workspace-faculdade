module org.example.primeiroprojetojavafx {
    requires javafx.controls;
    requires javafx.fxml;


    opens org.example.primeiroprojetojavafx to javafx.fxml;
    exports org.example.primeiroprojetojavafx;
}