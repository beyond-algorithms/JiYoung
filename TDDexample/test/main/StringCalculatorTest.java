package main;

import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class StringCalculatorTest {
    StringCalculator m;

    @Before
    public void setUp() {
        m = new StringCalculator();
    }

    @Test
    public void nullOrEmpty() {
        assertEquals(0, m.add(""));
        assertEquals(0, m.add(null));
    }

    @Test
    public void one() {
        assertEquals(1, m.add("1"));
    }

    @Test
    public void two() {
        assertEquals(3, m.add("1,2"));
        assertEquals(5, m.add("2, 3"));
    }

    @Test
    public void three() {
        assertEquals(5, m.add("1,3,1"));
        assertEquals(10, m.add("3 , 1, 6"));
    }

    @Test
    public void otherDelimiter() {
        assertEquals(3, m.add("1:2"));
        assertEquals(6, m.add("1, 2: 3"));
    }

    @Test
    public void customDelimiter() {
        assertEquals(6, m.add("//;-\n1;-2;-3"));
    }

    @Test(expected = RuntimeException.class)
    public void noNegative() {
        assertEquals(1, m.add("1,-2,3,4"));
    }

}
