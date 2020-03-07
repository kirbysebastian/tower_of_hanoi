
if [ ! -d "build" ]
then
    echo "Build folder does not exist."
    mkdir build
else
    echo "Build directory already exists. Removing..."
    rm -rf build
    mkdir build
    echo "Successfully created new build directory."
fi

cd "build/"

if [ ! -f "../CMakeLists.txt" ]
then
    echo "Cannot find CMakeLists.txt, Aborting installation."
    exit 1
fi

cmake ..
make

