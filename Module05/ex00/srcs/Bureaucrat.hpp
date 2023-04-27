#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string	const	_name;
		unsigned int		_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string		getName() const;
		unsigned int	getGrade() const;
		void			increaseGrade();
		void			decreaseGrade();

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()  //(voir Explication plus haut)
				{
					return ("Grade is too HIGH");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()  //(voir Explication plus haut)
				{
					return ("Grade is too LOW");
				}
		};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */