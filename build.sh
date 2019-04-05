file_to_compile=$1
echo "Attempting to compile $1.cpp file"
g++ -o $1 $1.cpp
echo "Complie successful. Running executable"
./$1

