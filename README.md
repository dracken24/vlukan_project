# vlukan_project

# Pre-Installation for Linux

1. Vulkan SDK:
https://vulkan.lunarg.com/doc/sdk/1.3.296.0/linux/getting_started_ubuntu.html
Ubuntu 24.04:
-------------
wget -qO- https://packages.lunarg.com/lunarg-signing-key-pub.asc | sudo tee /etc/apt/trusted.gpg.d/lunarg.asc
sudo wget -qO /etc/apt/sources.list.d/lunarg-vulkan-noble.list http://packages.lunarg.com/vulkan/lunarg-vulkan-noble.list
sudo apt update
sudo apt install vulkan-sdk

2. GLFW:
https://www.glfw.org/

3. GLM:
https://glm.g-truc.net/0.9.9/
