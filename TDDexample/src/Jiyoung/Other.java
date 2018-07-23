package Jiyoung;

public class Other {

    private Form form = null;

    Other(Form form) {
        this.form = form;
    }

    void doSomethingWithForm() {
        form.elementsNumber += 100;
        System.out.println(form.elementsNumber);
        System.out.println(form.appendSomething("hello"));
    }

}
