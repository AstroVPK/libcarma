import numpy as np
import rand

if __name__ == '__main__':
	import argparse as argparse
	parser = argparse.ArgumentParser()
	parser.add_argument('-n', '--numRand', type = int, default = 10, help = r'Number of hardware random numbers to generate...')
	args = parser.parse_args()

	A = np.zeros(args.numRand, dtype = 'uint32')
	success = rand.rdrand(A)
	for i in xrange(args.numRand):
		print '%s'%(str(A[i]))