import glob

#this creates the build env
env = Environment()

env.ParseConfig('sdl2-config --cflags')
env.ParseConfig('sdl2-config --libs')

#get all the files
sources = glob.glob('src/*.cpp')

#add additional compiler flags
env.Append(CCFLAGS = ['-g'])

#add any additional libraries here:
#env.Append(LIBS = [])

env.Program(target = 'NoSecGB', source = sources)
