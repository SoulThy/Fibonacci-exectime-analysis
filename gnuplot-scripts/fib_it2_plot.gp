set title "Clock Time vs. Num Instances"
set xlabel "NUM-INSTANCES"
set ylabel "CLOCK-TIME"
set datafile separator ","

plot "../cmake-build-debug/fib_iterativo2_data.csv" using 1:2 with lines title "Fibonacci Iterativo 2"
