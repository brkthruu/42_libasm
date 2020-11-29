NAME = libasm.a
ASMSRCS = ft_strlen.s ft_strcmp.s
ASMOBJS = $(ASMSRCS:.s=.o)

%.o : %.s
	nasm -f macho64 $<

all: $(NAME)

$(NAME) : $(ASMOBJS)
	ar rc $(NAME) $(ASMOBJS)

clean: 
		rm -f $(ASMOBJS)

fclean: clean
		rm -f $(NAME)