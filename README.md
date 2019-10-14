# minimal-pthreads-examples
These are minimal pthreads examples.

## Contents

`join.c` spawns a thread, joining it and blocking the main thread indefinitely

`arguments.c` spawns a thread, calling a function with multiple, varying arguments

`timer.c` spawns two threads, the function thread and a timer thread, joining the timer thread which blocks the main thread and exits the program after 10 seconds elapse

## Instructions

Clone the repository using the command `git clone https://github.com/regexthegod/minimal-pthreads-examples.git` and compile everything inside of it using `make`.
