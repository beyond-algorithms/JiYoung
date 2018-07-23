package Jiyoung;

import java.util.Date;

public class Form {

    //Simple SingleTon Code.
    static Form instance = null;
    static Form getInstance() {
        if (instance == null) {
            return instance = new Form();
        } else {
            return instance;
        }
    }

    private int elementsNumber;
    private String texts;
    private Date date;

    private Form() {
        elementsNumber = 1234;
        texts = "initialized ";
        date = new Date();
    }

    public String appendSomething(String str) {
        return texts + str;
    }

    void setTexts(String str) {
        texts = str;
    }
}
