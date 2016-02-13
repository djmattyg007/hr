default:
	@echo "Usage:"
	@echo "    build - Create the hr binary"
	@# Path taken from https://en.wikipedia.org/wiki/Unix_filesystem
	@echo "    install - Create the hr binary and move it to /usr/local/bin"
	@echo "    clean - Delete any files created by make"
	
build:
	mkdir bin
	test -x /usr/bin/gcc && gcc -o bin/hr hr.c || "Please install gcc"
	@echo "Built successfully. Binary at `pwd`/bin/hc" 

install: build
	test ! -e /usr/local/bin/hr || (echo "File exists at /usr/local/bin/hr. Cannot continue" && false)
	mv bin/hr /usr/local/bin/hr && rmdir bin
	@echo "Installed successfuly"

clean:
	# We ignore whether or not the clean was successfull, as it's possible
	# the build is in a state we don't know. Therefore, delete everything 
	# and start again
	rm -r bin
