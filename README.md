# Console colour 
Console colour is a simple header file to add colour to your console output.

## Usage
To use this header file, simply include it in your project and use the following syntax:
```cpp
//define normal colours
ascii_colours::normal normal;
//print out red text
std::cout << normal.red << "Hello World!" << normal.reset << std::endl;
```

## Colours
The following colours are available:
- Red
- Green
- Yellow
- Blue
- Magenta
- Cyan
- White
- Black

There is also a reset colour, which resets the colour back to the default.

## Other functions
There are also a few other functions available:

### bold
```cpp
//define bold colours
ascii_colours::bold bold;
//print out red text
std::cout << bold.red << "Hello World!" << bold.reset << std::endl;
```

### underline
```cpp
//define underlined colours
ascii_colours::underline underline;
//print out red text
std::cout << underline.red << "Hello World!" << underline.reset << std::endl;
```

### italic
```cpp
//define italic colours
ascii_colours::italic italic;
//print out red text
std::cout << italic.red << "Hello World!" << italic.reset << std::endl;
```

### bold_italic
```cpp
//define bold italic colours
ascii_colours::bold_italic bold_italic;
//print out red text
std::cout << bold_italic.red << "Hello World!" << bold_italic.reset << std::endl;
```

### bold_underline
```cpp
//define bold underlined colours
ascii_colours::bold_underline bold_underline;
//print out red text
std::cout << bold_underline.red << "Hello World!" << bold_underline.reset << std::endl;
```

### bold_italic_underline
```cpp
//define bold italic underlined colours
ascii_colours::bold_italic_underline bold_italic_underline;
//print out red text
std::cout << bold_italic_underline.red << "Hello World!" << bold_italic_underline.reset << std::endl;
```

### italic_underline
```cpp
//define italic underlined colours
ascii_colours::italic_underline italic_underline;
//print out red text
std::cout << italic_underline.red << "Hello World!" << italic_underline.reset << std::endl;
```

## Licence

This project is licensed under the GPL-3.0 License - see the [LICENCE](LICENCE) file for details