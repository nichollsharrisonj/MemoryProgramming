import matplotlib.pyplot as plt 
    

with open('combined.csv') as f:
    measurements = [i[:-1].split(',') for i in f.readlines()]
    x = [int(i[0])/1000 for i in measurements]
    y = [i[1] for i in measurements]
    plt.scatter(x,y)
    plt.xlabel('size (KB)')
    plt.ylabel('Access time (ns)')
    plt.title('Time vs size')
    plt.savefig('benchmark.png')
