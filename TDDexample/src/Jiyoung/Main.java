package Jiyoung;

import Jiyoung2.Other4;

public class Main {
    public static void main(String[] args) {
        Form form1 = Form.getInstance();
        System.out.println(form1.elementsNumber);

        Other other = new Other(form1);
        other.doSomethingWithForm();


        Other2 other2 = new Other2();
        other2.doSomethingWithForm();

        Other3 other3 = new Other3();

        Other4 other4 = new Other4();
    }
}
