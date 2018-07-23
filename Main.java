package Jiyoung;

public class Main {
    public static void main(String[] args) {
        Form form1 = new Form();

        Other other = new Other(form1);
        other.doSomethingWithForm();

        Other2 other2 = new Other2();
        other2.doSomethingWithForm();
    }
}
