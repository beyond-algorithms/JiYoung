package Jiyoung;

public class Other2 {
    private Form form = Form.getInstance();

    void doSomethingWithForm() {
        System.out.println(form.appendSomething("wow"));
    }
}
