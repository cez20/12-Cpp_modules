#include "PMergeMe.hpp"
#define N_ELEM_IN_PAIR 2
#define MAX_ARRAY_SIZE 4096
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//TODO: Je vais devoir initialiser mes variables initiales avec du contenu 
PMergeMe::PMergeMe(): _unpairedElement(-1)
{
}

PMergeMe::PMergeMe( const PMergeMe & src )
{
	*this = src; 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PMergeMe::~PMergeMe()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

//TODO: We need to modify this according to variables created 
PMergeMe &				PMergeMe::operator=( PMergeMe const & rhs )
{
	if ( this != &rhs )
	{
		this->_myVector = rhs._myVector;
		this->_myDeque = rhs._myDeque;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


void PMergeMe::processArguments(int argCount, char **argList){
	
	int i = 1;

	while (i < argCount){
		std::string arg = argList[i];
		if(!isValidNumberFormat(arg) || !isBelowIntMax(arg))
			throw std::invalid_argument("Invalid argument. Either not a number, a negative number or higher than INT_MAX");
		else{
			_start = std::clock(); // Starting the clock to calculate process runnning time. 
			_initialSequence.push_back(stringToDouble(arg));
		}
		i++;
	}
}

void	PMergeMe::initializeContainers() {

	_myVector.assign(_initialSequence.begin(), _initialSequence.end());
	_myDeque.assign(_initialSequence.begin(), _initialSequence.end());
}


void PMergeMe::mergeInsertionSort() {

	if (_initialSequence.size() < 2)
		return;
	if (_initialSequence.size() % 2 == 1){
		_unpairedElement = _initialSequence.back();
		_initialSequence.pop_back();
	}
	sortPairs();
	// createSmallerLargerArrays();
	// mergeSortRecursive(_largerElements);
}

void	PMergeMe::sortPairs() {

	for (size_t i = 0; i < _myVector.size(); i += 2){
		if(((i + 1) < _myVector.size()) && _myVector[i] > _myVector[i + 1])
			std::swap(_myVector[i], _myVector[i + 1]);
	}
}

void	PMergeMe::createSmallerLargerArrays() {
	
	for (size_t i = 0; i < _myVector.size(); i += 2){
		_smallerElements.push_back(_myVector[i]);
		_largerElements.push_back(_myVector[i + 1]);
	}
}

template <typename T>
void   PMergeMe::mergeSortRecursive(T & container) {

	const size_t n = container.size();
	if (n < 2)
		return;
	const size_t middle = n / 2;
	std::vector<double> leftSubArray(middle);
	std::vector<double> rightSubArray(n - middle);

	for (size_t i = 0; i < middle; ++i){
		leftSubArray[i] = container[i];
	}
	for (size_t i = 0; i < n - 1; ++i){
		rightSubArray[i] = container[middle + i];
	}
	mergeSortRecursive(leftSubArray);
	mergeSortRecursive(rightSubArray);
	mergeSort(container, leftSubArray, rightSubArray);
}

template <typename T>
void	PMergeMe::mergeSort(T & container, std::vector<double> leftSubArray, std::vector<double> rightSubArray){

	const size_t leftSubArrayLength = leftSubArray.size();
	const size_t rightSubArrayLength = rightSubArray.size();

	size_t i = 0;
	size_t j = 0;
	size_t k = 0;

	while(i < leftSubArrayLength && j < rightSubArrayLength){
		if(leftSubArray[i] <= rightSubArray[j]){
			container[k++] = leftSubArray[i++];
		} else {
			container[k++] = rightSubArray[j++];
		}
	}
	while(i < leftSubArrayLength)
		container[k++] = leftSubArray[i++];
	while(j < rightSubArrayLength)
		container[k++] = rightSubArray[j++];
}

void 	PMergeMe::printInitialIntSequence(){

	std::list<double>::iterator it;

	std::cout << "Before Sorting: ";
	for(it = _initialSequence.begin(); it != _initialSequence.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

bool	PMergeMe::isArraySizeOdd(){

	if (_myVector.size() % 2 != 0)
		return true;
	return false;
}

double  stringToDouble(const std::string& s){
    char *end;
    
    double num = std::strtod(s.c_str(), &end);
    if (*end != '\0')
        throw std::invalid_argument("Invalid number format");
    else
        return num; 
}

bool isValidNumberFormat (const std::string& arg){  
    if (arg.find_first_not_of("0123456789") != std::string::npos) {
        return false;
    }
    return true;;
}

bool isBelowIntMax(const std::string& arg){
    double num = stringToDouble(arg);
    if (num > INT_MAX)
        return false;
    return true;
}

/* ************************************************************************** */