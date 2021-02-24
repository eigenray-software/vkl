all: install_cargo
	@git submodule update --init --recursive
	@cd parser && cargo run > ../vkl.h

install_cargo:
ifeq ($(shell which cargo),)
	curl https://sh.rustup.rs -sSf | sh -s -- -y
else
	@echo cargo is installed
endif

test: all
	clang++ ./test.cpp -I$(VULKAN_SDK)/Include
	./a.exe