#!/bin/bash

g++ -c pessoa.cpp
g++ -c aluno.cpp
g++ -c main.cpp
g++ -c disciplina.cpp
g++ -c professor.cpp
g++ pessoa.o main.o aluno.o disciplina.o professor.o
./a.out

