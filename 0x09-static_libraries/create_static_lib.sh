#!/bin/bash
#include "main.h"
gcc -c *.c
ar rs liball.a *.o
