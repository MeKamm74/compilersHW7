# put input/output files in a folder called input and output respectively
# name your parser "mipl"
# profit 
for f in sample_input/*; do
	./mipl $f > python_output/${f##*/}.py
	python python_output/${f##*/}.py > final_output/${f##*/}.out
	echo "Testing $f"
	diff -w -B final_output/${f##*/}.out expected_output/${f##*/}.out
done