SRC = src/calc.c\
main.c

INC = -Iinc

PROJECT_NAME = calc.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME) -lm

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
