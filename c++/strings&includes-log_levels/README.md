**Instructions:**<br>
- In this exercise, you'll be processing lines from a logged report. Each log line is a string formatted as follows: "[<LEVEL>]: <MESSAGE>".
- There are three different log levels:

1. INFO
2. WARNING
3. ERROR

- You have three tasks, each of which will take a log line and ask you to do something with it.

**1. Get the message from a log line**
- Implement the log_line::message method to return a log line's message:

**ex:**<br>
log_line::message("[ERROR]: Invalid operation")<br>
// => "Invalid operation"

**2. Get the log level from a log line**
- Implement the log_line::log_level method to return a log line's log level, which should be returned in uppercase:

**ex:**<br>
log_line::log_level("[ERROR]: Invalid operation")<br>
// => "ERROR"

**3. Reformat a log line**
- Implement the log_line::reformat method that reformats the log line, putting the message first and the log level after it in parentheses:

**ex:**<br>
log_line::reformat("[INFO]: Operation completed")<br>
// => "Operation completed (INFO)"
