filename = 1-readLine
run.out: $(filename).o
	cc -o run.out $(filename).o
	./run.out
.PHONY: clean
clean:
	-rm -f run.out $(filename).o

