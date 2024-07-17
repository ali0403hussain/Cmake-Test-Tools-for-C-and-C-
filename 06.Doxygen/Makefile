prepare:
	cd docs &&  rm -rf html && doxygen
	cd ..
	rm -rf build
	mkdir build
	cmake -S . -B build/
	cmake --build build/
	./build/src/app/ProjectDoxygenIntegration