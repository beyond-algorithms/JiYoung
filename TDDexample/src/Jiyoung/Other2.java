package Jiyoung;

public class Other2 {
    private Form form = Form.getInstance();

    void doSomethingWithForm() {
        form.elementsNumber += 1000;
        System.out.println(form.elementsNumber);
        System.out.println(form.appendSomething("wow"));
    }
}
