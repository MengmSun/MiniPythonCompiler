CCC = gcc
LEX = flex
YACC = bison

LEXDEBUG = -d
YACCDEBUG  = -d

OBJS = minipy-lab.tab.o	lex.yy.o 
run:	$(OBJS)
	$(CCC) -o run $(OBJS) 
minipy-lab.tab.c:	minipy-lab.y minipy-lab.tab.c jiegou.h hanshu.h
	
	$(YACC) $(YACCDEBUG) minipy-lab.y
minipy-lab.tab.o:	minipy-lab.tab.c
	
	$(CCC) -c minipy-lab.tab.c

lex.yy.c:	minipy-lab.l minipy-lab.tab.o
	$(LEX) $(LEXDEBUG) minipy-lab.l
lex.yy.o:	lex.yy.c
	$(CCC) -c lex.yy.c 
clean:
	
	rm -f run 
	rm -f lex.yy.c lex.yy.o
	rm -f minipy-lab.tab.*
