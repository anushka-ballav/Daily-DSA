public class Main {
    public static void main(String[] args) {
        String input = "Hello";
        String output = repeatFirstTwoChars(input);
        System.out.println(output);
    }

    public static String repeatFirstTwoChars(String inputStr) {
        String firstTwoChars = inputStr.substring(0, 2);
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < inputStr.length(); i++) {
            result.append(firstTwoChars);
        }
        return result.toString();
    }
}