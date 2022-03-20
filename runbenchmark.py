import os


generate_call = lambda size,iters: './Benchmark %i %i'%(size,iters)

f = open("outputs.txt","w")
f.close()

def runtrial(max_size,runs_per_size):
    for i in range(1,10000):
        size = i*10 + 100000
        os.system('%s >> outputs.txt'%generate_call(size,runs_per_size))
runtrial(300000,1000)

