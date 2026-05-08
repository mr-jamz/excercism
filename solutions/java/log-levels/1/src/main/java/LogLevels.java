public class LogLevels {
    
    public static String message(String logLine) {
        // split the string using the colon, trim and output the second half of message
        return logLine.split(":")[1].trim();
    }

    public static String logLevel(String logLine) {
        // split the string using colon, set string to lowercase, remove brackets
        String a = logLine.split(":")[0].toLowerCase();
        return a.replaceAll("[\\[\\]]", "");
    }

    public static String reformat(String logLine) {
        // use previous methods to reformat
        return message(logLine) + " (" + logLevel(logLine) + ")";
    }
}