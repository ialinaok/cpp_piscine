/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:18:10 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/23 18:22:27 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137) {

	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	if (this != &rhs)
		AForm::operator=(rhs);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	try {

		this->checkExecuteRequirements(executor);
	}
	catch (FormNotSignedException& e) {

		std::cout << RED << "Cannot execute " << YELL << this->getName() << RED << ": form not signed" << std::endl;
		return ;
	}
	catch (GradeTooLowException& ee) {

		std::cout << RED << "Cannot execute " << YELL << this->getName() << RED << ": executor's grade too low" << std::endl;
		return ;
	}
	std::string		outfile_name = this->getTarget() + "_shrubbery";
	std::ofstream	ofs(outfile_name.c_str());

	ofs << "                                                  @    %@                     " << std::endl;
	ofs << "                                           &    @        #@                   " << std::endl;
	ofs << "                                                &       ,                     " << std::endl;
	ofs << "                                         .           %&#  @                   " << std::endl;
	ofs << "                                           *            /.                    " << std::endl;
	ofs << "                @       @              @          &  @@@@    @@.  ,           " << std::endl;
	ofs << "               &   @     ,(,@@@@          @(       .@  @         @@           " << std::endl;
	ofs << "                  , *  @/@       /@  @         &   @      (@*@    @           " << std::endl;
	ofs << "               @  .     @         @         ,    @*&     #        @           " << std::endl;
	ofs << "                 @ %    *        @   @       &#   @&     @       #@           " << std::endl;
	ofs << "                     @/ @            &  @        @@         @@@/              " << std::endl;
	ofs << "          @@@@@@&  (     (@       *     @       @@  ,@#     .@                " << std::endl;
	ofs << "     @@              @@    /@@      @@   @(   @@@                             " << std::endl;
	ofs << "   @               .   .@#   @@@   #/   @   @@ @      @          #     @      " << std::endl;
	ofs << "  @              #@@%     .% .@@@     .@(@@@             @*                   " << std::endl;
	ofs << "  @         @   %        @  @ @@@    /@@@                    .@.      @       " << std::endl;
	ofs << "  @          @     @#     @@  @@@ @@@@              ,(  @@#                   " << std::endl;
	ofs << "    @       @      @        @ @@@@@@          @                               " << std::endl;
	ofs << "                     @#     @@@@@%@@@@@@@,             @.(   @                " << std::endl;
	ofs << "                           @@@@@@@@@@@@@@@@@@@@@@           &                 " << std::endl;
	ofs << "                         @@@@@@*          .@    %@@@                          " << std::endl;
	ofs << "                       %@@@@@/                 %   @.@@          @&  @@       " << std::endl;
	ofs << "                      @@@@@@@                       ## .@%      #      @@     " << std::endl;
	ofs << "                     @@@@@@@                         @    @@@          @%     " << std::endl;
	ofs << "                    *@@@@@@@                  @*.@, *        @@@@@&&@@@       " << std::endl;
	ofs << "                    @@@@@@@@                 @( ,@(              (@        ,/ " << std::endl;
	ofs << "                   ,@@@@@@@@                                                  " << std::endl;
	ofs << "                   @@@@@@@@@                                                  " << std::endl;
	ofs << "                   @@@@@@@@@@                                                 " << std::endl;
	ofs << "                   @@@@@@@@@@/                                                " << std::endl;
	ofs << "                   @@@@@@@@@@@.                                               " << std::endl;

	ofs.close();
}