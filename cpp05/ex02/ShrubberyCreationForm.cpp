/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:18:10 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/26 12:57:31 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137) {

	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (this->checkExecuteRequirements(executor) == false)
		return ;
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