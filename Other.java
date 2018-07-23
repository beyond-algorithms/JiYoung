package Jiyoung;

public class Other {

    private Form form = null;

    Other(Form form) {
        this.form = form;
    }

    void doSomethingWithForm() {
        System.out.println(form.appendSomething("hello"));
    }

}
