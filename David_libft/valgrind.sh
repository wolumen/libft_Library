gcc -Wall -g -o Valgrind_tests main.c libft.a
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./Valgrind_tests

# --leak-check=full: "each individual leak will be shown in detail"
# --show-leak-kinds=all: Show all of "definite, indirect, possible, reachable" leak kinds in the "full" report.
# --tool=memcheck  is set by default 
# compile with the -g flag for debug info!