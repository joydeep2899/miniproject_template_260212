PROJ_NAME=complex_result

SRC= src/calculator_complex.c
TEST=test/test_calculator_complex.c\
unity/unity.c

INC=-Iunity\
-Iinc


$(PROJ_NAME): 
	gcc main.c $(SRC) $(INC) -o $(PROJ_NAME).out

run: $(PROJ_NAME)
	./$(PROJ_NAME).out
test:$(SRC) $(TEST)
	gcc $(SRC) $(TEST) $(INC) -o $(PROJ_NAME).out	
	./$(PROJ_NAME).out
clean: 
	rm *.out