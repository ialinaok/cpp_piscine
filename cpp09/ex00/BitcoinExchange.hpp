/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:09:41 by ialinaok          #+#    #+#             */
/*   Updated: 2023/05/05 16:53:15 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
#include <map>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

    // check argc ✅

    // send data.csv into bitcoinexchange constructor for parsing (method) into container
    	// check file open, handle exceptions ✅

    // getline 
        // skip first line ✅
        // check each line for:
            // valid date ✅
                // greater than btc inauguration (year greater than, day greater month) ✅
                // YYYY-MM-DD dash seperated format > if valid store in date_string ✅
                // pipe symbol ✅
                // value > 0 && < 1000 > if valid store in value_string ✅
    
            // valid date and value passed to bitcoinexchange class member lookup member function

class	BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange(std::string & filename);
		~BitcoinExchange();

		BitcoinExchange &	operator=(BitcoinExchange const & rhs);

		void	performExchange(std::string & filename);
		bool	checkDate(std::string & dateStr);

	private:
		std::map<std::string, double>	_db;
		std::map<std::string, double>	_input;
};

// *** COLORS ***//
# define BLANK "\e[0m"
# define BLA "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BLU "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

#endif
