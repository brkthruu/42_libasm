all:
		nasm -f macho64 hello_world.s
		ld -macosx_version_min 10.7.0 -o hello_world hello_world.o
		./hello_world

clean: 
		rm -f hello_world.o

fclean:
		rm -f hello_world.o
		rm -f hello_world