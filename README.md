This project allows the user to analyze a text document that is generated throughout the day at a grocery store. The text document includes a list of items purchased in chronological order. 
When the program starts, a menu is presented allowing the user to do one of three things: first, input an item name and see how many times that item was bought; second, see all items bought,
along with how many times each item was bought; third, see all items and the amount sold in the form of a histogram. The program will look back to the menu after an option and its output are 
displayed until the user chooses to exit.

I think the design of the interlocking class methods was well designed for this program. 

I could enhance my code by making the class property members private and giving them getters and setters. This would create more secure code by not letting a user of the class set the values
without any error checking.

I think the hardest part to figure out for this assignment was how to get the unique values from the input file. I came across sets, which I thought were only available in python, on stack overflow. 
this was the key to my code design.

I made this clode maintainable, readable, and adaptable by creating a class that can be instanciated in multiple programs, and by not duplicating code. By not duplicating code, a chance can be made in 
place, but show up anywhere this class is used.
