# C programming

###### low-level programming

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width ="160" height="auto"/>

###### Makefiles

<img src="https://interrupt.memfault.com/img/gnu-make-guidelines/gnu-make.png" width ="160" height="auto"/>

## Compilation:
###### Use the following gcc flags
```
gcc -Wall -Wextra -Werror -pedantic example-main.c example.c -o example
```
Where `example-main.c` is the test file, `example.c` is your function declaration file and `example` is the name of the executable.


## Tools:

- ##### [`Betty Linter`](https://github.com/holbertonschool/Betty/wiki)

###### To run the Betty linter just with command `betty <filename>`:
- Go to the [`Betty`](https://github.com/holbertonschool/Betty) repository.
- Clone the repo to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`.
- `emacs` or `vi`  a new file called `betty`, and copy the script below:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the betty file into /bin/ directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
###### You can now type `betty <filename>` to run the Betty linter!
