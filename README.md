# MemoryProgramming
## Code
I decided to try to time accesses using a kind of "unrolled loop" which reads 16 randomly generated indices from a randomly generated list of predetermined size.
The random generation of lists and indices happens outside of the timing, so ideally the timing only measures the accesses.
I then wrote a python script to be able to more easily run my C code on arbitrary inputs and output the data into a file.
## Graphing
See `Average access time vs array size (linear scale).png` and `Average access time vs array size (log scale).png`
## Analysis
I ran this on an M1 processor, which has 8 cores. These cores unfortunately have varying specs and cache sizes, and it wasn't possible to determine where the computation was being done.
While I was expecting to see a notable change at either 192KB or 128KB (based on the specs), this is rather unclear from the graphs. 
