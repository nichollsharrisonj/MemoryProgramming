# MemoryProgramming
## Code
I decided to try to time accesses using a kind of "unrolled loop" which reads 16 randomly generated indices from a randomly generated list of predetermined size.
The random generation of lists and indices happens outside of the timing, so ideally the timing only measures the accesses.
I then wrote a python script to be able to more easily run my C code on arbitrary inputs and output the data into a file.
## Graphing
See `Average access time vs array size (linear scale).png` and `Average access time vs array size (log scale).png`

![Average access time vs array size (linear scale)](https://user-images.githubusercontent.com/66330102/159195264-24f333de-4c75-495f-aa06-7089b797f834.png)

![Average access time vs array size (log scale)](https://user-images.githubusercontent.com/66330102/159195276-c5ff575d-0b6a-4d63-b213-c6a56cb4da25.png)

## Analysis
I ran this on an M1 processor, which has 8 cores. These cores unfortunately have varying specs and cache sizes, and it wasn't possible to determine where the computation was being done.
While I was expecting to see a notable change at either 192KB or 128KB (based on the specs), this is rather unclear from the graphs. 

