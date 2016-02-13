======
README
======

This is a port of LuRsT's hr to c, but with a different aim.

Being a developer, I've always liked the idea of hr. However, I wasn't
fussed about creating ASCII art. I just wanted a whole bunch of lines
to help differentiate blocks of text.

I came across HalosGhost's port of hr to C today and decided to modify
it to accept a number as the argument instead of various characters.
It's quick and dirty, but it works well for me.

You can find LuRsT's version of hr (a shell script) here:
https://github.com/LuRsT/hr
You can find HalosGhost's version of hr here:
https://github.com/HalosGhost/.bin/blob/master/src/hr.c

USAGE
-----

Running the binary once will print a line of hash characters across
the screen

    $ hr 
    ##################################################################

Running the binary with a numeric argument that number of lines of hash
characters across the screen

    $ hr 3 
    ##################################################################
    ##################################################################
    ##################################################################

This program is released into the public domain without any warranty.

