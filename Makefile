all:
	cd parser && cargo run > ../vkl.h

test: all
	clang++ ./test.cpp -I$(VULKAN_SDK)/Include
	./a.exe