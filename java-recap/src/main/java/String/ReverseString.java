package String;

public class ReverseString {
    public static String reverseString(String value){
        // It proofs you care about corner case
        if(value == null){
            throw new IllegalArgumentException("Invalid String");
        }

        StringBuilder answer = new StringBuilder();
        for(int index = value.length()-1 ; index >= 0 ; index--){
            answer.append(value.charAt(index));
        }

        // This is important cause you cannot return stringbuilder to string
        return answer.toString();

    }

    public static void main(String[] args) {
        String original = "abc";
        String reversed = reverseString(original);
        System.out.println(reversed);
    }
}
