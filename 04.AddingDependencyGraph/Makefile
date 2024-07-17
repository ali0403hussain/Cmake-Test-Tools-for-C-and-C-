graph:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graph.png
prepare:
	rm -rf build
	mkdir build
	cmake -S . -B build/
	cmake --build build/
	./build/src/app/DependencyGraph