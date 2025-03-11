**Instructions:**
- In this exercise, you need to translate some rules from the classic game Pac-Man into C++ functions.
- You have four rules to translate, all related to the game states.
- Don't worry about how the arguments are derived, just focus on combining the arguments to return the intended result.

**1. Define if Pac-Man eats a ghost**
- Define the can_eat_ghost function that takes two arguments (if Pac-Man has a power pellet active and if Pac-Man is touching a ghost) and returns a boolean value if Pac-Man is able to eat the ghost. The function should return true only if Pac-Man has a power pellet active and is touching a ghost.

**ex:**<br>
can_eat_ghost(false, true);<br>
// => false

**2. Define if Pac-Man scores**
- Define the scored function that takes two arguments (if Pac-Man is touching a power pellet and if Pac-Man is touching a dot) and returns a boolean value if Pac-Man scored. The function should return true if Pac-Man is touching a power pellet or a dot.

**ex:**<br>
scored(true, true);<br>
// => true

**3. Define if Pac-Man loses**
- Define the lost function that takes two arguments (if Pac-Man has a power pellet active and if Pac-Man is touching a ghost) and returns a boolean value if Pac-Man loses. The function should return true if Pac-Man is touching a ghost and does not have a power pellet active.

**ex:**<br>
lost(false, true);<br>
// => true

**4. Define if Pac-Man wins**
- Define the won function that takes three arguments (if Pac-Man has eaten all of the dots, if Pac-Man has a power pellet active, and if Pac-Man is touching a ghost) and returns a boolean value if Pac-Man wins. The function should return true if Pac-Man has eaten all of the dots and has not lost based on the arguments defined in part 3.

**ex:**<br>
won(false, true, false);<br>
// => false
