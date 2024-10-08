#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <list>
# include <vector>
# include <deque>
# include <algorithm>
# include <array>


class PMergeMe
{
	public:
		PMergeMe();
		PMergeMe( PMergeMe const & src );
		~PMergeMe();

		PMergeMe &		operator=( PMergeMe const & rhs );

		void			processArguments(int argCount, char **argList);
		void			initializeContainers();
		
		void			mergeInsertionSort();
		void			groupAndSortPairs();
		void			mergeSortPairs();

		void   			mergeSortPairsRecursive(size_t left, size_t right);
		void 			mergeSort(size_t left, size_t middle, size_t right);

		void			printInitialIntSequence();
		void			printSortedPairs();
		void			printRecursiveSortedPairs();
		void			printVector();

		bool			isArraySizeOdd();
		
	private:
		std::clock_t 			_start;
		std::vector<double>		_myVector;    // sortedIntSequence1
		std::deque<double>		_myDeque;    // sortedIntSequence2;  
		std::list<double>		_initialIntSequence;
		// size_t					_myVectorSortTime;
		// size_t					_myDequeSortTime;
};

double  stringToDouble(const std::string& s);
bool 	isValidNumberFormat (const std::string& arg);
bool 	isBelowIntMax(const std::string& arg);



#endif /* ******************************************************** PMERGEME_H */