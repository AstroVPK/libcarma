#ifndef MCMC_HPP
#define MCMC_HPP

//#include <string>
//#include "Kalman.hpp"

using namespace std;

namespace kali {

class EnsembleSampler {
private:
	int numDims, numWalkers, numSteps, numThreads;
	unsigned int ZSeed, BernoulliSeed, WalkerSeed;
	double A;//, newLnLike, oldLnLike, pAccept;
	//VSLStreamStatePtr ZStream, WalkerStream, *BernoulliStream;
	double *Chain, *Zs, *LnPrior, *LnLike;
	//double *currSubSetOld, *compSubSetOld, *currSubSetNew;
	//double **compWalkerOldPos, **currWalkerOldPos, **currWalkerNewPos;
	int *WalkerChoice, *MoveYesNo;
	double (*Func)(double* x, void* FuncArgs, double &LnPriorVal, double &LnLikelihoodVal);
	void* FuncArgs;
public:
	EnsembleSampler(int ndims, int nwalkers, int nsteps, int nthreads, double a, double (*func)(double* x, void* funcArgs, double &LnPriorVal, double &LnLikelihoodVal), void* funcArgs, unsigned int zSeed, unsigned int bernoulliSeed, unsigned int walkerSeed);
	~EnsembleSampler();
	void runMCMC(double* initPos);
	void getChain(double *ChainPtr);
	void getChainVals(double *LnPriorPtr, double *LnLikePtr);
	};

} // namespace kali

#endif
