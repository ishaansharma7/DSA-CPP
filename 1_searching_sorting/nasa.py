import time

for i in range(1,51):
    time.sleep(.2)
    print(f'Nasa Hacked {i*2}% [', '#'*i, '_'*(50-i),']', sep='')