
#!/usr/bin/bash

if !command -v cargo &> /dev/null
then
  echo "Installing cargo"
  curl https://sh.rustup.rs -sSf | sh -s -- -y
fi

cd parser
cargo run ../Vulkan-Headers/registry/vk.xml > ../vkl.h
cd ..

mkdir -p build
cd build
cmake .. -GNinja
cmake --build .
./test.exe