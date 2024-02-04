desctop qt 6.6.1 gcc 64 bit no compiler set in kit

Install Qt 6 on Ubuntu 22.04 LTS Linux: 
https://www.youtube.com/watch?v=sjApF6qnyUI


Step 1: $ gcc --version
(check gcc Is installed or not) if Not installed then
Step 2: $ sudo apt install build-essential
Step 3: $ sudo apt-get install manpages-dev
Step 4: $ gcc --version
( Installation Complete)
Step 5: Restart Your Qt Application


error: cannot find -lGL: No such file or directory
sudo apt install libfl-dev


cannot find -lGL: No such file or directory:
sudo apt-get install libgl1-mesa-dev









#Build CMake from source
## https://www.youtube.com/watch?v=oWpomXg9yj0

### Ubuntu version
lsb_release -a

### Update the ubuntu
sudo apt-get update
sudo apt-get upgrade

### Install dependencies
sudo apt-get install make build-essential libclang-dev ninja-build gcc git bison \
python3 gperf pkg-config libfontconfig1-dev libfreetype6-dev libx11-dev libx11-xcb-dev \
libxext-dev libxfixes-dev libxi-dev libxrender-dev libxcb1-dev libxcb-glx0-dev \
libxcb-keysyms1-dev libxcb-image0-dev libxcb-shm0-dev libxcb-icccm4-dev libxcb-sync-dev \
libxcb-xfixes0-dev libxcb-shape0-dev libxcb-randr0-dev libxcb-render-util0-dev \
libxcb-util-dev libxcb-xinerama0-dev libxcb-xkb-dev libxkbcommon-dev libxkbcommon-x11-dev \
libatspi2.0-dev libgl1-mesa-dev libglu1-mesa-dev freeglut3-dev

### Compilation of CMake is easy:
sudo apt install libssl-dev
git clone https://github.com/Kitware/CMake.git
cd CMake
./bootstrap && make && sudo make install
cmake --version




### Build the qt6 for host
mkdir ~/qt6HostBuild
wget https://download.qt.io/official_releases/qt/6.6/6.6.0/submodules/qtbase-everywhere-src-6.6.0.zip
tar xvf qtbase-everywhere-src-6.*

cd qtbase-everywhere-src-6.*

cmake -GNinja -DCMAKE_BUILD_TYPE=RelWithDebInfo -DINPUT_opengl=es2 -DQT_BUILD_EXAMPLES=OFF -DQT_BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX=$HOME/qt6Host


/home/user/Qt/6.6.1/gcc_64/bin/qt-cmake
cmake --build .
file HelloQt6 
./HelloQt6
