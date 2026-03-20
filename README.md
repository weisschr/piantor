# piantor
QMK firmware for the Piantor Pro from Beekeeb

This is meant to be copied in place as part of QMK compile.  Creating an entire QMK repo for a single keyboard is very tedious, including the syncing with your branch or fork.

This represents an evolution from a Ferris Sweep.

Edit:  I have started using the QMK wsl instance in windows using symlinks to pull in my layout.  This allows me to update QMK and not have to deal with all the additional overhead of supporting a fork.  I have a small shell script that reestablished the links when they break.  Mixed repos work, but I have run into issues with this approach previously where I had to delete my modules and readd them later.  I am sure this approach can be scripted too.  Just a working opinion since Symlinks seems lighter.
