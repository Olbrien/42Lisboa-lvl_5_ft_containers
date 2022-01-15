#include "../includes/main.hpp"

void	header_text(std::string str) {
	if (!str.compare("vector")) {
		std::cout << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
		std::cout << "				Vector				" << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
	}
	else if (!str.compare("map")) {
		std::cout << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
		std::cout << "				Map				" << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
	}
	else if (!str.compare("stack")) {
		std::cout << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
		std::cout << "				Stack				" << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
	}
}

int		vector_argument(std::string argument) {
	if (!argument.compare("v_mt_vt")) { header_text("vector"); testVector::member_types__value_type();	return 0; }
	else if (!argument.compare("v_mt_at")) { header_text("vector"); testVector::member_types__allocator_type(); return 0; }
	else if (!argument.compare("v_mt_r")) {	header_text("vector"); testVector::member_types__reference(); return 0; }
	else if (!argument.compare("v_mt_cr")) { header_text("vector"); testVector::member_types__const_reference(); return 0;	}
	else if (!argument.compare("v_mt_p")) { header_text("vector"); testVector::member_types__pointer(); return 0; }
	else if (!argument.compare("v_mt_cp")) { header_text("vector"); testVector::member_types__const_pointer();	return 0; }
	else if (!argument.compare("v_mt_dt")) { header_text("vector"); testVector::member_types__difference_type(); return 0;	}
	else if (!argument.compare("v_mt_st")) { header_text("vector"); testVector::member_types__size_type(); return 0; }

	if (!argument.compare("v_mt_i_d")) { header_text("vector"); testVector::member_types__iterator__default_member_functions(); return 0; }
	//else if (!argument.compare("v_mt_i_r")) { header_text("vector"); testVector::member_types__iterator__relational_operators(); return 0; }
	//else if (!argument.compare("v_mt_i_dr")) { header_text("vector"); testVector::member_types__iterator__dereferences(); return 0; }
	//else if (!argument.compare("v_mt_i_id")) { header_text("vector"); testVector::member_types__iterator__increment_decrement_operators(); return 0; }
	//else if (!argument.compare("v_mt_i_ar")) { header_text("vector"); testVector::member_types__iterator__arithmetic_operators(); return 0; }
	//else if (!argument.compare("v_mt_i_as")) { header_text("vector"); testVector::member_types__iterator__assignment_operators(); return 0; }

	return 1;
}

void	welcome_message() {
	std::cout << std::endl;
	std::cout << "*********************************************************************"
				<< std::endl;
	if (FT == 0)
		std::cout << "*		Welcome to the std::container tester!		    *" << std::endl;
	else if (FT == 1)
		std::cout << "*		Welcome to the ft::container tester!		    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*  To use the tester you have to run the binary with one of the     *"
				<< std::endl;
	std::cout << "*  following arguments.						    *"
				<< std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*  Vectors:							    *" << std::endl;
	std::cout << "*      Member Types:						    *" << std::endl;
	std::cout << "*          value_type					 v_mt_vt    *" << std::endl;
	std::cout << "*          allocator_type				 v_mt_at    *" << std::endl;
	std::cout << "*          reference					 v_mt_r     *" << std::endl;
	std::cout << "*          const_reference				 v_mt_cr    *" << std::endl;
	std::cout << "*          pointer					 v_mt_p     *" << std::endl;
	std::cout << "*          const_pointer				 v_mt_cp    *" << std::endl;
	std::cout << "*          difference_type				 v_mt_dt    *" << std::endl;
	std::cout << "*          size_type					 v_mt_st    *" << std::endl;
	std::cout << "*          iterator:						    *" << std::endl;
	std::cout << "*              Default Member Functions			 v_mt_i_d   *" << std::endl;
	std::cout << "*              Relational Operators			 v_mt_i_r   *" << std::endl;
	std::cout << "*              Dereferences				 v_mt_i_dr  *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	 v_mt_i_id  *" << std::endl;
	std::cout << "*              Arithmetic Operators			 v_mt_i_ar  *" << std::endl;
	std::cout << "*              Assigment Operators			 v_mt_i_as  *" << std::endl;
	std::cout << "*								    * <------- METER OS QUE FALTA" << std::endl;
	std::cout << "*      Member Functions:					    *" << std::endl;
	std::cout << "*          Default:						    *" << std::endl;
	std::cout << "*              default constructor			 v_mf_d_dc  *" << std::endl;
	std::cout << "*              fill constructor				 v_mf_d_fc  *" << std::endl;
	std::cout << "*              range constructor			 v_mf_d_rc  *" << std::endl;
	std::cout << "*              copy constructor				 v_mf_d_cc  *" << std::endl;
	std::cout << "*              destructor				 v_mf_d_d   *" << std::endl;
	std::cout << "*              operator=				 v_mf_d_o=  *" << std::endl;
	std::cout << "*          Iterators:						    *" << std::endl;
	std::cout << "*              begin					 v_mf_i_b   *" << std::endl;
	std::cout << "*              end					 v_mf_i_e   *" << std::endl;
	std::cout << "*              rbegin					 v_mf_i_rb  *" << std::endl;
	std::cout << "*              rend					 v_mf_i_re  *" << std::endl;
	std::cout << "*          Capacity:						    *" << std::endl;
	std::cout << "*              size					 v_mf_c_s   *" << std::endl;
	std::cout << "*              max_size					 v_mf_c_ms  *" << std::endl;
	std::cout << "*              resize					 v_mf_c_r   *" << std::endl;
	std::cout << "*              capacity					 v_mf_c_c   *" << std::endl;
	std::cout << "*              empty					 v_mf_c_e   *" << std::endl;
	std::cout << "*              reserve					 v_mf_c_re  *" << std::endl;
	std::cout << "*          Element Access:					    *" << std::endl;
	std::cout << "*              operator[]				 v_mf_ea_o  *" << std::endl;
	std::cout << "*              at					 v_mf_ea_a  *" << std::endl;
	std::cout << "*              front					 v_mf_ea_f  *" << std::endl;
	std::cout << "*              back					 v_mf_ea_b  *" << std::endl;
	std::cout << "*          Modifiers:						    *" << std::endl;
	std::cout << "*              assign					 v_mf_m_a   *" << std::endl;
	std::cout << "*              push_back				 v_mf_m_pu  *" << std::endl;
	std::cout << "*              pop_back					 v_mf_m_po  *" << std::endl;
	std::cout << "*              insert					 v_mf_m_i   *" << std::endl;
	std::cout << "*              erase					 v_mf_m_e   *" << std::endl;
	std::cout << "*              swap					 v_mf_m_s   *" << std::endl;
	std::cout << "*              clear					 v_mf_m_c   *" << std::endl;
	std::cout << "*          Allocator:						    *" << std::endl;
	std::cout << "*              get_allocator				 v_mf_a_ga  *" << std::endl;
	std::cout << "*          Non-member Function Overloads:			    *" << std::endl;
	std::cout << "*              relational operators			 v_mf_n_ro  *" << std::endl;
	std::cout << "*              swap					 v_mf_n_s   *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*********************************************************************"
				<< std::endl;

	std::cout << std::endl;

}

int		main(int argc, char **argv) {
	// if no argument
	if (argc != 2) {
		welcome_message();
		return 0;
	}

	// trying to find matching argument
	std::string argument = std::string(argv[1]);
	if (vector_argument(argument) == 0)
		return 0;

	// no valid argument found
	welcome_message();
}
