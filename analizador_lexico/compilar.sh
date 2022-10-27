#!/bin/sh

lex compilador.l
gcc -ll lex.yy.c -o compilador