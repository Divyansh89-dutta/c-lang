CHEAT CODES -
Modes:
   r - Read;
   w - Write;
   a - Append;
   r+ - Replace;
   w+ - Update;
   a+ - Append and update.
   // Function to read from file
   function readFile(file, mode) {
    var fs = require('fs');
    if (mode == 'r'){
        return fs.readFileSync(file).toString();
        } else {
            throw new Error("Invalid mode for reading the file.");
            }
   };
            // Function to read from file:-
            fgets - Read all string from file.
            getline - Read specific line from file.
            fputs- Write whole string in the file with newline.
            putc - Read a single character from the file without newline.
            fgetc - Read a sigle character from the file.
            fputc - Write a single character in the flie.
