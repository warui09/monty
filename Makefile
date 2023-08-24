
PROGRAM = monty.run
FILES.c = *.c
FILES.h = monty.h

CC = gcc
WFLAG1 = -Wall
WFLAG2 = -Wextra
WFLAG3 = -Werror
WFLAG4 = -pedantic
WFLAG7 = -g
WFLAGS = ${WFLAG1} ${WFLAG2} ${WFLAG3} ${WFLAG4} ${WFLAG7}

all:
	${CC} ${WFLAGS} ${FILES.c} -o ${PROGRAM}