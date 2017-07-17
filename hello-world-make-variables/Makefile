OUTPUT_FILE=hello
INSTALL_DIR=bin

.PHONY: all
all: $(OUTPUT_FILE)

$(OUTPUT_FILE): hello.cpp
	g++ -o hello hello.cpp

.PHONY: install
install:
	make
	mkdir -p $(INSTALL_DIR)
	cp -p $(OUTPUT_FILE) $(INSTALL_DIR)

.PHONY: clean
clean:
	rm -f $(OUTPUT_FILE)
	rm -rf $(INSTALL_DIR)