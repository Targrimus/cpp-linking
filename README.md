# cpp-linking
<h3>cpp dll file creation and linking</h3>

compile the files in order to get the dll file

<pre>
g++ -c -o point.o point.cpp -D POINT_EXPORTS

g++ -o point.dll point.o -s -shared 

g++ -o main.exe main.cpp -L. -lpoint
</pre>
