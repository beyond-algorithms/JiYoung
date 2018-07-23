package main;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class StringCalculator implements Calculator {

    @Override
    public int add(String str) {
        if (isBlank(str)) return 0;

        return addAll(toInts(toSplited(removeBlank(str))));
    }

    private int addAll(int[] values) {
        int result = 0;

        for (int i : values) {
            result += i;
        }

        return result;
    }

    private int[] toInts(String[] splited) {
        int[] result = new int[splited.length];

        for (int i = 0; i < result.length; i++) {
            result[i] = toPositive(splited[i]);
        }

        return result;
    }

    private int toPositive(String s) {
        int result = Integer.parseInt(s);

        if (result < 0) {
            throw new RuntimeException("Illegal Number");
        }

        return result;
    }

    private boolean isBlank(String str) {
        return str == null || str.isEmpty();
    }

    private String[] toSplited(String str) {
        Matcher m = Pattern.compile("//(.+)\n(.*)").matcher(str);

        if (m.find()) {
            String customDelimiter = m.group(1);
            return m.group(2).split(customDelimiter);
        }

        return str.split("[,:]");
    }

    private String removeBlank(String str) {
        return str.replace(" ", "");
    }
}
