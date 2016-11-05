/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 27 "parser.y" /* yacc.c:339  */

#include "config.h"

#include <stdlib.h>
#include <string.h>

#define	COB_IN_PARSER	1
#include "cobc.h"
#include "tree.h"

#ifndef	_STDLIB_H
#define	_STDLIB_H 1
#endif

#define YYSTYPE			cb_tree
#define yyerror(x)		cb_error ("%s", x)

#define emit_statement(x) \
do { \
  if (!skip_statements) { \
	CB_ADD_TO_CHAIN (x, current_program->exec_list); \
  } \
}  ONCE_COB

#define push_expr(type, node) \
  current_expr = cb_build_list (cb_int (type), node, current_expr)

/* Statement terminator definitions */
#define TERM_NONE		0
#define TERM_ACCEPT		1U
#define TERM_ADD		2U
#define TERM_CALL		3U
#define TERM_COMPUTE		4U
#define TERM_DELETE		5U
#define TERM_DISPLAY		6U
#define TERM_DIVIDE		7U
#define TERM_EVALUATE		8U
#define TERM_IF			9U
#define TERM_MULTIPLY		10U
#define TERM_PERFORM		11U
#define TERM_READ		12U
#define TERM_RECEIVE		13U
#define TERM_RETURN		14U
#define TERM_REWRITE		15U
#define TERM_SEARCH		16U
#define TERM_START		17U
#define TERM_STRING		18U
#define TERM_SUBTRACT		19U
#define TERM_UNSTRING		20U
#define TERM_WRITE		21U
#define TERM_MAX		22U

#define	TERMINATOR_WARNING(x,z)	terminator_warning (x, TERM_##z, #z)
#define	TERMINATOR_ERROR(x,z)	terminator_error (x, TERM_##z, #z)
#define	TERMINATOR_CLEAR(x,z)	terminator_clear (x, TERM_##z)

/* Defines for duplicate checks */
/* Note - We use <= 16 for common item definitons and */
/* > 16 for non-common item definitions e.g. REPORT and SCREEN */
#define	SYN_CLAUSE_1		(1U << 0)
#define	SYN_CLAUSE_2		(1U << 1)
#define	SYN_CLAUSE_3		(1U << 2)
#define	SYN_CLAUSE_4		(1U << 3)
#define	SYN_CLAUSE_5		(1U << 4)
#define	SYN_CLAUSE_6		(1U << 5)
#define	SYN_CLAUSE_7		(1U << 6)
#define	SYN_CLAUSE_8		(1U << 7)
#define	SYN_CLAUSE_9		(1U << 8)
#define	SYN_CLAUSE_10		(1U << 9)
#define	SYN_CLAUSE_11		(1U << 10)
#define	SYN_CLAUSE_12		(1U << 11)
#define	SYN_CLAUSE_13		(1U << 12)
#define	SYN_CLAUSE_14		(1U << 13)
#define	SYN_CLAUSE_15		(1U << 14)
#define	SYN_CLAUSE_16		(1U << 15)
#define	SYN_CLAUSE_17		(1U << 16)
#define	SYN_CLAUSE_18		(1U << 17)
#define	SYN_CLAUSE_19		(1U << 18)
#define	SYN_CLAUSE_20		(1U << 19)
#define	SYN_CLAUSE_21		(1U << 20)
#define	SYN_CLAUSE_22		(1U << 21)
#define	SYN_CLAUSE_23		(1U << 22)
#define	SYN_CLAUSE_24		(1U << 23)
#define	SYN_CLAUSE_25		(1U << 24)
#define	SYN_CLAUSE_26		(1U << 25)
#define	SYN_CLAUSE_27		(1U << 26)
#define	SYN_CLAUSE_28		(1U << 27)
#define	SYN_CLAUSE_29		(1U << 28)
#define	SYN_CLAUSE_30		(1U << 29)
#define	SYN_CLAUSE_31		(1U << 30)
#define	SYN_CLAUSE_32		(1U << 31)

#define	EVAL_DEPTH		32
#define	PROG_DEPTH		16

/* Global variables */

struct cb_program		*current_program = NULL;
struct cb_statement		*current_statement = NULL;
struct cb_label			*current_section = NULL;
struct cb_label			*current_paragraph = NULL;
cb_tree				defined_prog_list = NULL;
char				*cobc_glob_line = NULL;
int				cb_exp_line = 0;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
unsigned int			cobc_repeat_last_token = 0;
unsigned int			cobc_in_id = 0;
unsigned int			cobc_in_procedure = 0;
unsigned int			cobc_in_repository = 0;
unsigned int			cobc_force_literal = 0;
unsigned int			cobc_cs_check = 0;
unsigned int			cobc_allow_program_name = 0;

/* Local variables */

enum tallying_phrase {
	NO_PHRASE,
	FOR_PHRASE,
	CHARACTERS_PHRASE,
	ALL_LEADING_TRAILING_PHRASES,
	VALUE_REGION_PHRASE
};

static struct cb_statement	*main_statement;

static cb_tree			current_expr;
static struct cb_field		*current_field;
static struct cb_field		*description_field;
static struct cb_file		*current_file;
static struct cb_report		*current_report;
static struct cb_report		*report_instance;

static struct cb_file		*linage_file;
static cb_tree			next_label_list;

static char			*stack_progid[PROG_DEPTH];

static enum cb_storage		current_storage;

static cb_tree			perform_stack;
static cb_tree			qualifier;

static cb_tree			save_tree;
static cb_tree			start_tree;

static unsigned int		check_unreached;
static unsigned int		in_declaratives;
static unsigned int		in_debugging;
static unsigned int		current_linage;
static unsigned int		report_count;
static unsigned int		prog_end;
static unsigned int		use_global_ind;
static unsigned int		samearea;
static unsigned int		inspect_keyword;
static unsigned int		main_flag_set;
static int			next_label_id;
static int			eval_level;
static int			eval_inc;
static int			eval_inc2;
static int			depth;
static int			first_nested_program;
static int			call_mode;
static int			size_mode;
static cob_flags_t		set_attr_val_on;
static cob_flags_t		set_attr_val_off;
static cob_flags_t		check_duplicate;
static cob_flags_t		check_on_off_duplicate;
static cob_flags_t		check_pic_duplicate;
static cob_flags_t		check_comp_duplicate;
static cob_flags_t		check_line_col_duplicate;
static unsigned int		skip_statements;
static unsigned int		start_debug;
static unsigned int		save_debug;
static unsigned int		needs_field_debug;
static unsigned int		needs_debug_item;
static unsigned int		env_div_seen;
static cob_flags_t		header_check;
static unsigned int		call_nothing;
static enum tallying_phrase	previous_tallying_phrase;

static enum cb_display_type	display_type;
static int			is_first_display_item;
static cb_tree			advancing_value;
static cb_tree			upon_value;
static cb_tree			line_column;

static int			term_array[TERM_MAX];
static cb_tree			eval_check[EVAL_DEPTH][EVAL_DEPTH];

/* Defines for header presence */

#define	COBC_HD_ENVIRONMENT_DIVISION	(1U << 0)
#define	COBC_HD_CONFIGURATION_SECTION	(1U << 1)
#define	COBC_HD_SPECIAL_NAMES		(1U << 2)
#define	COBC_HD_INPUT_OUTPUT_SECTION	(1U << 3)
#define	COBC_HD_FILE_CONTROL		(1U << 4)
#define	COBC_HD_I_O_CONTROL		(1U << 5)
#define	COBC_HD_DATA_DIVISION		(1U << 6)
#define	COBC_HD_FILE_SECTION		(1U << 7)
#define	COBC_HD_WORKING_STORAGE_SECTION	(1U << 8)
#define	COBC_HD_LOCAL_STORAGE_SECTION	(1U << 9)
#define	COBC_HD_LINKAGE_SECTION		(1U << 10)
#define	COBC_HD_COMMUNICATIONS_SECTION	(1U << 11)
#define	COBC_HD_REPORT_SECTION		(1U << 12)
#define	COBC_HD_SCREEN_SECTION		(1U << 13)
#define	COBC_HD_PROCEDURE_DIVISION	(1U << 14)
#define	COBC_HD_PROGRAM_ID		(1U << 15)
#define	COBC_HD_COMMUNICATION_SECTION		(1U << 16)

/* Static functions */

static void
begin_statement (const char *name, const unsigned int term)
{
	if (cb_warn_unreachable && check_unreached) {
		cb_warning (_("unreachable statement '%s'"), name);
	}
	current_paragraph->flag_statement = 1;
	current_statement = cb_build_statement (name);
	CB_TREE (current_statement)->source_file = cb_source_file;
	CB_TREE (current_statement)->source_line = cb_source_line;
	current_statement->statement = cobc_glob_line;
	current_statement->flag_in_debug = in_debugging;
	emit_statement (CB_TREE (current_statement));
	if (term) {
		term_array[term]++;
	}
	main_statement = current_statement;
}

static void
begin_implicit_statement (void)
{
	current_statement = cb_build_statement (NULL);
	current_statement->flag_in_debug = !!in_debugging;
	main_statement->body = cb_list_add (main_statement->body,
					    CB_TREE (current_statement));
}

# if 0 /* activate only for debugging purposes for attribs */
static
void print_bits (cob_flags_t num)
{
	unsigned int 	size = sizeof (cob_flags_t);
	unsigned int	max_pow = 1 << (size * 8 - 1);
	int 		i = 0;

	for(; i < size * 8; ++i){
		/* Print last bit and shift left. */
		fprintf (stderr, "%u ", num & max_pow ? 1 : 0);
		num = num << 1;
 	}
	fprintf (stderr, "\n");
}
#endif

static void
emit_entry (const char *name, const int encode, cb_tree using_list)
{
	cb_tree		l;
	cb_tree		label;
	cb_tree		x;
	struct cb_field	*f;
	int		parmnum;
	char		buff[COB_MINI_BUFF];

	snprintf (buff, (size_t)COB_MINI_MAX, "E$%s", name);
	label = cb_build_label (cb_build_reference (buff), NULL);
	if (encode) {
		CB_LABEL (label)->name = cb_encode_program_id (name);
		CB_LABEL (label)->orig_name = name;
	} else {
		CB_LABEL (label)->name = name;
		CB_LABEL (label)->orig_name = current_program->orig_program_id;
	}
	CB_LABEL (label)->flag_begin = 1;
	CB_LABEL (label)->flag_entry = 1;
	label->source_file = cb_source_file;
	label->source_line = cb_source_line;
	emit_statement (label);

	if (current_program->flag_debugging) {
		emit_statement (cb_build_debug (cb_debug_contents,
						"START PROGRAM", NULL));
	}

	parmnum = 1;
	for (l = using_list; l; l = CB_CHAIN (l)) {
		x = CB_VALUE (l);
		if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
			f = CB_FIELD (cb_ref (x));
			if (f->level != 01 && f->level != 77) {
				cb_error_x (x, _("'%s' not level 01 or 77"), cb_name (x));
			}
			if (!current_program->flag_chained) {
				if (f->storage != CB_STORAGE_LINKAGE) {
					cb_error_x (x, _("'%s' is not in LINKAGE SECTION"), cb_name (x));
				}
				if (f->flag_item_based || f->flag_external) {
					cb_error_x (x, _("'%s' cannot be BASED/EXTERNAL"), cb_name (x));
				}
				f->flag_is_pdiv_parm = 1;
			} else {
				if (f->storage != CB_STORAGE_WORKING) {
					cb_error_x (x, _("'%s' is not in WORKING-STORAGE SECTION"), cb_name (x));
				}
				f->flag_chained = 1;
				f->param_num = parmnum;
				parmnum++;
			}
			if (f->redefines) {
				cb_error_x (x, _("'%s' REDEFINES field not allowed here"), cb_name (x));
			}
		}
	}

	/* Check dangling LINKAGE items */
	if (cb_warn_linkage) {
		for (f = current_program->linkage_storage; f; f = f->sister) {
			if (current_program->returning) {
				if (cb_ref (current_program->returning) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (current_program->returning))) {
						continue;
					}
				}
			}
			for (l = using_list; l; l = CB_CHAIN (l)) {
				x = CB_VALUE (l);
				if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (x))) {
						break;
					}
				}
			}
			if (!l && !f->redefines) {
				cb_warning (_("LINKAGE item '%s' is not a PROCEDURE USING parameter"), f->name);
			}
		}
	}

	/* Check returning item against using items when FUNCTION */
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		for (l = using_list; l; l = CB_CHAIN (l)) {
			x = CB_VALUE (l);
			if (CB_VALID_TREE (x) && current_program->returning &&
			    cb_ref (x) == cb_ref (current_program->returning)) {
				cb_error_x (x, _("'%s' USING item duplicates RETURNING item"), cb_name (x));
			}
		}
	}

	for (l = current_program->entry_list; l; l = CB_CHAIN (l)) {
		if (strcmp ((const char *)name,
			    (const char *)(CB_LABEL(CB_PURPOSE(l))->name)) == 0) {
			cb_error_x (CB_TREE (current_statement),
				    _("ENTRY '%s' duplicated"), name);
		}
	}

	current_program->entry_list =
		cb_list_append (current_program->entry_list,
				CB_BUILD_PAIR (label, using_list));
}

static size_t
increment_depth (void)
{
	if (++depth >= PROG_DEPTH) {
		cb_error (_("maximum nested program depth exceeded (%d)"),
			  PROG_DEPTH);
		return 1;
	}
	return 0;
}

static void
terminator_warning (cb_tree stmt, const unsigned int termid,
		    const char *name)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
		if (cb_warn_terminator) {
			cb_warning_x (stmt,
				_("%s statement not terminated by END-%s"),
				name, name);
		}
	}
	/* Free tree associated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_error (cb_tree stmt, const unsigned int termid, const char *name)
{
	check_unreached = 0;
	cb_error_x (CB_TREE (current_statement),
			_("%s statement not terminated by END-%s"),
			name, name);
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree associated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree associated with terminator */
	cobc_parse_free (stmt);
}

static int
literal_value (cb_tree x)
{
	if (x == cb_space) {
		return ' ';
	} else if (x == cb_zero) {
		return '0';
	} else if (x == cb_quote) {
		return cb_flag_apostrophe ? '\'' : '"';
	} else if (x == cb_null) {
		return 0;
	} else if (x == cb_low) {
		return 0;
	} else if (x == cb_high) {
		return 255;
	} else if (CB_TREE_CLASS (x) == CB_CLASS_NUMERIC) {
		return cb_get_int (x);
	} else {
		return CB_LITERAL (x)->data[0];
	}
}

static void
setup_use_file (struct cb_file *fileptr)
{
	struct cb_file	*newptr;

	if (fileptr->organization == COB_ORG_SORT) {
		cb_error (_("USE statement invalid for SORT file"));
	}
	if (fileptr->flag_global) {
		newptr = cobc_parse_malloc (sizeof(struct cb_file));
		*newptr = *fileptr;
		newptr->handler = current_section;
		newptr->handler_prog = current_program;
		if (!use_global_ind) {
			current_program->local_file_list =
				cb_list_add (current_program->local_file_list,
					     CB_TREE (newptr));
		} else {
			current_program->global_file_list =
				cb_list_add (current_program->global_file_list,
					     CB_TREE (newptr));
		}
	} else {
		fileptr->handler = current_section;
	}
}

static void
emit_duplicate_clause_message (const char *clause)
{
	if (cb_relaxed_syntax_checks) {
		cb_warning (_("duplicate %s clause"), clause);
	} else {
		cb_error (_("duplicate %s clause"), clause);
	}
}

static void
check_repeated (const char *clause, const cob_flags_t bitval, cob_flags_t *already_seen)
{
	if (*already_seen & bitval) {
		emit_duplicate_clause_message (clause);
	} else {
		*already_seen |= bitval;
	}
}

static void
setup_occurs (void)
{
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->indexes == COB_MAX_SUBSCRIPTS) {
		cb_error (_ ("maximum OCCURS depth exceeded (%d)"),
			COB_MAX_SUBSCRIPTS);
	} else {
		current_field->indexes++;
	}
	if (current_field->flag_item_based) {
		cb_error (_ ("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_ ("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
}

static void
setup_occurs_min_max (cb_tree occurs_min, cb_tree occurs_max)
{
	if (occurs_max) {
		current_field->occurs_min = cb_get_int (occurs_min);
		current_field->occurs_max = cb_get_int (occurs_max);
		if (!current_field->depending) {
			if (cb_relaxed_syntax_checks) {
				cb_warning (_ ("TO phrase without DEPENDING phrase"));
				cb_warning (_ ("maximum number of occurences assumed to be exact number"));
				current_field->occurs_min = 1; /* Checkme: why using 1 ? */
			} else {
				cb_error (_ ("TO phrase without DEPENDING phrase"));
			}
		}
		if (current_field->occurs_max > 0 &&
			current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_ ("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_min = 1; /* Checkme: why using 1 ? */
		current_field->occurs_max = cb_get_int (occurs_min);
		if (current_field->depending) {
			cb_verify (cb_odo_without_to, _ ("ODO without TO phrase"));
		}
	}
}

static void
check_relaxed_syntax (const cob_flags_t lev)
{
	const char	*s;

	switch (lev) {
	case COBC_HD_ENVIRONMENT_DIVISION:
		s = "ENVIRONMENT DIVISION";
		break;
	case COBC_HD_CONFIGURATION_SECTION:
		s = "CONFIGURATION SECTION";
		break;
	case COBC_HD_SPECIAL_NAMES:
		s = "SPECIAL-NAMES";
		break;
	case COBC_HD_INPUT_OUTPUT_SECTION:
		s = "INPUT-OUTPUT SECTION";
		break;
	case COBC_HD_FILE_CONTROL:
		s = "FILE-CONTROL";
		break;
	case COBC_HD_I_O_CONTROL:
		s = "I-O-CONTROL";
		break;
	case COBC_HD_DATA_DIVISION:
		s = "DATA DIVISION";
		break;
	case COBC_HD_FILE_SECTION:
		s = "FILE SECTION";
		break;
	case COBC_HD_WORKING_STORAGE_SECTION:
		s = "WORKING-STORAGE SECTION";
		break;
	case COBC_HD_LOCAL_STORAGE_SECTION:
		s = "LOCAL-STORAGE SECTION";
		break;
	case COBC_HD_LINKAGE_SECTION:
		s = "LINKAGE SECTION";
		break;
	case COBC_HD_COMMUNICATIONS_SECTION:
		s = "COMMUNICATIONS SECTION";
		break;
	case COBC_HD_REPORT_SECTION:
		s = "REPORT SECTION";
		break;
	case COBC_HD_SCREEN_SECTION:
		s = "SCREEN SECTION";
		break;
	case COBC_HD_PROCEDURE_DIVISION:
		s = "PROCEDURE DIVISION";
		break;
	case COBC_HD_PROGRAM_ID:
		s = "PROGRAM-ID";
		break;
	case COBC_HD_COMMUNICATION_SECTION:
		s = "COMMUNICATION SECTION";
		break;
	default:
		s = "Unknown";
		break;
	}
	if (cb_relaxed_syntax_checks) {
		cb_warning (_("%s header missing - assumed"), s);
	} else {
		cb_error (_("%s header missing"), s);
	}
}

static void
check_headers_present (const cob_flags_t lev1, const cob_flags_t lev2,
		       const cob_flags_t lev3, const cob_flags_t lev4)
{
	/* Lev1 is always present and checked */
	/* Lev2/3/4, if non-zero (forced) may be present */
	if (!(header_check & lev1)) {
		header_check |= lev1;
		check_relaxed_syntax (lev1);
	}
	if (lev2) {
		if (!(header_check & lev2)) {
			header_check |= lev2;
			check_relaxed_syntax (lev2);
		}
	}
	if (lev3) {
		if (!(header_check & lev3)) {
			header_check |= lev3;
			check_relaxed_syntax (lev3);
		}
	}
	if (lev4) {
		if (!(header_check & lev4)) {
			header_check |= lev4;
			check_relaxed_syntax (lev4);
		}
	}
}

static void
build_nested_special (const int ndepth)
{
	cb_tree		x;
	cb_tree		y;

	if (!ndepth) {
		return;
	}

	/* Inherit special name mnemonics from parent */
	for (x = current_program->mnemonic_spec_list; x; x = CB_CHAIN (x)) {
		y = cb_build_reference (cb_name(CB_PURPOSE(x)));
		if (CB_SYSTEM_NAME_P (CB_VALUE(x))) {
			cb_define (y, CB_VALUE(x));
		} else {
			cb_build_constant (y, CB_VALUE(x));
		}
	}
}

static void
clear_initial_values (void)
{
	perform_stack = NULL;
	current_statement = NULL;
	main_statement = NULL;
	qualifier = NULL;
	in_declaratives = 0;
	in_debugging = 0;
	use_global_ind = 0;
	check_duplicate = 0;
	check_pic_duplicate = 0;
	check_comp_duplicate = 0;
	skip_statements = 0;
	start_debug = 0;
	save_debug = 0;
	needs_field_debug = 0;
	needs_debug_item = 0;
	env_div_seen = 0;
	header_check = 0;
	next_label_id = 0;
	current_linage = 0;
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	report_count = 0;
	current_storage = CB_STORAGE_WORKING;
	eval_level = 0;
	eval_inc = 0;
	eval_inc2 = 0;
	inspect_keyword = 0;
	check_unreached = 0;
	cobc_in_id = 0;
	cobc_in_procedure = 0;
	cobc_in_repository = 0;
	cobc_force_literal = 0;
	non_const_word = 0;
	samearea = 1;
	memset ((void *)eval_check, 0, sizeof(eval_check));
	memset ((void *)term_array, 0, sizeof(term_array));
	linage_file = NULL;
	current_file = NULL;
	current_report = NULL;
	report_instance = NULL;
	next_label_list = NULL;
	if (cobc_glob_line) {
		cobc_free (cobc_glob_line);
		cobc_glob_line = NULL;
	}
}

/*
  We must check for redefinitions of program-names and external program names
  outside of the usual reference/word_list methods as it may have to be done in
  a case-sensitive way.
*/
static void
begin_scope_of_program_name (struct cb_program *program)
{
	const char	*prog_name = program->program_name;
	const char	*prog_id = program->orig_program_id;
	const char	*elt_name;
	const char	*elt_id;
	cb_tree		l;

	/* Error if a program with the same name has been defined. */
	for (l = defined_prog_list; l; l = CB_CHAIN (l)) {
		elt_name = ((struct cb_program *) CB_VALUE (l))->program_name;
		elt_id = ((struct cb_program *) CB_VALUE (l))->orig_program_id;
		if (cb_fold_call && strcasecmp (prog_name, elt_name) == 0) {
			cb_error_x ((cb_tree) program,
				    _("redefinition of program name '%s'"),
				    elt_name);
		} else if (strcmp (prog_id, elt_id) == 0) {
		        cb_error_x ((cb_tree) program,
				    _("redefinition of program ID '%s'"),
				    elt_id);
			return;
		}
	}

	/* Otherwise, add the program to the list. */
	defined_prog_list = cb_list_add (defined_prog_list,
					 (cb_tree) program);
}

static void
remove_program_name (struct cb_list *l, struct cb_list *prev)
{
	if (prev == NULL) {
		defined_prog_list = l->chain;
	} else {
		prev->chain = l->chain;
	}
	cobc_parse_free (l);
}

/* Remove the program from defined_prog_list, if necessary. */
static void
end_scope_of_program_name (struct cb_program *program)
{
	struct	cb_list	*prev = NULL;
	struct	cb_list *l = (struct cb_list *) defined_prog_list;

	if (program->nested_level == 0) {
		return;
	}

	/* Remove any subprograms */
	l = CB_LIST (defined_prog_list);
        while (l) {
		if (CB_PROGRAM (l->value)->nested_level > program->nested_level) {
			remove_program_name (l, prev);
			l = CB_LIST (prev->chain);
		} else {
			prev = l;
			l = CB_LIST (l->chain);
		}
	}

	/* Remove the specified program, if it is not COMMON */
	if (!program->flag_common) {
		l = (struct cb_list *) defined_prog_list;
	        while (l) {
			if (strcmp (program->orig_program_id,
				    CB_PROGRAM (l->value)->orig_program_id)
			    == 0) {
				remove_program_name (l, prev);
				l = CB_LIST (prev->chain);
				break;
			} else {
				prev = l;
				l = CB_LIST (l->chain);
			}
		}
	}
}

static int
setup_program (cb_tree id, cb_tree as_literal, const unsigned char type)
{
	current_section = NULL;
	current_paragraph = NULL;

	if (CB_LITERAL_P (id)) {
		stack_progid[depth] = (char *)(CB_LITERAL (id)->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME (id));
	}

	if (depth > 0) {
		if (first_nested_program) {
		check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
	}
		if (type == CB_FUNCTION_TYPE) {
			cb_error ("functions may not be defined within a program/function");
		}
	}
	first_nested_program = 1;

	if (prog_end) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}

		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	} else {
		prog_end = 1;
	}

	if (increment_depth ()) {
	        return 1;
	}

	current_program->program_id = cb_build_program_id (id, as_literal, type == CB_FUNCTION_TYPE);
	current_program->prog_type = type;

	if (type == CB_PROGRAM_TYPE) {
		if (!main_flag_set) {
			main_flag_set = 1;
			current_program->flag_main = !!cobc_flag_main;
		}
	} else { /* CB_FUNCTION_TYPE */
		current_program->flag_recursive = 1;
	}

	if (CB_REFERENCE_P (id)) {
	        cb_define (id, CB_TREE (current_program));
	}

	begin_scope_of_program_name (current_program);

	return 0;
}

static void
decrement_depth (const char *name, const unsigned char type)
{
	int	d;

	if (depth) {
		depth--;
	}

	if (!strcmp (stack_progid[depth], name)) {
		return;
	}

	if (type == CB_FUNCTION_TYPE) {
		cb_error (_("END FUNCTION '%s' is different from FUNCTION-ID '%s'"),
			  name, stack_progid[depth]);
		return;
	}

	/* Set depth to that of whatever program we just ended, if it exists. */
	for (d = depth; d >= 0; --d) {
		if (!strcmp (stack_progid[d], name)) {
			depth = d;
			return;
		}
	}

	if (depth != d) {
		cb_error (_("END PROGRAM '%s' is different from PROGRAM-ID '%s'"),
			  name, stack_progid[depth]);
	}
}

static void
clean_up_program (cb_tree name, const unsigned char type)
{
	char		*s;

	end_scope_of_program_name (current_program);

	if (CB_LITERAL_P (name)) {
		s = (char *)(CB_LITERAL (name)->data);
	} else {
		s = (char *)(CB_NAME (name));
	}

	decrement_depth (s, type);

	current_section = NULL;
	current_paragraph = NULL;
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
}

static const char *
get_literal_or_word_name (const cb_tree x)
{
	if (CB_LITERAL_P (x)) {
		return (const char *) CB_LITERAL (x)->data;
	} else { /* CB_REFERENCE_P (x) */
		return (const char *) CB_NAME (x);
	}
}

/* verify and set picture sign for currency */
static void
set_currency_picture_symbol (const cb_tree x)
{
	unsigned char	*s		= CB_LITERAL (x)->data;

	if (CB_LITERAL (x)->size != 1) {
		cb_error_x (x, _("PICTURE SYMBOL for CURRENCY must be one character long"));
		return;
	}
	switch (*s) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'N':
	case 'P':
	case 'R':
	case 'S':
	case 'V':
	case 'X':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'n':
	case 'p':
	case 'r':
	case 's':
	case 'v':
	case 'x':
	case 'z':
	case '+':
	case '-':
	case ',':
	case '.':
	case '*':
	case '/':
	case ';':
	case '(':
	case ')':
	case '=':
	case '\'':
	case '"':
	case ' ':
		cb_error_x (x, _("invalid character '%c' in PICTURE SYMBOL for CURRENCY"), s[0]);
		return;
	default:
		break;
	}
	current_program->currency_symbol = s[0];
}

/* Return 1 if the prototype name is the same as the current function's. */
static int
check_prototype_redefines_current_element (const cb_tree prototype_name)
{
	const char	*name = get_literal_or_word_name (prototype_name);

	if (strcasecmp (name, current_program->program_name) == 0) {
		cb_warning_x (prototype_name,
			_("prototype has same name as current function and will be ignored"));
		return 1;
	}

	return 0;
}

/* Returns 1 if the prototype has been duplicated. */
static int
check_for_duplicate_prototype (const cb_tree prototype_name,
			       const cb_tree prototype)
{
	cb_tree	dup;

	if (CB_WORD_COUNT (prototype_name) > 0) {
		/* Make sure the duplicate is a prototype */
		dup = cb_ref (prototype_name);
		if (!CB_PROTOTYPE_P (dup)) {
			redefinition_error (prototype_name);
			return 1;
		}

		/* Check the duplicate prototypes match */
		if (strcmp (CB_PROTOTYPE (prototype)->ext_name,
			    CB_PROTOTYPE (dup)->ext_name)
		    || CB_PROTOTYPE (prototype)->type != CB_PROTOTYPE (dup)->type) {
			cb_error_x (prototype_name,
				    _("duplicate REPOSITORY entries for '%s' do not match"),
				    get_literal_or_word_name (prototype_name));
		} else {
			cb_warning_x (prototype_name,
				      _("duplicate REPOSITORY entry for '%s'"),
				      get_literal_or_word_name (prototype_name));
		}
		return 1;
	}

	return 0;
}

static void
setup_prototype (cb_tree prototype_name, cb_tree ext_name,
		  const int type, const int is_current_element)
{
	cb_tree	prototype;
	int	name_redefinition_allowed;

	if (!is_current_element
	    && check_prototype_redefines_current_element (prototype_name)) {
		return;
	}

	prototype = cb_build_prototype (prototype_name, ext_name, type);

	if (!is_current_element
	    && check_for_duplicate_prototype (prototype_name, prototype)) {
		return;
	}

	name_redefinition_allowed = type == CB_PROGRAM_TYPE
		&& is_current_element && cb_program_name_redefinition;
	if (!name_redefinition_allowed) {
		if (CB_LITERAL_P (prototype_name)) {
			cb_define (cb_build_reference ((const char *)CB_LITERAL (prototype_name)->data), prototype);
		} else {
			cb_define (prototype_name, prototype);
		}

		if (type == CB_PROGRAM_TYPE) {
			current_program->program_spec_list =
				cb_list_add (current_program->program_spec_list, prototype);
		} else { /* CB_FUNCTION_TYPE */
			current_program->user_spec_list =
				cb_list_add (current_program->user_spec_list, prototype);
		}
	}
}

static void
error_if_invalid_level_for_renames (cb_tree item)
{
	int	level = CB_FIELD (cb_ref (item))->level;

	if (level == 1 || level == 66 || level == 77) {
	        cb_verify (cb_renames_uncommon_levels,
			   _("RENAMES of 01-, 66- and 77-level items"));
	} else if (level == 88) {
		cb_error (_("RENAMES may not reference a level 88"));
	}
}

static int
set_current_field (cb_tree level, cb_tree name)
{
	cb_tree	x  = cb_build_field_tree (level, name, current_field,
					  current_storage, current_file, 0);
	cobc_parse_free (level);

	if (CB_INVALID_TREE (x)) {
	        return 1;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}

	return 0;
}

static void
check_not_both (const cob_flags_t flag1, const cob_flags_t flag2,
		const char *flag1_name, const char *flag2_name,
		const cob_flags_t flags, const cob_flags_t flag_to_set)
{
	if (flag_to_set == flag1 && (flags & flag2)) {
		cb_error (_("cannot specify both %s and %s"),
			  flag1_name, flag2_name);
	} else if (flag_to_set == flag2 && (flags & flag1)) {
		cb_error (_("cannot specify both %s and %s"),
			  flag1_name, flag2_name);

	}
}

static COB_INLINE COB_A_INLINE void
check_not_highlight_and_lowlight (const cob_flags_t flags,
				  const cob_flags_t flag_to_set)
{
	check_not_both (COB_SCREEN_HIGHLIGHT, COB_SCREEN_LOWLIGHT,
			"HIGHLIGHT", "LOWLIGHT", flags, flag_to_set);
}

static void
set_screen_attr (const char *clause, const cob_flags_t bitval)
{
	if (current_field->screen_flag & bitval) {
		emit_duplicate_clause_message (clause);
	} else {
		current_field->screen_flag |= bitval;
	}
}

static void
emit_conflicting_clause_message (const char *clause, const char *conflicting)
{
	if (cb_relaxed_syntax_checks) {
		cb_warning (_("cannot specify both %s and %s; %s is ignored"),
			    clause, conflicting, clause);
	} else {
		cb_error (_("cannot specify both %s and %s"),
			  clause, conflicting);
	}

}

static void
set_attr_with_conflict (const char *clause, const cob_flags_t bitval,
			const char *confl_clause, const cob_flags_t confl_bit,
			const int local_check_duplicate, cob_flags_t *flags)
{
	if (local_check_duplicate && (*flags & bitval)) {
		emit_duplicate_clause_message (clause);
        } else if (*flags & confl_bit) {
		emit_conflicting_clause_message (clause, confl_clause);
	} else {
	        *flags |= bitval;
	}
}

static COB_INLINE COB_A_INLINE void
set_screen_attr_with_conflict (const char *clause, const cob_flags_t bitval,
			       const char *confl_clause,
			       const cob_flags_t confl_bit)
{
	set_attr_with_conflict (clause, bitval, confl_clause, confl_bit, 1,
				&current_field->screen_flag);
}

static COB_INLINE COB_A_INLINE int
has_dispattr (const cob_flags_t attrib)
{
	return current_statement->attr_ptr
		&& current_statement->attr_ptr->dispattrs & attrib;
}

static void
attach_attrib_to_cur_stmt (void)
{
	if (!current_statement->attr_ptr) {
		current_statement->attr_ptr =
			cobc_parse_malloc (sizeof(struct cb_attr_struct));
	}
}

static COB_INLINE COB_A_INLINE void
set_dispattr (const cob_flags_t attrib)
{
	attach_attrib_to_cur_stmt ();
	current_statement->attr_ptr->dispattrs |= attrib;
}

static COB_INLINE COB_A_INLINE void
set_dispattr_with_conflict (const char *attrib_name, const cob_flags_t attrib,
			    const char *confl_name,
			    const cob_flags_t confl_attrib)
{
	attach_attrib_to_cur_stmt ();
	set_attr_with_conflict (attrib_name, attrib, confl_name, confl_attrib, 0,
				&current_statement->attr_ptr->dispattrs);
}

static void
bit_set_attr (const cb_tree on_off, const cob_flags_t attr_val)
{
	if (on_off == cb_int1) {
		set_attr_val_on |= attr_val;
	} else {
		set_attr_val_off |= attr_val;
	}
}

static void
set_field_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
		   cb_tree timeout, cb_tree prompt, cb_tree size_is)
{
	/* [WITH] FOREGROUND-COLOR [IS] */
	if (fgc) {
		current_statement->attr_ptr->fgc = fgc;
	}
	/* [WITH] BACKGROUND-COLOR [IS] */
	if (bgc) {
		current_statement->attr_ptr->bgc = bgc;
	}
	/* [WITH] SCROLL UP | DOWN */
	if (scroll) {
		current_statement->attr_ptr->scroll = scroll;
	}
	/* [WITH] TIME-OUT [AFTER] */
	if (timeout) {
		current_statement->attr_ptr->timeout = timeout;
	}
	/* [WITH] PROMPT CHARACTER [IS] */
	if (prompt) {
		current_statement->attr_ptr->prompt = prompt;
	}
	/* [WITH] SIZE [IS] */
	if (size_is) {
		current_statement->attr_ptr->size_is = size_is;
	}
}

static void
set_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
	     cb_tree timeout, cb_tree prompt, cb_tree size_is,
	     const cob_flags_t attrib)
{
	attach_attrib_to_cur_stmt ();
	set_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	current_statement->attr_ptr->dispattrs |= attrib;
}

static void
set_attribs_with_conflict  (cb_tree fgc, cb_tree bgc, cb_tree scroll,
			    cb_tree timeout, cb_tree prompt, cb_tree size_is,
			    const char *clause_name, const cob_flags_t attrib,
			    const char *confl_name, const cob_flags_t confl_attrib)
{
	attach_attrib_to_cur_stmt ();
	set_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	set_dispattr_with_conflict (clause_name, attrib, confl_name,
				    confl_attrib);
}

static cob_flags_t
zero_conflicting_flag (const cob_flags_t screen_flag, cob_flags_t parent_flag,
				const cob_flags_t flag1, const cob_flags_t flag2)
{
	if (screen_flag & flag1) {
		parent_flag &= ~flag2;
	} else if (screen_flag & flag2) {
		parent_flag &= ~flag1;
	}

	return parent_flag;
}

static cob_flags_t
zero_conflicting_flags (const cob_flags_t screen_flag, cob_flags_t parent_flag)
{
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_BLANK_LINE,
					     COB_SCREEN_BLANK_SCREEN);
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_ERASE_EOL,
					     COB_SCREEN_ERASE_EOS);
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_HIGHLIGHT,
					     COB_SCREEN_LOWLIGHT);

	return parent_flag;
}

static void
check_and_set_usage (const enum cb_usage usage)
{
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	current_field->usage = usage;
}

static void
check_preceding_tallying_phrases (const enum tallying_phrase phrase)
{
	switch (phrase) {
	case FOR_PHRASE:
		if (previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES) {
			cb_error (_("FOR phrase cannot immediately follow ALL/LEADING/TRAILING"));
		} else if (previous_tallying_phrase == FOR_PHRASE) {
			cb_error (_("missing CHARACTERS/ALL/LEADING/TRAILING phrase after FOR phrase"));
		}
		break;

	case CHARACTERS_PHRASE:
	case ALL_LEADING_TRAILING_PHRASES:
		if (previous_tallying_phrase == NO_PHRASE) {
			cb_error (_("missing FOR phrase before CHARACTERS/ALL/LEADING/TRAILING phrase"));
		} else if (previous_tallying_phrase == CHARACTERS_PHRASE
			   || previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES) {
			cb_error (_("missing value between CHARACTERS/ALL/LEADING/TRAILING words"));
		}
		break;

	case VALUE_REGION_PHRASE:
		if (!(previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES
		      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
			cb_error (_("missing ALL/LEADING/TRAILING before value"));
		}
		break;

	default:
		/* This should never happen */
		cb_error (_("unexpected tallying phrase"));
		COBC_ABORT();
	}

	previous_tallying_phrase = phrase;
}

static int
has_relative_pos (struct cb_field const *field)
{
	return !!(field->screen_flag
		  & (COB_SCREEN_LINE_PLUS | COB_SCREEN_LINE_MINUS
		     | COB_SCREEN_COLUMN_PLUS | COB_SCREEN_COLUMN_MINUS));
}

static int
is_recursive_call (cb_tree target)
{
	const char *target_name = "";

	if (CB_LITERAL_P (target)) {
		target_name = (const char *)(CB_LITERAL(target)->data);
	} else if (CB_REFERENCE_P (target)
		   && CB_PROTOTYPE_P (cb_ref (target))) {
		target_name = CB_PROTOTYPE (cb_ref (target))->ext_name;
	}

	return !strcmp (target_name, current_program->orig_program_id);
}

static void
check_not_88_level (cb_tree x)
{
	struct cb_field	*f;

	if (x == cb_error_node || x->tag != CB_TAG_REFERENCE) {
		return;
	}

	f = CB_FIELD (cb_ref (x));

	if (f != (struct cb_field *) cb_error_node && f->level == 88) {
		cb_error (_("88-level cannot be used here"));
	}
}

static int
is_screen_field (cb_tree x)
{
	if (CB_FIELD_P (x)) {
		return (CB_FIELD (x))->storage == CB_STORAGE_SCREEN;
	} else if (CB_REFERENCE_P (x)) {
		return is_screen_field (cb_ref (x));
	} else {
		return 0;
	}
}

static void
error_if_no_advancing_in_screen_display (cb_tree advancing)
{
	if (advancing != cb_int1) {
		cb_error (_("cannot specify NO ADVANCING in screen DISPLAY"));
	}
}

static cb_tree
get_default_display_device (void)
{
	if (current_program->flag_console_is_crt
	    || cb_console_is_crt) {
		return cb_null;
	} else {
		return cb_int0;
	}
}

static COB_INLINE COB_A_INLINE int
contains_one_screen_field (struct cb_list *x_list)
{
	return (cb_tree) x_list != cb_null
		&& cb_list_length ((cb_tree) x_list) == 1
		&& is_screen_field (x_list->value);
}

static int
contains_only_screen_fields (struct cb_list *x_list)
{
	if ((cb_tree) x_list == cb_null) {
		return 0;
	}

	for (; x_list; x_list = (struct cb_list *) x_list->chain) {
		if (!is_screen_field (x_list->value)) {
			return 0;
		}
	}

	return 1;
}

static int
contains_fields_and_screens (struct cb_list *x_list)
{
	int	field_seen = 0;
	int	screen_seen = 0;

	if ((cb_tree) x_list == cb_null) {
		return 0;
	}

	for (; x_list; x_list = (struct cb_list *) x_list->chain) {
		if (is_screen_field (x_list->value)) {
			screen_seen = 1;
		} else {
			field_seen = 1;
		}
	}

	return screen_seen && field_seen;
}

static enum cb_display_type
deduce_display_type (cb_tree x_list, cb_tree local_upon_value, cb_tree local_line_column,
		     struct cb_attr_struct * const attr_ptr)
{
	int	using_default_device_which_is_crt =
		local_upon_value == NULL && get_default_display_device () == cb_null;

	if (contains_only_screen_fields ((struct cb_list *) x_list)) {
		if (!contains_one_screen_field ((struct cb_list *) x_list)
		    || attr_ptr) {
			cb_verify_x (x_list, cb_accept_display_extensions,
				     _("non-standard DISPLAY"));
		}

		if (local_upon_value != NULL && local_upon_value != cb_null) {
			cb_error_x (x_list, _("screens may only be displayed on CRT"));
		}

		return SCREEN_DISPLAY;
	} else if (contains_fields_and_screens ((struct cb_list *) x_list)) {
		cb_error_x (x_list, _("cannot mix screens and fields in the same DISPLAY statement"));
		return MIXED_DISPLAY;
	} else if (local_line_column || attr_ptr) {
		if (local_upon_value != NULL && local_upon_value != cb_null) {
			cb_error_x (x_list, _("screen clauses may only be used for DISPLAY on CRT"));
		}

		cb_verify_x (x_list, cb_accept_display_extensions,
			     _("non-standard DISPLAY"));

		return FIELD_ON_SCREEN_DISPLAY;
	} else if (local_upon_value == cb_null || using_default_device_which_is_crt) {
		/* This is the only format permitted by the standard */
		return FIELD_ON_SCREEN_DISPLAY;
	} else if (display_type == FIELD_ON_SCREEN_DISPLAY && local_upon_value == NULL) {
		/* This is for when fields without clauses follow fields with screen clauses */
		return FIELD_ON_SCREEN_DISPLAY;
	} else {
		return DEVICE_DISPLAY;
	}
}

static void
set_display_type (cb_tree x_list, cb_tree local_upon_value,
		  cb_tree local_line_column, struct cb_attr_struct * const attr_ptr)
{
	display_type = deduce_display_type (x_list, local_upon_value, local_line_column, attr_ptr);
}

static void
error_if_different_display_type (cb_tree x_list, cb_tree local_upon_value,
				 cb_tree local_line_column, struct cb_attr_struct * const attr_ptr)
{
        const enum cb_display_type	type =
		deduce_display_type (x_list, local_upon_value, local_line_column, attr_ptr);

	/* Avoid re-displaying the same error for mixed DISPLAYs */
	if (type == display_type || display_type == MIXED_DISPLAY) {
		return;
	}

	if (type != MIXED_DISPLAY) {
		if (type == SCREEN_DISPLAY || display_type == SCREEN_DISPLAY) {
			cb_error_x (x_list, _("cannot mix screens and fields in the same DISPLAY statement"));
		} else {
			/*
			  The only other option is that there is a mix of
			  FIELD_ON_SCREEN_DISPLAY and DEVICE_DISPLAY.
			*/
			cb_error_x (x_list, _("ambiguous DISPLAY; put items to display on device in separate DISPLAY"));
		}
	}

	display_type = MIXED_DISPLAY;
}

static void
error_if_not_usage_display_or_nonnumeric_lit (cb_tree x)
{
	const int	is_numeric_literal = CB_NUMERIC_LITERAL_P (x);
	const int	is_field_with_usage_not_display =
		CB_REFERENCE_P (x) && CB_FIELD_P (cb_ref (x))
		&& CB_FIELD (cb_ref (x))->usage != CB_USAGE_DISPLAY;

	if (is_numeric_literal) {
		cb_error_x (x, _("%s is not an alphanumeric literal"), CB_LITERAL (x)->data);
	} else if (is_field_with_usage_not_display) {
		cb_error_x (x, _("'%s' is not USAGE DISPLAY"), cb_name (x));
	}
}


#line 1614 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_EOF = 0,
    ACCEPT = 258,
    ACCESS = 259,
    ADD = 260,
    ADDRESS = 261,
    ADVANCING = 262,
    AFTER = 263,
    ALL = 264,
    ALLOCATE = 265,
    ALPHABET = 266,
    ALPHABETIC = 267,
    ALPHABETIC_LOWER = 268,
    ALPHABETIC_UPPER = 269,
    ALPHANUMERIC = 270,
    ALPHANUMERIC_EDITED = 271,
    ALSO = 272,
    ALTER = 273,
    ALTERNATE = 274,
    AND = 275,
    ANY = 276,
    ARE = 277,
    AREA = 278,
    AREAS = 279,
    ARGUMENT_NUMBER = 280,
    ARGUMENT_VALUE = 281,
    AS = 282,
    ASCENDING = 283,
    ASCII = 284,
    ASSIGN = 285,
    AT = 286,
    ATTRIBUTE = 287,
    AUTO = 288,
    AUTOMATIC = 289,
    AWAY_FROM_ZERO = 290,
    BACKGROUND_COLOR = 291,
    BASED = 292,
    BEFORE = 293,
    BELL = 294,
    BINARY = 295,
    BINARY_C_LONG = 296,
    BINARY_CHAR = 297,
    BINARY_DOUBLE = 298,
    BINARY_LONG = 299,
    BINARY_SHORT = 300,
    BLANK = 301,
    BLINK = 302,
    BLOCK = 303,
    BOTTOM = 304,
    BY = 305,
    BYTE_LENGTH = 306,
    CALL = 307,
    CANCEL = 308,
    CAPACITY = 309,
    CD = 310,
    CF = 311,
    CH = 312,
    CHAINING = 313,
    CHARACTER = 314,
    CHARACTERS = 315,
    CLASS = 316,
    CLASSIFICATION = 317,
    CLASS_NAME = 318,
    CLOSE = 319,
    CODE = 320,
    CODE_SET = 321,
    COLLATING = 322,
    COL = 323,
    COLS = 324,
    COLUMN = 325,
    COLUMNS = 326,
    COMMA = 327,
    COMMAND_LINE = 328,
    COMMA_DELIM = 329,
    COMMIT = 330,
    COMMON = 331,
    COMMUNICATION = 332,
    COMP = 333,
    COMPUTE = 334,
    COMP_1 = 335,
    COMP_2 = 336,
    COMP_3 = 337,
    COMP_4 = 338,
    COMP_5 = 339,
    COMP_6 = 340,
    COMP_X = 341,
    CONCATENATE_FUNC = 342,
    CONDITION = 343,
    CONFIGURATION = 344,
    CONSTANT = 345,
    CONTAINS = 346,
    CONTENT = 347,
    CONTINUE = 348,
    CONTROL = 349,
    CONTROLS = 350,
    CONVERSION = 351,
    CONVERTING = 352,
    COPY = 353,
    CORRESPONDING = 354,
    COUNT = 355,
    CRT = 356,
    CRT_UNDER = 357,
    CURRENCY = 358,
    CURRENT_DATE_FUNC = 359,
    CURSOR = 360,
    CYCLE = 361,
    DATA = 362,
    DATE = 363,
    DAY = 364,
    DAY_OF_WEEK = 365,
    DE = 366,
    DEBUGGING = 367,
    DECIMAL_POINT = 368,
    DECLARATIVES = 369,
    DEFAULT = 370,
    DELETE = 371,
    DELIMITED = 372,
    DELIMITER = 373,
    DEPENDING = 374,
    DESCENDING = 375,
    DETAIL = 376,
    DISC = 377,
    DISK = 378,
    DISPLAY = 379,
    DISPLAY_OF_FUNC = 380,
    DIVIDE = 381,
    DIVISION = 382,
    DOWN = 383,
    DUPLICATES = 384,
    DYNAMIC = 385,
    EBCDIC = 386,
    EC = 387,
    ECHO = 388,
    EIGHTY_EIGHT = 389,
    ELSE = 390,
    END = 391,
    END_ACCEPT = 392,
    END_ADD = 393,
    END_CALL = 394,
    END_COMPUTE = 395,
    END_DELETE = 396,
    END_DISPLAY = 397,
    END_DIVIDE = 398,
    END_EVALUATE = 399,
    END_FUNCTION = 400,
    END_IF = 401,
    END_MULTIPLY = 402,
    END_PERFORM = 403,
    END_PROGRAM = 404,
    END_READ = 405,
    END_RETURN = 406,
    END_REWRITE = 407,
    END_SEARCH = 408,
    END_START = 409,
    END_STRING = 410,
    END_SUBTRACT = 411,
    END_UNSTRING = 412,
    END_WRITE = 413,
    ENTRY = 414,
    ENVIRONMENT = 415,
    ENVIRONMENT_NAME = 416,
    ENVIRONMENT_VALUE = 417,
    EOL = 418,
    EOP = 419,
    EOS = 420,
    EQUAL = 421,
    ERASE = 422,
    ERROR = 423,
    ESCAPE = 424,
    EVALUATE = 425,
    EVENT_STATUS = 426,
    EXCEPTION = 427,
    EXCEPTION_CONDITION = 428,
    EXCLUSIVE = 429,
    EXIT = 430,
    EXPONENTIATION = 431,
    EXTEND = 432,
    EXTERNAL = 433,
    F = 434,
    FD = 435,
    FILE_CONTROL = 436,
    FILE_ID = 437,
    FILLER = 438,
    FINAL = 439,
    FIRST = 440,
    FIXED = 441,
    FLOAT_BINARY_128 = 442,
    FLOAT_BINARY_32 = 443,
    FLOAT_BINARY_64 = 444,
    FLOAT_DECIMAL_16 = 445,
    FLOAT_DECIMAL_34 = 446,
    FLOAT_DECIMAL_7 = 447,
    FLOAT_EXTENDED = 448,
    FLOAT_LONG = 449,
    FLOAT_SHORT = 450,
    FOOTING = 451,
    FOR = 452,
    FOREGROUND_COLOR = 453,
    FOREVER = 454,
    FORMATTED_DATE_FUNC = 455,
    FORMATTED_DATETIME_FUNC = 456,
    FORMATTED_TIME_FUNC = 457,
    FREE = 458,
    FROM = 459,
    FROM_CRT = 460,
    FULL = 461,
    FUNCTION = 462,
    FUNCTION_ID = 463,
    FUNCTION_NAME = 464,
    GENERATE = 465,
    GIVING = 466,
    GLOBAL = 467,
    GO = 468,
    GOBACK = 469,
    GREATER = 470,
    GREATER_OR_EQUAL = 471,
    GRID = 472,
    GROUP = 473,
    HEADING = 474,
    HIGHLIGHT = 475,
    HIGH_VALUE = 476,
    ID = 477,
    IDENTIFICATION = 478,
    IF = 479,
    IGNORE = 480,
    IGNORING = 481,
    IN = 482,
    INDEX = 483,
    INDEXED = 484,
    INDICATE = 485,
    INITIALIZE = 486,
    INITIALIZED = 487,
    INITIATE = 488,
    INPUT = 489,
    INPUT_OUTPUT = 490,
    INSPECT = 491,
    INTO = 492,
    INTRINSIC = 493,
    INVALID = 494,
    INVALID_KEY = 495,
    IS = 496,
    I_O = 497,
    I_O_CONTROL = 498,
    JUSTIFIED = 499,
    KEPT = 500,
    KEY = 501,
    KEYBOARD = 502,
    LABEL = 503,
    LAST = 504,
    LEADING = 505,
    LEFT = 506,
    LEFTLINE = 507,
    LENGTH = 508,
    LENGTH_OF = 509,
    LESS = 510,
    LESS_OR_EQUAL = 511,
    LIMIT = 512,
    LIMITS = 513,
    LINAGE = 514,
    LINAGE_COUNTER = 515,
    LINE = 516,
    LINE_COUNTER = 517,
    LINES = 518,
    LINKAGE = 519,
    LITERAL = 520,
    LOCALE = 521,
    LOCALE_DATE_FUNC = 522,
    LOCALE_TIME_FUNC = 523,
    LOCALE_TIME_FROM_FUNC = 524,
    LOCAL_STORAGE = 525,
    LOCK = 526,
    LOWER = 527,
    LOWER_CASE_FUNC = 528,
    LOWLIGHT = 529,
    LOW_VALUE = 530,
    MANUAL = 531,
    MEMORY = 532,
    MERGE = 533,
    MINUS = 534,
    MNEMONIC_NAME = 535,
    MODE = 536,
    MOVE = 537,
    MULTIPLE = 538,
    MULTIPLY = 539,
    NAME = 540,
    NATIONAL = 541,
    NATIONAL_EDITED = 542,
    NATIONAL_OF_FUNC = 543,
    NATIVE = 544,
    NEAREST_AWAY_FROM_ZERO = 545,
    NEAREST_EVEN = 546,
    NEAREST_TOWARD_ZERO = 547,
    NEGATIVE = 548,
    NEXT = 549,
    NEXT_PAGE = 550,
    NO = 551,
    NO_ECHO = 552,
    NORMAL = 553,
    NOT = 554,
    NOTHING = 555,
    NOT_END = 556,
    NOT_EOP = 557,
    NOT_ESCAPE = 558,
    NOT_EQUAL = 559,
    NOT_EXCEPTION = 560,
    NOT_INVALID_KEY = 561,
    NOT_OVERFLOW = 562,
    NOT_SIZE_ERROR = 563,
    NO_ADVANCING = 564,
    NUMBER = 565,
    NUMBERS = 566,
    NUMERIC = 567,
    NUMERIC_EDITED = 568,
    NUMVALC_FUNC = 569,
    OBJECT_COMPUTER = 570,
    OCCURS = 571,
    OF = 572,
    OFF = 573,
    OMITTED = 574,
    ON = 575,
    ONLY = 576,
    OPEN = 577,
    OPTIONAL = 578,
    OR = 579,
    ORDER = 580,
    ORGANIZATION = 581,
    OTHER = 582,
    OUTPUT = 583,
    OVERLINE = 584,
    PACKED_DECIMAL = 585,
    PADDING = 586,
    PAGE = 587,
    PAGE_COUNTER = 588,
    PARAGRAPH = 589,
    PERFORM = 590,
    PH = 591,
    PF = 592,
    PICTURE = 593,
    PICTURE_SYMBOL = 594,
    PLUS = 595,
    POINTER = 596,
    POSITION = 597,
    POSITIVE = 598,
    PRESENT = 599,
    PREVIOUS = 600,
    PRINT = 601,
    PRINTER = 602,
    PRINTER_1 = 603,
    PRINTING = 604,
    PROCEDURE = 605,
    PROCEDURES = 606,
    PROCEED = 607,
    PROGRAM = 608,
    PROGRAM_ID = 609,
    PROGRAM_NAME = 610,
    PROGRAM_POINTER = 611,
    PROHIBITED = 612,
    PROMPT = 613,
    PROTECTED = 614,
    QUOTE = 615,
    RANDOM = 616,
    RD = 617,
    READ = 618,
    READY_TRACE = 619,
    RECORD = 620,
    RECORDING = 621,
    RECORDS = 622,
    RECURSIVE = 623,
    REDEFINES = 624,
    REEL = 625,
    REFERENCE = 626,
    REFERENCES = 627,
    RELATIVE = 628,
    RELEASE = 629,
    REMAINDER = 630,
    REMOVAL = 631,
    RENAMES = 632,
    REPLACE = 633,
    REPLACING = 634,
    REPORT = 635,
    REPORTING = 636,
    REPORTS = 637,
    REPOSITORY = 638,
    REQUIRED = 639,
    RESERVE = 640,
    RESET = 641,
    RESET_TRACE = 642,
    RETRY = 643,
    RETURN = 644,
    RETURNING = 645,
    REVERSE = 646,
    REVERSE_FUNC = 647,
    REVERSE_VIDEO = 648,
    REVERSED = 649,
    REWIND = 650,
    REWRITE = 651,
    RF = 652,
    RH = 653,
    RIGHT = 654,
    ROLLBACK = 655,
    ROUNDED = 656,
    RUN = 657,
    S = 658,
    SAME = 659,
    SCREEN = 660,
    SCREEN_CONTROL = 661,
    SCROLL = 662,
    SD = 663,
    SEARCH = 664,
    SECONDS = 665,
    SECTION = 666,
    SECURE = 667,
    SEGMENT_LIMIT = 668,
    SELECT = 669,
    SEMI_COLON = 670,
    SENTENCE = 671,
    SEPARATE = 672,
    SEQUENCE = 673,
    SEQUENTIAL = 674,
    SET = 675,
    SEVENTY_EIGHT = 676,
    SHARING = 677,
    SIGN = 678,
    SIGNED = 679,
    SIGNED_INT = 680,
    SIGNED_LONG = 681,
    SIGNED_SHORT = 682,
    SIXTY_SIX = 683,
    SIZE = 684,
    SIZE_ERROR = 685,
    SORT = 686,
    SORT_MERGE = 687,
    SOURCE = 688,
    SOURCE_COMPUTER = 689,
    SPACE = 690,
    SPECIAL_NAMES = 691,
    STANDARD = 692,
    STANDARD_1 = 693,
    STANDARD_2 = 694,
    START = 695,
    STATIC = 696,
    STATUS = 697,
    STDCALL = 698,
    STEP = 699,
    STOP = 700,
    STRING = 701,
    SUBSTITUTE_FUNC = 702,
    SUBSTITUTE_CASE_FUNC = 703,
    SUBTRACT = 704,
    SUM = 705,
    SUPPRESS = 706,
    SYMBOLIC = 707,
    SYNCHRONIZED = 708,
    SYSTEM_DEFAULT = 709,
    SYSTEM_OFFSET = 710,
    TAB = 711,
    TALLYING = 712,
    TAPE = 713,
    TERMINATE = 714,
    TEST = 715,
    THAN = 716,
    THEN = 717,
    THRU = 718,
    TIME = 719,
    TIME_OUT = 720,
    TIMES = 721,
    TO = 722,
    TOK_AMPER = 723,
    TOK_CLOSE_PAREN = 724,
    TOK_COLON = 725,
    TOK_DIV = 726,
    TOK_DOT = 727,
    TOK_EQUAL = 728,
    TOK_FALSE = 729,
    TOK_FILE = 730,
    TOK_GREATER = 731,
    TOK_INITIAL = 732,
    TOK_LESS = 733,
    TOK_MINUS = 734,
    TOK_MUL = 735,
    TOK_NULL = 736,
    TOK_OVERFLOW = 737,
    TOK_OPEN_PAREN = 738,
    TOK_PLUS = 739,
    TOK_TRUE = 740,
    TOP = 741,
    TOWARD_GREATER = 742,
    TOWARD_LESSER = 743,
    TRAILING = 744,
    TRANSFORM = 745,
    TRIM_FUNC = 746,
    TRUNCATION = 747,
    TYPE = 748,
    U = 749,
    UNDERLINE = 750,
    UNIT = 751,
    UNLOCK = 752,
    UNSIGNED = 753,
    UNSIGNED_INT = 754,
    UNSIGNED_LONG = 755,
    UNSIGNED_SHORT = 756,
    UNSTRING = 757,
    UNTIL = 758,
    UP = 759,
    UPDATE = 760,
    UPON = 761,
    UPON_ARGUMENT_NUMBER = 762,
    UPON_COMMAND_LINE = 763,
    UPON_ENVIRONMENT_NAME = 764,
    UPON_ENVIRONMENT_VALUE = 765,
    UPPER = 766,
    UPPER_CASE_FUNC = 767,
    USAGE = 768,
    USE = 769,
    USER = 770,
    USER_DEFAULT = 771,
    USER_FUNCTION_NAME = 772,
    USING = 773,
    V = 774,
    VALUE = 775,
    VARIABLE = 776,
    VARYING = 777,
    WAIT = 778,
    WHEN = 779,
    WHEN_COMPILED_FUNC = 780,
    WITH = 781,
    WORD = 782,
    WORDS = 783,
    WORKING_STORAGE = 784,
    WRITE = 785,
    YYYYDDD = 786,
    YYYYMMDD = 787,
    ZERO = 788,
    SHIFT_PREFER = 789,
    OVERFLOW = 790
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 2202 "parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9413

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  536
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  894
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2053
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2915

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   790

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2215,  2215,  2215,  2248,  2249,  2253,  2254,  2258,  2259,
    2263,  2263,  2286,  2297,  2303,  2304,  2308,  2309,  2313,  2321,
    2330,  2338,  2339,  2340,  2345,  2349,  2344,  2365,  2364,  2380,
    2391,  2395,  2396,  2400,  2401,  2404,  2405,  2409,  2418,  2427,
    2428,  2435,  2436,  2440,  2444,  2454,  2459,  2460,  2469,  2476,
    2477,  2487,  2488,  2489,  2490,  2491,  2504,  2503,  2513,  2514,
    2517,  2518,  2532,  2531,  2541,  2542,  2543,  2544,  2548,  2549,
    2553,  2554,  2555,  2556,  2560,  2568,  2575,  2582,  2593,  2597,
    2601,  2605,  2612,  2613,  2618,  2620,  2619,  2630,  2631,  2632,
    2639,  2640,  2644,  2648,  2654,  2655,  2665,  2670,  2680,  2681,
    2693,  2694,  2698,  2699,  2703,  2704,  2708,  2709,  2710,  2711,
    2712,  2713,  2714,  2715,  2716,  2717,  2718,  2719,  2727,  2726,
    2755,  2766,  2779,  2787,  2790,  2791,  2795,  2802,  2817,  2838,
    2837,  2861,  2867,  2873,  2879,  2885,  2891,  2901,  2905,  2912,
    2916,  2921,  2920,  2931,  2935,  2942,  2943,  2944,  2945,  2946,
    2947,  2951,  2952,  2959,  2974,  2977,  2984,  2992,  2996,  3007,
    3027,  3035,  3046,  3047,  3053,  3074,  3075,  3079,  3083,  3104,
    3127,  3202,  3205,  3214,  3233,  3249,  3267,  3285,  3302,  3319,
    3329,  3330,  3337,  3338,  3346,  3347,  3357,  3358,  3363,  3362,
    3392,  3393,  3397,  3398,  3399,  3400,  3401,  3402,  3403,  3404,
    3405,  3406,  3407,  3408,  3409,  3416,  3422,  3432,  3445,  3458,
    3485,  3486,  3487,  3491,  3492,  3493,  3494,  3497,  3498,  3504,
    3505,  3509,  3513,  3514,  3519,  3522,  3523,  3530,  3538,  3539,
    3540,  3547,  3571,  3573,  3578,  3588,  3596,  3611,  3618,  3620,
    3621,  3627,  3627,  3634,  3639,  3644,  3651,  3652,  3653,  3657,
    3668,  3669,  3673,  3678,  3683,  3688,  3699,  3710,  3720,  3728,
    3729,  3730,  3736,  3747,  3754,  3755,  3761,  3769,  3770,  3771,
    3777,  3778,  3779,  3786,  3787,  3791,  3792,  3798,  3826,  3827,
    3828,  3829,  3836,  3835,  3851,  3852,  3856,  3859,  3860,  3870,
    3867,  3884,  3885,  3893,  3894,  3902,  3903,  3907,  3928,  3927,
    3944,  3951,  3955,  3961,  3962,  3966,  3976,  3991,  3992,  3993,
    3994,  3995,  3996,  3997,  3998,  3999,  4006,  4013,  4013,  4013,
    4019,  4039,  4073,  4104,  4105,  4112,  4113,  4117,  4118,  4125,
    4136,  4141,  4152,  4153,  4157,  4158,  4164,  4175,  4193,  4194,
    4198,  4199,  4200,  4204,  4211,  4218,  4227,  4236,  4237,  4238,
    4239,  4240,  4249,  4250,  4256,  4291,  4292,  4305,  4320,  4321,
    4325,  4335,  4348,  4350,  4349,  4364,  4365,  4369,  4386,  4385,
    4408,  4409,  4416,  4420,  4425,  4434,  4436,  4435,  4451,  4454,
    4454,  4471,  4472,  4476,  4477,  4478,  4480,  4479,  4494,  4507,
    4515,  4520,  4526,  4530,  4540,  4543,  4555,  4556,  4557,  4558,
    4562,  4566,  4570,  4574,  4578,  4582,  4586,  4590,  4594,  4598,
    4602,  4606,  4610,  4621,  4622,  4626,  4627,  4631,  4632,  4633,
    4637,  4638,  4642,  4667,  4670,  4678,  4677,  4690,  4714,  4713,
    4727,  4731,  4740,  4744,  4753,  4754,  4755,  4756,  4757,  4758,
    4759,  4760,  4761,  4762,  4763,  4764,  4765,  4772,  4796,  4824,
    4827,  4835,  4836,  4840,  4865,  4876,  4877,  4881,  4885,  4889,
    4893,  4897,  4901,  4905,  4909,  4913,  4917,  4921,  4925,  4929,
    4934,  4939,  4943,  4947,  4955,  4959,  4963,  4971,  4975,  4979,
    4983,  4987,  4991,  4995,  4999,  5003,  5011,  5019,  5023,  5027,
    5031,  5035,  5039,  5047,  5048,  5052,  5053,  5059,  5066,  5079,
    5088,  5089,  5098,  5105,  5123,  5124,  5128,  5129,  5132,  5133,
    5139,  5140,  5147,  5148,  5155,  5179,  5180,  5197,  5198,  5201,
    5202,  5209,  5210,  5215,  5226,  5237,  5248,  5259,  5288,  5287,
    5296,  5297,  5301,  5302,  5305,  5306,  5318,  5327,  5341,  5343,
    5342,  5362,  5364,  5363,  5379,  5381,  5380,  5389,  5390,  5397,
    5396,  5409,  5410,  5411,  5418,  5423,  5427,  5428,  5434,  5441,
    5445,  5446,  5452,  5489,  5493,  5498,  5504,  5505,  5510,  5511,
    5512,  5513,  5514,  5518,  5525,  5532,  5539,  5546,  5552,  5553,
    5558,  5557,  5564,  5565,  5569,  5570,  5571,  5572,  5573,  5574,
    5575,  5576,  5577,  5578,  5579,  5580,  5581,  5582,  5583,  5584,
    5588,  5595,  5596,  5597,  5598,  5599,  5600,  5601,  5604,  5605,
    5606,  5609,  5610,  5614,  5621,  5627,  5628,  5632,  5633,  5637,
    5644,  5648,  5655,  5656,  5660,  5667,  5668,  5672,  5673,  5677,
    5678,  5679,  5683,  5684,  5688,  5689,  5693,  5700,  5707,  5715,
    5717,  5716,  5737,  5738,  5742,  5743,  5747,  5749,  5748,  5808,
    5826,  5827,  5831,  5836,  5841,  5845,  5849,  5854,  5859,  5864,
    5869,  5873,  5877,  5882,  5887,  5892,  5897,  5902,  5907,  5916,
    5920,  5924,  5929,  5933,  5937,  5942,  5947,  5952,  5957,  5958,
    5959,  5960,  5961,  5962,  5963,  5964,  5965,  5974,  5979,  5990,
    5991,  5995,  5996,  6000,  6001,  6005,  6006,  6011,  6014,  6018,
    6026,  6029,  6033,  6041,  6052,  6060,  6062,  6072,  6061,  6099,
    6099,  6132,  6136,  6135,  6149,  6148,  6168,  6169,  6174,  6196,
    6198,  6202,  6213,  6215,  6223,  6231,  6239,  6268,  6301,  6304,
    6317,  6322,  6332,  6363,  6365,  6364,  6401,  6402,  6406,  6407,
    6408,  6425,  6426,  6437,  6436,  6486,  6487,  6491,  6539,  6559,
    6562,  6581,  6586,  6580,  6599,  6599,  6629,  6636,  6637,  6638,
    6639,  6640,  6641,  6642,  6643,  6644,  6645,  6646,  6647,  6648,
    6649,  6650,  6651,  6652,  6653,  6654,  6655,  6656,  6657,  6658,
    6659,  6660,  6661,  6662,  6663,  6664,  6665,  6666,  6667,  6668,
    6669,  6670,  6671,  6672,  6673,  6674,  6675,  6676,  6677,  6678,
    6679,  6680,  6681,  6682,  6683,  6684,  6685,  6699,  6711,  6710,
    6721,  6720,  6745,  6749,  6753,  6758,  6763,  6768,  6773,  6777,
    6781,  6785,  6789,  6794,  6798,  6802,  6806,  6810,  6814,  6818,
    6825,  6826,  6832,  6834,  6838,  6839,  6843,  6844,  6848,  6852,
    6853,  6862,  6863,  6867,  6883,  6899,  6912,  6916,  6917,  6921,
    6928,  6934,  6940,  6945,  6950,  6955,  6960,  6966,  6971,  6977,
    6983,  6994,  6999,  7004,  7009,  7014,  7019,  7025,  7030,  7035,
    7040,  7046,  7052,  7058,  7063,  7068,  7075,  7082,  7091,  7092,
    7093,  7097,  7098,  7099,  7103,  7104,  7108,  7112,  7130,  7129,
    7138,  7142,  7146,  7152,  7153,  7160,  7164,  7175,  7174,  7183,
    7187,  7199,  7200,  7208,  7207,  7216,  7217,  7221,  7227,  7227,
    7234,  7233,  7246,  7245,  7279,  7283,  7288,  7293,  7313,  7314,
    7322,  7326,  7325,  7342,  7343,  7348,  7356,  7380,  7382,  7386,
    7395,  7408,  7411,  7415,  7419,  7424,  7447,  7448,  7452,  7453,
    7457,  7461,  7465,  7476,  7480,  7487,  7491,  7499,  7503,  7510,
    7517,  7521,  7532,  7531,  7543,  7547,  7554,  7555,  7565,  7564,
    7572,  7577,  7585,  7586,  7587,  7588,  7589,  7597,  7596,  7605,
    7612,  7616,  7626,  7637,  7655,  7654,  7663,  7667,  7671,  7676,
    7684,  7688,  7699,  7698,  7710,  7714,  7718,  7722,  7726,  7730,
    7738,  7747,  7748,  7753,  7752,  7797,  7801,  7809,  7810,  7814,
    7818,  7823,  7827,  7828,  7832,  7836,  7840,  7844,  7851,  7852,
    7856,  7861,  7867,  7873,  7878,  7883,  7889,  7895,  7901,  7907,
    7912,  7917,  7922,  7927,  7932,  7937,  7944,  7954,  7958,  7969,
    7968,  7977,  7981,  7985,  7989,  7993,  8000,  8004,  8015,  8014,
    8023,  8042,  8041,  8065,  8073,  8074,  8079,  8090,  8101,  8115,
    8119,  8126,  8127,  8132,  8141,  8150,  8155,  8164,  8165,  8170,
    8232,  8233,  8234,  8238,  8239,  8243,  8247,  8258,  8257,  8269,
    8270,  8291,  8305,  8327,  8349,  8369,  8392,  8393,  8401,  8400,
    8409,  8420,  8419,  8429,  8436,  8435,  8448,  8457,  8461,  8472,
    8488,  8487,  8496,  8500,  8504,  8511,  8515,  8526,  8525,  8533,
    8541,  8542,  8546,  8547,  8548,  8553,  8556,  8563,  8567,  8575,
    8582,  8583,  8584,  8585,  8586,  8587,  8588,  8593,  8596,  8606,
    8605,  8614,  8620,  8632,  8631,  8640,  8644,  8645,  8646,  8650,
    8651,  8652,  8653,  8660,  8659,  8680,  8690,  8699,  8703,  8710,
    8715,  8720,  8725,  8730,  8735,  8743,  8744,  8748,  8753,  8759,
    8761,  8762,  8763,  8764,  8768,  8796,  8799,  8803,  8807,  8811,
    8818,  8825,  8835,  8834,  8847,  8846,  8854,  8858,  8869,  8868,
    8877,  8881,  8888,  8892,  8903,  8902,  8910,  8911,  8915,  8940,
    8941,  8942,  8943,  8947,  8948,  8952,  8953,  8954,  8955,  8967,
    8966,  8978,  8985,  8984,  8996,  9005,  9013,  9020,  9024,  9037,
    9044,  9056,  9059,  9064,  9068,  9079,  9086,  9087,  9091,  9092,
    9095,  9096,  9101,  9112,  9111,  9120,  9149,  9150,  9154,  9158,
    9162,  9166,  9173,  9174,  9178,  9182,  9185,  9187,  9191,  9200,
    9201,  9202,  9205,  9207,  9211,  9212,  9216,  9224,  9225,  9229,
    9230,  9234,  9238,  9248,  9259,  9258,  9266,  9276,  9287,  9286,
    9295,  9302,  9306,  9317,  9316,  9328,  9337,  9340,  9344,  9348,
    9355,  9359,  9369,  9381,  9380,  9389,  9393,  9402,  9403,  9408,
    9411,  9419,  9423,  9430,  9438,  9442,  9453,  9452,  9466,  9467,
    9468,  9469,  9470,  9471,  9472,  9476,  9477,  9481,  9482,  9488,
    9497,  9504,  9505,  9509,  9513,  9517,  9523,  9529,  9533,  9537,
    9541,  9550,  9554,  9563,  9572,  9573,  9577,  9586,  9587,  9591,
    9595,  9604,  9614,  9613,  9622,  9621,  9653,  9656,  9676,  9677,
    9680,  9681,  9689,  9690,  9695,  9700,  9710,  9726,  9731,  9741,
    9758,  9757,  9767,  9780,  9783,  9791,  9794,  9799,  9804,  9812,
    9813,  9814,  9815,  9816,  9817,  9821,  9829,  9830,  9834,  9838,
    9849,  9848,  9858,  9871,  9874,  9878,  9882,  9890,  9902,  9905,
    9912,  9913,  9914,  9915,  9922,  9921,  9931,  9938,  9939,  9943,
    9958,  9959,  9964,  9965,  9969,  9970,  9974,  9978,  9989,  9988,
    9997, 10001, 10005, 10012, 10016, 10026, 10037, 10038, 10045, 10044,
   10053, 10059, 10071, 10070, 10078, 10092, 10091, 10099, 10116, 10115,
   10124, 10132, 10133, 10138, 10139, 10144, 10151, 10152, 10157, 10164,
   10165, 10169, 10170, 10174, 10175, 10179, 10183, 10194, 10193, 10202,
   10203, 10204, 10205, 10206, 10210, 10237, 10240, 10252, 10262, 10267,
   10272, 10277, 10285, 10323, 10324, 10328, 10368, 10378, 10401, 10402,
   10403, 10404, 10408, 10417, 10423, 10433, 10442, 10451, 10452, 10459,
   10458, 10470, 10480, 10481, 10486, 10489, 10493, 10497, 10504, 10505,
   10509, 10510, 10511, 10515, 10519, 10531, 10532, 10533, 10543, 10547,
   10554, 10562, 10563, 10567, 10568, 10572, 10580, 10581, 10586, 10587,
   10588, 10598, 10602, 10609, 10617, 10618, 10622, 10632, 10633, 10634,
   10644, 10648, 10655, 10663, 10664, 10668, 10678, 10679, 10680, 10690,
   10694, 10701, 10709, 10710, 10714, 10725, 10726, 10733, 10735, 10744,
   10748, 10755, 10763, 10764, 10768, 10778, 10779, 10789, 10793, 10800,
   10808, 10809, 10813, 10823, 10824, 10828, 10829, 10839, 10843, 10850,
   10858, 10859, 10863, 10873, 10877, 10887, 10894, 10901, 10901, 10912,
   10913, 10914, 10918, 10919, 10921, 10922, 10924, 10925, 10926, 10927,
   10928, 10930, 10931, 10932, 10933, 10934, 10935, 10937, 10938, 10939,
   10941, 10942, 10943, 10944, 10945, 10948, 10949, 10953, 10954, 10958,
   10959, 10963, 10964, 10968, 10972, 10978, 10982, 10988, 10989, 10990,
   10994, 10995, 10996, 11000, 11001, 11002, 11006, 11010, 11014, 11015,
   11016, 11019, 11020, 11030, 11042, 11051, 11063, 11072, 11084, 11099,
   11100, 11105, 11114, 11120, 11142, 11146, 11167, 11208, 11222, 11223,
   11228, 11234, 11235, 11240, 11252, 11253, 11254, 11261, 11272, 11273,
   11277, 11285, 11293, 11297, 11304, 11313, 11314, 11320, 11329, 11340,
   11357, 11361, 11368, 11369, 11370, 11377, 11378, 11382, 11386, 11393,
   11394, 11398, 11399, 11403, 11404, 11405, 11406, 11410, 11414, 11418,
   11422, 11426, 11447, 11451, 11458, 11459, 11460, 11464, 11465, 11466,
   11467, 11468, 11472, 11476, 11483, 11484, 11488, 11489, 11493, 11500,
   11507, 11508, 11509, 11513, 11514, 11518, 11522, 11526, 11530, 11531,
   11535, 11539, 11540, 11544, 11548, 11549, 11556, 11560, 11564, 11568,
   11572, 11576, 11577, 11583, 11587, 11591, 11592, 11596, 11603, 11613,
   11632, 11650, 11657, 11664, 11671, 11681, 11688, 11698, 11708, 11718,
   11731, 11735, 11743, 11751, 11755, 11765, 11779, 11802, 11824, 11840,
   11841, 11842, 11843, 11844, 11845, 11849, 11853, 11870, 11874, 11881,
   11882, 11883, 11884, 11885, 11886, 11887, 11893, 11897, 11901, 11905,
   11909, 11913, 11917, 11921, 11925, 11929, 11933, 11937, 11944, 11945,
   11949, 11950, 11951, 11955, 11956, 11957, 11958, 11962, 11966, 11970,
   11977, 11981, 11985, 11992, 11999, 12006, 12016, 12023, 12033, 12040,
   12050, 12054, 12067, 12071, 12086, 12094, 12095, 12099, 12100, 12104,
   12105, 12110, 12113, 12121, 12124, 12131, 12133, 12134, 12138, 12139,
   12143, 12144, 12145, 12150, 12153, 12166, 12170, 12178, 12182, 12186,
   12190, 12194, 12198, 12202, 12206, 12213, 12214, 12220, 12224, 12228,
   12235, 12236, 12237, 12238, 12239, 12240, 12241, 12242, 12243, 12244,
   12245, 12246, 12247, 12248, 12249, 12250, 12251, 12252, 12253, 12254,
   12255, 12256, 12257, 12258, 12259, 12260, 12261, 12262, 12263, 12264,
   12265, 12266, 12267, 12268, 12269, 12270, 12271, 12272, 12273, 12274,
   12275, 12276, 12277, 12278, 12279, 12280, 12281, 12282, 12283, 12287,
   12288, 12289, 12290, 12291, 12292, 12293, 12294, 12295, 12296, 12297,
   12298, 12299, 12300, 12301, 12302, 12303, 12304, 12305, 12306, 12313,
   12313, 12314, 12314, 12315, 12315, 12316, 12316, 12317, 12317, 12317,
   12318, 12318, 12319, 12319, 12320, 12320, 12321, 12321, 12322, 12322,
   12323, 12323, 12324, 12324, 12325, 12325, 12326, 12326, 12327, 12327,
   12328, 12328, 12329, 12329, 12330, 12330, 12331, 12331, 12332, 12332,
   12333, 12333, 12333, 12334, 12334, 12335, 12335, 12336, 12336, 12337,
   12337, 12338, 12338, 12338, 12339, 12339, 12340, 12340, 12340, 12341,
   12341, 12341, 12342, 12342, 12342, 12343, 12343, 12344, 12344, 12345,
   12345, 12346, 12346, 12346, 12347, 12347, 12348, 12348, 12349, 12349,
   12349, 12349, 12350, 12350, 12351, 12351, 12352, 12352, 12353, 12353,
   12354, 12354, 12354, 12355, 12355, 12356, 12356, 12357, 12357, 12358,
   12358, 12358, 12359, 12359, 12360, 12360, 12361, 12361, 12362, 12362,
   12363, 12363, 12364, 12364, 12365, 12365, 12366, 12366, 12366, 12367,
   12367, 12368, 12368, 12369, 12369, 12373, 12373, 12374, 12374, 12375,
   12375, 12376, 12376, 12377, 12377, 12378, 12378, 12379, 12379, 12380,
   12380, 12381, 12381, 12382, 12382, 12383, 12383, 12384, 12384, 12385,
   12385, 12386, 12386, 12387, 12387, 12390, 12391, 12392, 12396, 12396,
   12397, 12397, 12398, 12398, 12399, 12399, 12400, 12400, 12401, 12401,
   12402, 12402, 12403, 12403
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ACCEPT", "ACCESS", "ADD",
  "ADDRESS", "ADVANCING", "AFTER", "ALL", "ALLOCATE", "ALPHABET",
  "ALPHABETIC", "\"ALPHABETIC-LOWER\"", "\"ALPHABETIC-UPPER\"",
  "ALPHANUMERIC", "\"ALPHANUMERIC-EDITED\"", "ALSO", "ALTER", "ALTERNATE",
  "AND", "ANY", "ARE", "AREA", "AREAS", "\"ARGUMENT-NUMBER\"",
  "\"ARGUMENT-VALUE\"", "AS", "ASCENDING", "ASCII", "ASSIGN", "AT",
  "ATTRIBUTE", "AUTO", "AUTOMATIC", "\"AWAY-FROM-ZERO\"",
  "\"BACKGROUND-COLOR\"", "BASED", "BEFORE", "BELL", "BINARY",
  "\"BINARY-C-LONG\"", "\"BINARY-CHAR\"", "\"BINARY-DOUBLE\"",
  "\"BINARY-LONG\"", "\"BINARY-SHORT\"", "BLANK", "BLINK", "BLOCK",
  "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL", "CAPACITY", "CD",
  "CF", "CH", "CHAINING", "CHARACTER", "CHARACTERS", "CLASS",
  "CLASSIFICATION", "\"class-name\"", "CLOSE", "CODE", "\"CODE-SET\"",
  "COLLATING", "COL", "COLS", "COLUMN", "COLUMNS", "COMMA",
  "\"COMMAND-LINE\"", "\"comma delimiter\"", "COMMIT", "COMMON",
  "COMMUNICATION", "COMP", "COMPUTE", "\"COMP-1\"", "\"COMP-2\"",
  "\"COMP-3\"", "\"COMP-4\"", "\"COMP-5\"", "\"COMP-6\"", "\"COMP-X\"",
  "\"FUNCTION CONCATENATE\"", "CONDITION", "CONFIGURATION", "CONSTANT",
  "CONTAINS", "CONTENT", "CONTINUE", "CONTROL", "CONTROLS", "CONVERSION",
  "CONVERTING", "COPY", "CORRESPONDING", "COUNT", "CRT", "\"CRT-UNDER\"",
  "CURRENCY", "\"FUNCTION CURRENT-DATE\"", "CURSOR", "CYCLE", "DATA",
  "DATE", "DAY", "\"DAY-OF-WEEK\"", "DE", "DEBUGGING", "\"DECIMAL-POINT\"",
  "DECLARATIVES", "DEFAULT", "DELETE", "DELIMITED", "DELIMITER",
  "DEPENDING", "DESCENDING", "DETAIL", "DISC", "DISK", "DISPLAY",
  "\"FUNCTION DISPLAY-OF\"", "DIVIDE", "DIVISION", "DOWN", "DUPLICATES",
  "DYNAMIC", "EBCDIC", "EC", "ECHO", "\"88\"", "ELSE", "END",
  "\"END-ACCEPT\"", "\"END-ADD\"", "\"END-CALL\"", "\"END-COMPUTE\"",
  "\"END-DELETE\"", "\"END-DISPLAY\"", "\"END-DIVIDE\"",
  "\"END-EVALUATE\"", "\"END FUNCTION\"", "\"END-IF\"", "\"END-MULTIPLY\"",
  "\"END-PERFORM\"", "\"END PROGRAM\"", "\"END-READ\"", "\"END-RETURN\"",
  "\"END-REWRITE\"", "\"END-SEARCH\"", "\"END-START\"", "\"END-STRING\"",
  "\"END-SUBTRACT\"", "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY",
  "ENVIRONMENT", "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL",
  "EOP", "EOS", "EQUAL", "ERASE", "ERROR", "ESCAPE", "EVALUATE",
  "\"EVENT STATUS\"", "EXCEPTION", "\"EXCEPTION CONDITION\"", "EXCLUSIVE",
  "EXIT", "\"Exponentiation operator\"", "EXTEND", "EXTERNAL", "F", "FD",
  "\"FILE-CONTROL\"", "\"FILE-ID\"", "FILLER", "FINAL", "FIRST", "FIXED",
  "\"FLOAT-BINARY-128\"", "\"FLOAT-BINARY-32\"", "\"FLOAT-BINARY-64\"",
  "\"FLOAT-DECIMAL-16\"", "\"FLOAT-DECIMAL-34\"", "\"FLOAT-DECIMAL-7\"",
  "\"FLOAT-EXTENDED\"", "\"FLOAT-LONG\"", "\"FLOAT-SHORT\"", "FOOTING",
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER", "\"FUNCTION FORMATTED-DATE\"",
  "\"FUNCTION FORMATTED-DATETIME\"", "\"FUNCTION FORMATTED-TIME\"", "FREE",
  "FROM", "\"FROM CRT\"", "FULL", "FUNCTION", "\"FUNCTION-ID\"",
  "\"Intrinsic function name\"", "GENERATE", "GIVING", "GLOBAL", "GO",
  "GOBACK", "GREATER", "\"GREATER OR EQUAL\"", "GRID", "GROUP", "HEADING",
  "HIGHLIGHT", "\"HIGH-VALUE\"", "ID", "IDENTIFICATION", "IF", "IGNORE",
  "IGNORING", "IN", "INDEX", "INDEXED", "INDICATE", "INITIALIZE",
  "INITIALIZED", "INITIATE", "INPUT", "\"INPUT-OUTPUT\"", "INSPECT",
  "INTO", "INTRINSIC", "INVALID", "\"INVALID KEY\"", "IS", "\"I-O\"",
  "\"I-O-CONTROL\"", "JUSTIFIED", "KEPT", "KEY", "KEYBOARD", "LABEL",
  "LAST", "LEADING", "LEFT", "LEFTLINE", "LENGTH", "\"LENGTH OF\"", "LESS",
  "\"LESS OR EQUAL\"", "LIMIT", "LIMITS", "LINAGE", "\"LINAGE-COUNTER\"",
  "LINE", "\"LINE-COUNTER\"", "LINES", "LINKAGE", "\"Literal\"", "LOCALE",
  "\"FUNCTION LOCALE-DATE\"", "\"FUNCTION LOCALE-TIME\"",
  "\"FUNCTION LOCALE-TIME-FROM-SECONDS\"", "\"LOCAL-STORAGE\"", "LOCK",
  "LOWER", "\"FUNCTION LOWER-CASE\"", "LOWLIGHT", "\"LOW-VALUE\"",
  "MANUAL", "MEMORY", "MERGE", "MINUS", "\"Mnemonic name\"", "MODE",
  "MOVE", "MULTIPLE", "MULTIPLY", "NAME", "NATIONAL",
  "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NEXT", "\"NEXT PAGE\"", "NO",
  "\"NO-ECHO\"", "NORMAL", "NOT", "NOTHING", "\"NOT END\"", "\"NOT EOP\"",
  "\"NOT ESCAPE\"", "\"NOT EQUAL\"", "\"NOT EXCEPTION\"",
  "\"NOT INVALID KEY\"", "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"",
  "\"NO ADVANCING\"", "NUMBER", "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"",
  "\"FUNCTION NUMVAL-C\"", "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF",
  "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OUTPUT", "OVERLINE", "\"PACKED-DECIMAL\"",
  "PADDING", "PAGE", "\"PAGE-COUNTER\"", "PARAGRAPH", "PERFORM", "PH",
  "PF", "PICTURE", "\"PICTURE SYMBOL\"", "PLUS", "POINTER", "POSITION",
  "POSITIVE", "PRESENT", "PREVIOUS", "PRINT", "PRINTER", "PRINTER_1",
  "PRINTING", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM",
  "\"PROGRAM-ID\"", "\"Program name\"", "\"PROGRAM-POINTER\"",
  "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUOTE", "RANDOM", "RD", "READ",
  "\"READY TRACE\"", "RECORD", "RECORDING", "RECORDS", "RECURSIVE",
  "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE", "RELEASE",
  "REMAINDER", "REMOVAL", "RENAMES", "REPLACE", "REPLACING", "REPORT",
  "REPORTING", "REPORTS", "REPOSITORY", "REQUIRED", "RESERVE", "RESET",
  "\"RESET TRACE\"", "RETRY", "RETURN", "RETURNING", "REVERSE",
  "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED", "REWIND",
  "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "S",
  "SAME", "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH",
  "SECONDS", "SECTION", "SECURE", "\"SEGMENT-LIMIT\"", "SELECT",
  "\"semi-colon\"", "SENTENCE", "SEPARATE", "SEQUENCE", "SEQUENTIAL",
  "SET", "\"78\"", "SHARING", "SIGN", "SIGNED", "\"SIGNED-INT\"",
  "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "\"66\"", "SIZE",
  "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
  "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"", "STANDARD",
  "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC", "STATUS",
  "STDCALL", "STEP", "STOP", "STRING", "\"FUNCTION SUBSTITUTE\"",
  "\"FUNCTION SUBSTITUTE-CASE\"", "SUBTRACT", "SUM", "SUPPRESS",
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "\"SYSTEM-OFFSET\"",
  "TAB", "TALLYING", "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU",
  "TIME", "\"TIME-OUT\"", "TIMES", "TO", "\"&\"", "\")\"", "\":\"",
  "\"/\"", "\".\"", "\"=\"", "\"FALSE\"", "\"FILE\"", "\">\"",
  "\"INITIAL\"", "\"<\"", "\"-\"", "\"*\"", "\"NULL\"", "\"OVERFLOW\"",
  "\"(\"", "\"+\"", "\"TRUE\"", "TOP", "\"TOWARD-GREATER\"",
  "\"TOWARD-LESSER\"", "TRAILING", "TRANSFORM", "\"FUNCTION TRIM\"",
  "TRUNCATION", "TYPE", "U", "UNDERLINE", "UNIT", "UNLOCK", "UNSIGNED",
  "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"", "\"UNSIGNED-SHORT\"",
  "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON", "\"UPON ARGUMENT-NUMBER\"",
  "\"UPON COMMAND-LINE\"", "\"UPON ENVIRONMENT-NAME\"",
  "\"UPON ENVIRONMENT-VALUE\"", "UPPER", "\"FUNCTION UPPER-CASE\"",
  "USAGE", "USE", "USER", "\"USER-DEFAULT\"", "\"User function name\"",
  "USING", "V", "VALUE", "VARIABLE", "VARYING", "WAIT", "WHEN",
  "\"FUNCTION WHEN-COMPILED\"", "WITH", "\"Identifier\"", "WORDS",
  "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD", "YYYYMMDD", "ZERO",
  "SHIFT_PREFER", "OVERFLOW", "$accept", "start", "$@1", "nested_list",
  "source_element_list", "source_element", "simple_prog", "$@2",
  "program_definition", "function_definition", "_end_program_list",
  "end_program_list", "end_program", "end_function", "_program_body",
  "_identification_header", "program_id_paragraph", "$@3", "$@4",
  "function_id_paragraph", "$@5", "program_id_name", "end_program_name",
  "_as_literal", "_program_type", "program_type_clause",
  "init_or_recurse_and_common", "init_or_recurse", "_environment_division",
  "_environment_header", "_configuration_section", "_configuration_header",
  "_source_object_computer_paragraphs", "source_computer_paragraph", "$@6",
  "_source_computer_entry", "_with_debugging_mode",
  "object_computer_paragraph", "$@7", "_object_computer_entry",
  "object_clauses_list", "object_clauses", "object_computer_memory",
  "object_computer_sequence", "object_computer_segment",
  "object_computer_class", "locale_class", "computer_words",
  "_repository_paragraph", "$@8", "_repository_entry", "repository_list",
  "repository_name", "repository_name_list", "_special_names_paragraph",
  "_special_names_sentence_list", "special_names_sentence_list",
  "special_name_list", "special_name", "mnemonic_name_clause", "$@9",
  "mnemonic_choices", "_special_name_mnemonic_on_off", "on_off_clauses",
  "on_off_clauses_1", "alphabet_name_clause", "@10", "alphabet_definition",
  "alphabet_literal_list", "alphabet_literal", "@11",
  "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "_sym_in_word", "_symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "_with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "_input_output_section", "_input_output_header", "_file_control_header",
  "_i_o_control_header", "_file_control_sequence", "file_control_entry",
  "$@12", "_select_clause_sequence", "select_clause", "assign_clause",
  "printer_name", "device_name", "_line_adv_file", "_ext_clause",
  "assignment_name", "_assignment_name", "access_mode_clause",
  "access_mode", "alternative_record_key_clause", "_suppress_clause",
  "collating_sequence_clause", "alphabet_name", "file_status_clause",
  "_file_or_sort", "lock_mode_clause", "$@13", "lock_mode", "_lock_with",
  "organization_clause", "organization", "padding_character_clause",
  "record_delimiter_clause", "record_key_clause", "key_or_split_keys",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "_i_o_control", "i_o_control_list",
  "i_o_control_clause", "same_clause", "_same_option",
  "multiple_file_tape_clause", "$@14", "multiple_file_list",
  "multiple_file", "_multiple_file_position", "_data_division", "$@15",
  "_data_division_header", "_file_section_header",
  "_file_description_sequence", "file_description",
  "file_description_entry", "$@16", "file_type",
  "_file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "_record_depending", "_from_integer", "_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "_linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "recording_mode", "u_or_s", "code_set_clause",
  "_for_sub_records_clause", "report_clause", "report_keyword",
  "rep_name_list", "_communication_section", "$@17",
  "_communication_description_sequence", "communication_description",
  "communication_description_entry", "$@18",
  "_communication_description_clause_sequence",
  "communication_description_clause", "_working_storage_section", "$@19",
  "_record_description_list", "$@20", "record_description_list_2",
  "data_description", "$@21", "level_number", "_entry_name",
  "user_entry_name", "const_global", "lit_or_length", "con_identifier",
  "fp32_usage", "fp64_usage", "fp128_usage", "pointer_len",
  "renames_entry", "_renames_thru", "condition_name_entry", "$@22",
  "constant_entry", "$@23", "constant_source",
  "_data_description_clause_sequence", "data_description_clause",
  "redefines_clause", "external_clause", "_as_extname", "_global_clause",
  "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "_occurs_step", "occurs_clause", "_occurs_to_integer",
  "_occurs_from_integer", "_occurs_depending", "_capacity_in",
  "_occurs_initialized", "_occurs_keys", "_occurs_key_list",
  "ascending_or_descending", "_occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "blank_clause", "based_clause", "value_clause", "$@24",
  "value_item_list", "value_item", "_false_is", "any_length_clause",
  "_local_storage_section", "$@25", "_linkage_section", "$@26",
  "_report_section", "$@27", "_report_description_sequence",
  "report_description", "$@28", "_report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "identifier_list", "page_limit_clause", "page_line_column",
  "_page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "_report_group_description_list", "report_group_description_entry",
  "$@29", "_report_group_options", "report_group_option", "type_clause",
  "type_option", "_control_final", "_or_page", "next_group_clause",
  "sum_clause_list", "_reset_clause", "data_or_final",
  "present_when_condition", "varying_clause", "line_clause",
  "line_keyword_clause", "column_clause", "col_keyword_clause",
  "report_line_integer_list", "line_or_plus", "report_col_integer_list",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "_screen_section", "$@30",
  "_screen_description_list", "screen_description_list",
  "screen_description", "$@31", "_screen_options", "screen_option", "eol",
  "eos", "plus_plus", "minus_minus", "_screen_line_plus_minus",
  "_screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "_procedure_division", "$@32", "$@33", "$@34",
  "_procedure_using_chaining", "$@35", "$@36", "procedure_param_list",
  "procedure_param", "_procedure_type", "_size_optional",
  "_procedure_optional", "_procedure_returning", "_procedure_declaratives",
  "$@37", "_procedure_list", "procedure", "section_header", "$@38",
  "_use_statement", "paragraph_header", "invalid_statement", "_segment",
  "statement_list", "@39", "@40", "statements", "$@41", "statement",
  "accept_statement", "$@42", "accept_body", "$@43", "accp_identifier",
  "_accept_clauses", "accept_clauses", "accept_clause", "lines_or_number",
  "at_line_column", "line_number", "column_number", "mode_is_block",
  "accp_attr", "no_echo", "reverse_video", "update_default", "end_accept",
  "add_statement", "$@44", "add_body", "_add_to", "end_add",
  "allocate_statement", "$@45", "allocate_body", "allocate_returning",
  "alter_statement", "$@46", "alter_body", "alter_entry", "_proceed_to",
  "call_statement", "$@47", "call_body", "$@48", "mnemonic_conv",
  "id_or_lit_or_func_or_program_name", "call_using", "$@49",
  "call_param_list", "call_param", "call_type", "call_returning",
  "return_give", "null_or_omitted", "call_exception_phrases",
  "_call_on_exception", "call_on_exception", "_call_not_on_exception",
  "call_not_on_exception", "end_call", "cancel_statement", "$@50",
  "cancel_body", "id_or_lit_or_program_name", "close_statement", "$@51",
  "close_body", "close_option", "compute_statement", "$@52",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@53", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@54", "display_body",
  "screen_or_device_display", "display_list", "display_atom", "$@55",
  "disp_list", "display_clauses", "display_clause", "display_upon",
  "crt_under", "disp_attr", "end_display", "divide_statement", "$@56",
  "divide_body", "end_divide", "entry_statement", "$@57", "entry_body",
  "evaluate_statement", "$@58", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@59", "exit_body",
  "exit_program_returning", "free_statement", "$@60", "free_body",
  "generate_statement", "$@61", "generate_body", "goto_statement", "$@62",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@63",
  "if_else_statements", "end_if", "initialize_statement", "$@64",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@65", "initiate_body", "inspect_statement",
  "$@66", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@67", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "merge_statement", "$@68", "move_statement", "$@69",
  "move_body", "multiply_statement", "$@70", "multiply_body",
  "end_multiply", "open_statement", "$@71", "open_body", "open_file_entry",
  "open_mode", "open_sharing", "open_option", "perform_statement", "$@72",
  "perform_body", "$@73", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@74",
  "read_body", "read_into", "lock_phrases", "ignoring_lock",
  "advancing_lock_or_retry", "_retry_phrase", "retry_phrase",
  "retry_options", "_extended_with_lock", "extended_with_lock", "read_key",
  "read_handler", "end_read", "ready_statement", "release_statement",
  "$@75", "release_body", "reset_statement", "return_statement", "$@76",
  "return_body", "end_return", "rewrite_statement", "$@77", "rewrite_body",
  "_with_lock", "with_lock", "end_rewrite", "rollback_statement",
  "search_statement", "$@78", "search_body", "search_varying",
  "search_at_end", "search_whens", "search_when", "end_search",
  "set_statement", "$@79", "set_body", "on_or_off", "up_or_down",
  "set_environment", "set_attr", "set_attr_clause", "set_attr_one",
  "set_to", "set_up_down", "set_to_on_off_sequence", "set_to_on_off",
  "set_to_true_false_sequence", "set_to_true_false",
  "set_last_exception_to_off", "sort_statement", "$@80", "sort_body",
  "@81", "sort_key_list", "_key_list", "_sort_duplicates",
  "sort_collating", "sort_input", "sort_output", "start_statement", "$@82",
  "start_body", "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@83", "stop_returning",
  "_status_x", "stop_literal", "string_statement", "$@84", "string_body",
  "string_item_list", "string_item", "_string_delimited",
  "string_delimiter", "_with_pointer", "end_string", "subtract_statement",
  "$@85", "subtract_body", "end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "$@86", "terminate_body",
  "transform_statement", "$@87", "transform_body", "unlock_statement",
  "$@88", "unlock_body", "unstring_statement", "$@89", "unstring_body",
  "_unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "_unstring_into_delimiter", "_unstring_into_count", "_unstring_tallying",
  "end_unstring", "use_statement", "$@90", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "_all_refs",
  "use_start_end", "program_start_end", "use_reporting", "use_exception",
  "use_ex_keyw", "write_statement", "$@91", "write_body", "from_option",
  "write_option", "before_or_after", "write_handler", "end_write",
  "_accept_exception_phrases", "_accp_on_exception", "accp_on_exception",
  "escape_or_exception", "_accp_not_on_exception", "accp_not_on_exception",
  "not_escape_or_not_exception", "_display_exception_phrases",
  "_disp_on_exception", "disp_on_exception", "_disp_not_on_exception",
  "disp_not_on_exception", "on_size_error_phrases", "_on_size_error",
  "on_size_error", "_not_on_size_error", "not_on_size_error",
  "_on_overflow_phrases", "_on_overflow", "on_overflow",
  "_not_on_overflow", "not_on_overflow", "return_at_end", "at_end",
  "_at_end_clause", "at_end_clause", "_not_at_end_clause",
  "not_at_end_clause", "at_eop_clauses", "_at_eop_clause", "at_eop_clause",
  "_not_at_eop_clause", "not_at_eop_clause", "_invalid_key_phrases",
  "invalid_key_phrases", "_invalid_key_sentence", "invalid_key_sentence",
  "_not_invalid_key_sentence", "not_invalid_key_sentence", "_scroll_lines",
  "condition", "expr", "partial_expr", "$@92", "expr_tokens", "expr_token",
  "eq", "gt", "lt", "ge", "le", "exp_list", "_e_sep", "exp", "exp_term",
  "exp_factor", "exp_unary", "exp_atom", "line_linage_page_counter",
  "arithmetic_x_list", "arithmetic_x", "record_name", "table_name",
  "file_name_list", "file_name", "report_name", "mnemonic_name_list",
  "mnemonic_name", "procedure_name_list", "procedure_name", "label",
  "integer_label", "reference_list", "reference", "single_reference",
  "optional_reference_list", "optional_reference", "reference_or_literal",
  "undefined_word", "unique_word", "target_x_list", "target_x", "_x_list",
  "x_list", "x", "call_x", "x_common", "report_x_list", "expr_x",
  "arith_x", "prog_or_entry", "alnum_or_id", "simple_display_value",
  "simple_display_all_value", "simple_value", "simple_all_value",
  "id_or_lit", "id_or_lit_or_func", "id_or_lit_or_length_or_func",
  "num_id_or_lit", "positive_id_or_lit", "pos_num_id_or_lit",
  "from_parameter", "sub_identifier", "sort_identifier",
  "sub_identifier_1", "display_identifier", "numeric_identifier",
  "identifier_or_file_name", "identifier", "identifier_1",
  "target_identifier", "target_identifier_1", "qualified_word", "subref",
  "refmod", "integer", "symbolic_integer", "report_integer", "class_value",
  "literal", "basic_literal", "basic_value", "function", "func_no_parm",
  "func_one_parm", "func_multi_parm", "func_refmod", "func_args",
  "trim_args", "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "_flag_next",
  "_flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "error_stmt_recover", "verb",
  "scope_terminator", "_advancing", "_after", "_are", "_area", "_areas",
  "_as", "_at", "_before", "_binary", "_by", "_character", "_characters",
  "_contains", "_data", "_end_of", "_file", "_final", "_for", "_from",
  "_in", "_in_order", "_indicate", "_initial", "_into", "_is", "_is_are",
  "_key", "_left_or_right", "_line_or_lines", "_limits", "_lines", "_mode",
  "_number", "_numbers", "_of", "_on", "_onoff_status", "_other",
  "_procedure", "_program", "_record", "_records", "_right", "_sign",
  "_signed", "_sign_is", "_size", "_standard", "_status", "_tape", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "coll_sequence", "column_or_col", "columns_or_cols", "comp_equal",
  "exception_or_error", "in_of", "label_option", "line_or_lines",
  "lock_records", "object_char_or_word", "records", "reel_or_unit",
  "scroll_line_or_lines", "size_or_length", "with_dups",
  "prog_coll_sequence", "detail_keyword", "ch_keyword", "cf_keyword",
  "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
  "control_keyword", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790
};
# endif

#define YYPACT_NINF -2504

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2504)))

#define YYTABLE_NINF -2004

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2504,   308,  1036, -2504,   612,   704, -2504,   819, -2504, -2504,
     652, -2504, -2504,   517,   659,   832, -2504,  1124, -2504,  1255,
    1286, -2504, -2504,   652,   652, -2504, -2504,   938,  1268,  1262,
     953,  1030,  1253,   640,  1020,  1023,  1363,  1379, -2504,  1087,
    1409, -2504, -2504,  1165, -2504,  1112,  1183, -2504,  1424,  1136,
    1139,  1181,  1305,  1191,   650,   650,   830, -2504,  1363, -2504,
     830, -2504, -2504,    30,  3088,  3845,  1159,   -12, -2504,  1196,
    1199, -2504, -2504, -2504,  1203,  1376, -2504, -2504, -2504, -2504,
    1619,  1619, -2504, -2504,  1207, -2504,  1214, -2504, -2504,  1265,
    4171, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
      42, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1274, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504,   534, -2504, -2504,  1347, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,  1180, -2504,   313,    81,
   -2504, -2504,   607,   730,  1189, -2504,    84,    84,  1310,  1331,
    1487,  1487,  1487,    84,  1333,  1487,  1700, -2504,  1382,  1376,
    1521, -2504, -2504, -2504, -2504,  1556, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,  1527,  1314, -2504, -2504, -2504,
     103,   103,   307,  1321, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504,   376,  4801,  8578,
     196,   605,   468,  1267,  1134,  -206,  5151,  6030,  1531,   642,
     971,  1134,  1272,  1338, -2504, -2504,  6030, -2504, -2504,  1134,
    1273,  3129,  1272,  5245,  6030, -2504,   946,  6740,  1267,  1272,
    1267,  1272,    67,   757,  1272,  1267, -2504, -2504, -2504, -2504,
   -2504, -2504,  6030,  5353, -2504, -2504,  1273,    91,  1272,  1267,
    1272,  1272,  1393,  1729, -2504,   451,  1335, -2504, -2504,  1336,
     -29,   -58, -2504, -2504,  1391,  1386,  1744,  1487, -2504, -2504,
   -2504,   776, -2504, -2504, -2504, -2504, -2504,   356,  1759,  1487,
   -2504,   156, -2504, -2504, -2504,  1487,  1487, -2504,  1487, -2504,
    1272,  1754,  1272,  1487,  1487,  1272, -2504,  1303,  1073,  1362,
   -2504,  1658, -2504, -2504,  1304, -2504, -2504, -2504,   -45, -2504,
      60, -2504,   673,  -159,    63, -2504, -2504, -2504, -2504,   537,
    1698, -2504,  1632, -2504,  1357,  1524,  1184, -2504,  1272, -2504,
   -2504,  1374,  1377,  1378, -2504,  4412,   537,   537, -2504,  1383,
    1388,  1390, -2504, -2504, -2504,  1392,   537, -2504, -2504, -2504,
   -2504, -2504, -2504,  1394, -2504,  1378, -2504, -2504,  1726, -2504,
    5381, -2504, -2504, -2504, -2504,  1411, -2504, -2504,  1397,  1402,
    1404,  4412,  8603,  8578,  8603, -2504,   192,   917, -2504,  1712,
   -2504, -2504, -2504,   617,  1411, -2504, -2504,   196, -2504,  1422,
   -2504,   537, -2504, -2504, -2504, -2504,  1737,  2535, -2504, -2504,
     468, -2504, -2504, -2504,  1267,   890,  1524,  1751,  1018, -2504,
    1491, -2504, -2504,  1357,  1411,  1267,  1752,  1530,  1064, -2504,
    1755,   666,  5673, -2504, -2504,  4947,  1175,  1204,  1756,   166,
    1380, -2504, -2504, -2504,  1757,    85, -2504, -2504, -2504,  4707,
   -2504, -2504,  1794,    42, -2504, -2504, -2504,  1134, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,  1440, -2504, -2504,   685, -2504,
    1273, -2504, -2504,    29, -2504, -2504, -2504, -2504, -2504, -2504,
    1425,  6030, -2504,  1438,  1763,  1864, -2504, -2504, -2504, -2504,
     946, -2504,  1495,  1524, -2504,  1656,  1656,  1047, -2504, -2504,
   -2504,  6887,    10,   336,  1453,  1452, -2504,  -186, -2504, -2504,
    1459,  1770,   698, -2504,  1721, -2504,  1777,  1530,  1781,  1721,
    1272,  1783,  1416, -2504,  4412,  1765, -2504, -2504, -2504, -2504,
   -2504, -2504,  1659, -2504,  1134, -2504, -2504,   457, -2504,   752,
    1908, -2504,    87, -2504,  1787,   959,  2261,  1788,  5695, -2504,
    1825,  1272,  1789,  5813,  1273, -2504, -2504,   633, -2504, -2504,
   -2504, -2504,  3355, -2504,  1740, -2504, -2504,  1156,  1790,  1829,
    1791,  1721,  1476,  1539,  1681,  1427,  1427,  1427,   315,  1485,
    6789, -2504, -2504, -2504,  1433, -2504, -2504, -2504,  1636, -2504,
      84, -2504,   876, -2504,    88, -2504, -2504, -2504, -2504,  1487,
    1545,  1699, -2504, -2504, -2504, -2504,   777,  1487,  1442,  1493,
    1859,  1487,  1428,  1272,  1709, -2504, -2504, -2504, -2504,  1714,
    1488, -2504, -2504,  1303, -2504,    57, -2504, -2504, -2504, -2504,
   -2504, -2504,  1244,   -23,  1487,    79, -2504, -2504, -2504,  1509,
      20, -2504,  1487,  1553,  1660, -2504, -2504,  1870, -2504, -2504,
    1272, -2504, -2504,  7474,  1494,  8578,  1502, -2504, -2504,    54,
   -2504,  1519,  8578,  8578,  7971, -2504, -2504,  1411, -2504,  1465,
    1467,  8578,  8578,  8578,  4412,  1468,  4412, -2504, -2504, -2504,
    6106,  1785, -2504,  1184,  8578, -2504,  4412,  8578, -2504,  1411,
   -2504, -2504, -2504,  1122, -2504,  1768,  8578,  8578,  8578,  8578,
    8578, -2504,  1598, -2504,  1646,  1738, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,   890, -2504, -2504, -2504,  1096,
     644,  1272, -2504, -2504, -2504, -2504, -2504,  8578,  1723, -2504,
    1502, -2504,  1267, -2504, -2504, -2504, -2504,  1614, -2504, -2504,
   -2504, -2504, -2504,  1701,  1833, -2504, -2504,  4947,   331,   666,
     666,   666,   666, -2504, -2504,  6030,  6106, -2504, -2504, -2504,
   -2504,   642,    65, -2504,  1483, -2504,  1484, -2504, -2504, -2504,
   -2504, -2504,  1338, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504,  4385, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,    -5, -2504,  1878,  1408,  1832,
   -2504,  4412,   125, -2504, -2504,  1638, -2504, -2504,    90,  8578,
   -2504,  1551,  1134, -2504, -2504,  6106, -2504,  1498,  1614,  1656,
    1547, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504,  1850,  1272,   196, -2504,   273, -2504, -2504,
   -2504, -2504,  1530,  3129, -2504, -2504, -2504,  1792, -2504, -2504,
    1614,  1891, -2504, -2504,  1272,  1891,  1563, -2504, -2504,  1411,
   -2504,  1565, -2504, -2504,  1094,  1244, -2504, -2504,  4275, -2504,
    1986,   739,    89, -2504, -2504, -2504,  1487, -2504,   369,  6030,
   -2504, -2504,   665, -2504, -2504,  1272, -2504,  1992, -2504,  1839,
   -2504, -2504,  6106, -2504,  1699, -2504, -2504,  4412, -2504, -2504,
   -2504, -2504, -2504,  1992,  1807, -2504, -2504,   273, -2504,  1573,
    1639,  1793, -2504, -2504, -2504,  1670,  1579, -2504,  1580, -2504,
   -2504,  1968, -2504,  1432, -2504, -2504,  1581, -2504, -2504, -2504,
    2036,  1593, -2504, -2504,  1699, -2504, -2504, -2504,   748, -2504,
   -2504, -2504,  1797,   431, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504,  1428, -2504,  1605, -2504,   436, -2504,  1652, -2504, -2504,
   -2504, -2504,  1805,   -23, -2504,  1831,    84,    84, -2504,  1244,
     558, -2504,  -135, -2504, -2504, -2504,  1720, -2504,  1998,   775,
    1487, -2504,  1548,  1610, -2504, -2504,   477, -2504, -2504,  1487,
    1126,  7474, -2504, -2504, -2504,   795,  1620,  7721, -2504,  1126,
   -2504, -2504, -2504,  1554,  1561, -2504,  4412,  1126,  1847,  1653,
    1784, -2504, -2504,  1812, -2504, -2504, -2504, -2504,    33,   968,
    8578, -2504, -2504, -2504,   389, -2504,  1272,   200,   979,  1629,
     259,  1631, -2504,   283, -2504, -2504,   346,  1633,  1634,  1635,
     290, -2504,  1411, -2504,  1637, -2504,   299,  1640,  1524,  1105,
   -2504,    45,   176,  1134, -2504,   992,  1642,   316, -2504,  1641,
    1598,   917,   917, -2504, -2504, -2504,  1134, -2504,  1650,   196,
   -2504,  1380, -2504, -2504,  1724, -2504,  1731, -2504,   810,  1487,
   -2504, -2504, -2504,  1384,    39, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504,   148, -2504, -2504,  3447, -2504, -2504,
    1461, -2504, -2504, -2504, -2504,  1907,  1105,  1910,    97, -2504,
   -2504, -2504, -2504,  2106, -2504,  1662,   146, -2504, -2504,    65,
   -2504, -2504, -2504, -2504,  1809, -2504, -2504, -2504,  1996,  1981,
    1338, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1760,  1338,
   -2504,  1665, -2504,  2083, -2504, -2504, -2504,  7119, -2504,  4412,
    7172, -2504, -2504, -2504,  2005,   124,   216,    31,  1134,  1134,
    1105,  1924,   250,  1267, -2504, -2504,  1988, -2504, -2504, -2504,
    2130, -2504,  1936, -2504, -2504, -2504, -2504,  1792, -2504, -2504,
   -2504, -2504,  1272,   519,  -110, -2504,  1617, -2504,  1618,  4412,
    1827,   866, -2504,   389, -2504, -2504, -2504,  6030,  1244,  1244,
    1244,  1244,  1244,  1244,  1244,  1244,   739, -2504,   -22,    39,
     -49, -2504,  1706,  1706,  -149,  6002,  1272,  1105,  1932,  1677,
   -2504,  1683,  2142,  1272,   394,  1614,  2145,   313, -2504,  1682,
    1742,  1779,  1643,  1194,  1272, -2504, -2504, -2504,  1194,  2066,
    1487,  1225,  1225,  1487,     7,  1879,  1487,  2139, -2504,  1845,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
      84,  1069, -2504, -2504,  1707, -2504,  1967, -2504,    24, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1001, -2504,    73,
   -2504,  1428, -2504,  1828, -2504, -2504,  1805, -2504,    84, -2504,
   -2504, -2504, -2504, -2504,    64,  1645, -2504,    99, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,   133, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504,  2118, -2504, -2504, -2504, -2504, -2504,
    1359, -2504,  1258, -2504, -2504, -2504, -2504,  1858,  1858, -2504,
   -2504,  1858,   443, -2504,  1487, -2504, -2504, -2504, -2504,  1487,
   -2504, -2504, -2504, -2504, -2504,     2, -2504, -2504, -2504,  2110,
    1741, -2504, -2504, -2504, -2504,    -8, -2504,  1487, -2504,  2166,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
    1126, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  8578,
    8147,   968, -2504, -2504, -2504,  1491,  8258,  1397,  8342,  1397,
   -2504,  1272,  1397,  1397,  1397,  4412, -2504,   162,  1397,    54,
   -2504, -2504, -2504,  1868,  1748,   152,  1970,  1105,  8460,  1397,
    1397,   424, -2504, -2504, -2504, -2504, -2504,    42, -2504, -2504,
   -2504,   597, -2504,  8578, -2504, -2504, -2504, -2504,  1876,  1944,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1487, -2504,
     -38, -2504, -2504,  1211,  1487, -2504, -2504, -2504, -2504,    -4,
    1487, -2504, -2504, -2504,  1134, -2504,  1134,  1766, -2504,   637,
      11,    65, -2504, -2504, -2504,  2106,  1272, -2504, -2504, -2504,
   -2504,  1666,  1301,   309,  1667,   424,  4412, -2504, -2504,  2138,
   -2504,  1263, -2504, -2504,  7172, -2504,  1263,  1993,  1995, -2504,
    1771, -2504, -2504,  1487, -2504, -2504,  1947,  1873, -2504, -2504,
    1134, -2504,  1134,  1875,  1875,  1882, -2504,   551, -2504, -2504,
   -2504,  1272,  6030,   630, -2504, -2504, -2504, -2504,  1899,  2068,
      39, -2504,  1123, -2504, -2504, -2504, -2504,  1618, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504,   -18, -2504,  1272, -2504, -2504, -2504,   728, -2504, -2504,
   -2504,  8578, -2504,  6030,  6030,   -53,  1866, -2504, -2504, -2504,
    1491, -2504,  1134, -2504,   424, -2504,  1885, -2504,  4412, -2504,
    2092,  1758, -2504,  -110, -2504,   833, -2504, -2504, -2504,  1739,
    1801,  1811,   159, -2504,  1643, -2504,  2006,  1761,  7384,   724,
    2007, -2504,  1699,  1690,  1487,  2139,  1694,   -84,   485,  1699,
    1703, -2504,  1487, -2504, -2504, -2504,   -40,   816, -2504, -2504,
   -2504,  2225, -2504,  2066,  1267, -2504, -2504, -2504, -2504, -2504,
    1001, -2504,  1957, -2504, -2504,  1985, -2504,  1619,  1213,  1619,
    1764, -2504, -2504, -2504, -2504, -2504,   170, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,   477,   477,   477, -2504, -2504,
   -2504, -2504,   477,   477, -2504, -2504,  1487,  1487,   508,   508,
     477, -2504,   443, -2504,   979, -2504,  1160,   -86, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
    2015, -2504, -2504, -2504, -2504, -2504, -2504,  2017, -2504, -2504,
    1174, -2504, -2504, -2504, -2504, -2504,    43,    66, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504,   994, -2504, -2504,
   -2504, -2504, -2504, -2504,  2762,   477, -2504, -2504,  1524, -2504,
   -2504, -2504, -2504,   681,   477,   508,   508,   477,  1105,  1855,
    1105,  1857, -2504, -2504,  6030, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504,  1301, -2504,  2126, -2504,  1338, -2504,
    1263, -2504,  1263,   424,  1762,  1762, -2504,  2229,  2200, -2504,
   -2504, -2504, -2504,   -41,  1272, -2504, -2504, -2504,  1105, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,  1144, -2504,  2190,  1809,
    1971,  1997, -2504,   690, -2504, -2504, -2504,   636, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,  1974, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,   979, -2504, -2504, -2504, -2504,
   -2504, -2504,  1934,  1767,  1487,   -86,  1105,  1734, -2504,  2142,
   -2504,  2023,  2151,  2023,   -53,   923, -2504, -2504,  1415,  2198,
     313, -2504,  1782,  1849, -2504,   160, -2504, -2504,  1272, -2504,
      35, -2504, -2504,  -173,  -167,  -148,   609,   733,  1732, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504,  1863, -2504,   807, -2504, -2504, -2504, -2504,  1272,
    2022, -2504, -2504, -2504,   526, -2504, -2504, -2504,  1487, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,  1085,   442, -2504,  1745,
   -2504,   160, -2504,  1798, -2504,  2061, -2504, -2504, -2504,  1694,
   -2504, -2504, -2504, -2504, -2504, -2504,  2003,    27,  2023,   705,
    1487, -2504, -2504,  1487, -2504,  1879,  1530,   627, -2504,  1852,
    1487,  2209,   284,   145,    -1,  1498, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,  1834, -2504,  2002, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,  2234,  1487,  1267,  1267,
    1001, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,   -28,
   -2504, -2504, -2504, -2504, -2504,   525,   477, -2504,  1426, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504,  1964,    -7,  1524, -2504, -2504, -2504, -2504, -2504,  1272,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504,  1134, -2504,  1134, -2504, -2504, -2504, -2504, -2504, -2504,
    2227,  2160, -2504, -2504,  1263, -2504,  6030,  6030, -2504, -2504,
    1929,  1267,   800, -2504,  1272, -2504, -2504,  1887,  6030,  2009,
   -2504,  1487,  1078, -2504, -2504,    98,  2016,  2018, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1272, -2504,
   -2504, -2504, -2504,  1816, -2504, -2504,  1272,  2023, -2504,  1272,
   -2504, -2504, -2504, -2504, -2504,  1994,  2131, -2504, -2504, -2504,
   -2504,    84, -2504,   313, -2504,   313, -2504,  1818,  1837,   160,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,  1772, -2504, -2504,  2243,
    1840, -2504, -2504, -2504, -2504, -2504,  3727,  2274,  1889,  1889,
   -2504, -2504,  1699,   257,  1272, -2504, -2504, -2504, -2504,  1699,
   -2504,  1880, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
     538,   538,  1487,  1947, -2504, -2504,  1077, -2504,   881,  1487,
    1487,  1487,  1487, -2504,  1532, -2504,   250,  1487,  1879, -2504,
    1894,  1690,  1267, -2504,  1962,  2291, -2504,  2196, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
    1272, -2504,   -86,   -86,  6030, -2504, -2504, -2504, -2504,  1487,
    1267,  1267,  1965, -2504, -2504, -2504,  1813, -2504,  1272, -2504,
   -2504,  1899,  2068, -2504, -2504, -2504, -2504,  1436, -2504, -2504,
    1272, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504,   160,   726, -2504, -2504,  2023,  2113,  1699,
    1848, -2504,  2054, -2504,  2209, -2504, -2504, -2504, -2504, -2504,
   -2504,  1272, -2504,    32,  1700, -2504,  1017, -2504, -2504, -2504,
   -2504,   292,  1487, -2504, -2504,  1715, -2504, -2504,   485,  1883,
    1272,  1272, -2504, -2504, -2504, -2504,  1272,  1487, -2504, -2504,
   -2504,  1699, -2504,  1001,  1851, -2504, -2504, -2504, -2504,   196,
    1267,  1487, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504,  1291, -2504, -2504, -2504, -2504, -2504,  1969,
    2208, -2504, -2504,  1963,  -178, -2504,  1904, -2504,  1854,  1799,
    1699,  1840, -2504, -2504,  2210, -2504, -2504, -2504,   485,   485,
   -2504, -2504, -2504, -2504,  2134, -2504, -2504,  1798,  1699, -2504,
   -2504, -2504, -2504,  1272, -2504, -2504,   542,   542,  2324, -2504,
   -2504, -2504, -2504, -2504,   542,   542,   546, -2504, -2504, -2504,
     794, -2504, -2504,   779, -2504, -2504, -2504, -2504,   196, -2504,
    1951,  1898,    14,  1809,   -35,  1273, -2504,  6525, -2504, -2504,
    -178,  1867,  1869,  1487, -2504, -2504,  2108,  1809, -2504, -2504,
   -2504,  2307,  1700, -2504,     1, -2504, -2504, -2504, -2504,  1581,
   -2504, -2504, -2504, -2504, -2504,  1487,  1272,  1815, -2504,  1815,
   -2504, -2504,  1272, -2504,  1002, -2504, -2504, -2504,    69, -2504,
   -2504,  1762, -2504,  1871, -2504,  1872, -2504, -2504,   160, -2504,
   -2504,  1272,  2116,   216,   485,  2223,  1896, -2504, -2504,  1272,
    1272,   -16, -2504, -2504, -2504, -2504, -2504,  1999,   -50,    69,
   -2504, -2504,   949,   177, -2504, -2504, -2504, -2504,  2116, -2504,
    1992, -2504,  1947, -2504,  1809, -2504,  1826, -2504,  1272,  2031,
   -2504, -2504,  1809, -2504, -2504,  2035,  1272, -2504, -2504, -2504,
   -2504,  1881,   707,  7866, -2504,  1830,  1487,  1272,    86,   836,
     572, -2504, -2504, -2504,  1487,  1487,  2139,  1198, -2504, -2504,
   -2504, -2504,  2143,  2172, -2504,  1487, -2504,   499, -2504,  1211,
    1487,  3129, -2504, -2504, -2504, -2504,  1858, -2504,  2226,  1699,
   -2504,  2301, -2504, -2504, -2504,  1272, -2504, -2504,  1272, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
    2149,  1858, -2504,  1830, -2504,  1272, -2504,  1184, -2504, -2504,
   -2504,  1337, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
    1267,   525, -2504, -2504,  1487,  2139,  2097,  1841, -2504, -2504,
   -2504,  1272,   477, -2504, -2504, -2504, -2504,   477, -2504,  1487,
    1848,  1487, -2504, -2504, -2504,  1487, -2504,  1272, -2504, -2504,
   -2504, -2504, -2504, -2504,  1445,   -71, -2504,  1272, -2504, -2504,
   -2504,   736, -2504,   525,   736,  1381, -2504, -2504,  2097, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,   477, -2504,
   -2504, -2504,   477,  1243,  1487,  1487,  1407, -2504, -2504, -2504,
   -2504, -2504, -2504,  1663, -2504, -2504, -2504, -2504, -2504,  1487,
    2097,  2097, -2504,  2147,  1487,  1487, -2504,  1861,  2097, -2504,
   -2504, -2504,  2097,  2097,  2137,  1340,  2139,  2152,  1699,  1856,
    1487,  1524, -2504,  1487,  1487,  1272, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,   869,
   -2504,    -3, -2504, -2504, -2504,  1340,  2139, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504,   159, -2504,  1487,  1840, -2504,  8880,
    8880,  1966,  2245,  2167, -2504,  1699,   869, -2504, -2504,  1699,
      -3, -2504, -2504,   159, -2504, -2504,   869,  1848, -2504,  1491,
    8779, -2504, -2504,   797,  1238, -2504, -2504,  1247, -2504, -2504,
   -2504, -2504,   -43,   -43, -2504, -2504, -2504, -2504, -2504,  8880,
   -2504, -2504, -2504, -2504, -2504, -2504,  2210, -2504,  1809, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,  2049, -2504,  2049, -2504,
    2326,  1935,    22,  2046, -2504, -2504,  8880,  1699, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,    21,     6,     4,
      46,     8,     9,     0,     0,     0,     7,     0,    11,   291,
      49,    27,    24,    46,    46,    23,    22,     0,     0,   709,
     293,     0,   180,    51,     0,     0,    14,     0,    47,     0,
       0,    20,   754,     0,   295,     0,     0,    45,   182,     0,
       0,    98,    52,    53,     0,     0,     0,    12,    15,    16,
       0,    13,   292,   711,     0,     0,     0,   289,    50,     0,
       0,   186,    62,    56,     0,   100,    54,    55,    30,    29,
      33,    33,    32,    31,     0,    17,     0,   714,   712,   730,
       0,   808,   888,   897,   903,   910,   952,   958,   972,   967,
     973,   974,   982,  1029,  1038,  1041,  1067,  1078,  1081,  1084,
    1076,  1090,  1097,  1119,  1123,  1162,  1164,  1168,     0,  1174,
    1189,  1213,  1243,  1244,  1247,  1248,  1253,  1262,  1263,  1276,
    1312,  1330,     0,  1364,  1378,  1386,  1388,   736,  1392,  1395,
    1398,  1449,   756,   757,   758,   759,   760,   761,   762,   763,
     765,   764,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,   755,   294,   301,   302,   375,   296,   378,     0,
     181,   183,   184,    64,    58,    99,     0,     0,     0,  1975,
    1929,  1929,  1929,     0,     0,  1929,  1902,   118,    84,   101,
       0,   104,   106,   107,   108,   154,   110,   109,   111,   112,
     113,   114,   115,   116,   117,     0,     0,    25,    18,    19,
     719,   719,     0,     0,  1810,  1811,  1812,  1813,  1814,  1815,
    1816,  1817,  1818,  1819,  1820,  1821,  1822,  1823,  1859,  1860,
    1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,  1869,  1870,
    1871,  1872,  1873,  1874,  1875,  1876,  1877,  1878,  1824,  1825,
    1826,  1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,  1835,
    1836,  1837,  1838,  1839,  1840,  1841,  1842,  1843,  1844,  1845,
    1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,  1807,
    1855,  1856,  1857,  1858,   807,  1808,  1809,     0,     0,     0,
       0,   914,     0,     0,     0,     0,     0,     0,     0,  1537,
    1069,     0,     0,  1994,   937,   936,     0,  1089,  1537,     0,
       0,     0,     0,     0,     0,   806,     0,  1201,     0,     0,
       0,     0,     0,     0,     0,     0,  1360,  1363,  1350,  1361,
    1362,  1352,     0,     0,  1387,  1385,     0,   754,     0,     0,
       0,     0,     0,   362,   297,  1774,     0,  1606,   298,     0,
    1790,   270,   187,  1901,     0,     0,     0,  1929,  2037,    82,
      63,  1900,    68,    70,    71,    72,    73,  1900,     0,  1929,
      57,    60,  1628,  1627,   129,  1929,  1929,  1976,  1929,  1930,
       0,     0,     0,  1929,  1929,     0,  1903,     0,  1929,     0,
      48,     0,   102,   105,     0,   153,    34,    28,  1929,  1899,
     719,   716,   722,     0,   719,   731,   732,   706,   831,  1710,
     886,   810,   830,  1700,  1704,  1954,     0,  1753,     0,  1748,
    1754,     0,     0,  1760,  1733,     0,  1593,  1595,  1729,     0,
       0,     0,  1751,  1734,  1651,     0,  1597,  1732,  1752,  1730,
    1755,  1756,  1735,     0,  1750,  1760,  1749,  1731,   895,  1645,
     893,  1637,  1640,  1639,  1643,  1725,  1727,  1644,  1757,     0,
       0,     0,     0,     0,     0,   898,     0,  1582,  1585,  1587,
    1590,  1660,  1592,  1779,  1658,  1659,  1617,   904,   905,     0,
    1613,  1615,  1614,   917,   915,   916,   950,     0,  1676,   957,
     953,   954,   956,  1675,   959,   962,  1954,   970,     0,  1599,
    1793,  1632,  1705,  1709,  1633,     0,   980,  1968,  1729,   996,
    1027,  1478,  1635,   991,   993,   990,     0,  1639,  1036,     0,
     920,  1039,  1048,  1047,  1065,     0,  1044,  1046,  1536,     0,
    1071,  1075,  1073,  1076,  1074,  1068,  1079,  1080,  1630,  1082,
    1083,  1995,  1085,  1611,  1077,  1990,  1535,  1098,  1100,  1607,
    1120,  1121,  1124,     0,  1126,  1127,  1128,  1163,  1316,  1694,
    1695,     0,  1165,     0,  1172,     0,  1182,  1179,  1181,  1180,
    1175,  1176,  1183,  1954,  1203,     0,     0,  1617,  2004,  1681,
    1190,  1201,  1192,     0,  1199,     0,  1680,  1614,   396,  1682,
       0,  1241,  1785,  1245,  1452,  1602,  1251,  1968,  1260,  1452,
       0,  1274,  1267,  1603,     0,     0,  1610,  1277,  1278,  1279,
    1280,  1281,  1282,  1304,  1283,  1307,  1284,     0,  1608,     0,
       0,  1693,  1709,  1313,  1348,  1335,  1353,  1376,     0,  1367,
    1370,     0,  1383,     0,  1389,  1390,   742,   748,   737,   738,
     739,   741,     0,  1393,     0,  1697,  1396,  1970,  1415,  1401,
    1463,  1452,     0,     0,   538,     0,     0,     0,   380,     0,
       0,   384,   385,   383,     0,   300,   303,   185,     0,  1791,
       0,   282,   278,   179,     0,   273,   275,   276,  2036,  1929,
       0,     0,    67,    69,    65,    83,  1900,  1929,     0,     0,
       0,  1929,     0,     0,     0,   175,  1620,   173,   178,     0,
       0,   177,  1629,   156,   157,  1931,   160,  1715,  1286,  1285,
     119,   123,   126,  1958,  1929,     0,    85,   103,   155,     0,
       0,   717,  1929,     0,   728,   720,   721,   733,  2015,  2016,
       0,   887,   809,   832,     0,     0,  1702,  1703,  1955,     0,
    1726,     0,     0,     0,     0,  1746,  1646,  1647,  1648,     0,
       0,     0,     0,     0,     0,     0,     0,  1747,   896,   889,
       0,     0,  1638,     0,     0,  1736,     0,     0,  1661,  1662,
    1663,  1589,  1657,     0,  1588,  1781,     0,     0,     0,     0,
       0,  1780,   901,   906,   908,     0,   951,   911,  1678,   919,
     912,   918,  1677,  1679,   955,   962,  2027,  2028,   960,     0,
     963,     0,   971,   968,  2012,  2011,  1600,     0,  1795,  1601,
    1707,  1708,   977,   978,   981,   975,  1969,  1226,  1028,   983,
     751,   751,   988,  1484,  1481,   992,   989,  1636,  2003,  1478,
    1478,  1478,  1478,  1037,  1030,     0,     0,   921,  1040,  1066,
    1042,  1537,  1537,  1043,  1050,  1051,   751,  1562,  1563,  1564,
    1558,  1543,  1994,  1550,  1570,  1573,  1572,  1574,  1566,  1557,
    1556,  1561,  1560,  1559,  1565,  1545,  1549,  1567,  1569,  1571,
    1547,  1548,  1544,  1546,  1538,  1539,  1551,  1552,  1553,  1554,
    1555,  1542,  1072,  1070,  1631,  1087,  1991,   751,  1102,     0,
    1122,     0,  1149,  1133,  1125,  1130,  1131,  1132,  1320,     0,
    1696,     0,     0,  1173,  1169,     0,  1177,  2003,  1226,     0,
       0,   405,   401,   404,   403,   402,   493,   495,   417,   413,
     415,   416,   418,   414,   419,   496,   494,   420,   421,   398,
     409,   410,   411,   406,   407,   408,   400,   397,  1191,  1197,
    1198,   751,  1194,  1537,     0,     0,  1202,     0,  1242,  1214,
    1786,  1787,  1968,     0,  1246,  1252,  1249,  1216,  1261,  1254,
    1226,  1269,  1275,  1264,     0,  1269,     0,  1668,  1670,  1671,
    1672,     0,  1305,  1308,     0,     0,  1609,  1288,     0,  1287,
       0,     0,  1707,  1349,  1331,  1337,  1929,  1338,  1333,     0,
    1351,  1355,     0,  1377,  1365,     0,  1368,  1898,  1369,     0,
    1384,  1379,     0,  1391,   749,   747,   740,     0,  1971,  1972,
    1397,  1416,  1399,  1898,     0,  1464,  1450,  1454,   376,     0,
       0,   541,   393,   425,   428,     0,     0,   381,     0,   391,
     386,   392,   389,  1929,  1792,   188,  1910,   279,   280,   281,
    1885,     0,   271,   274,     0,  2035,    76,    66,     0,  1621,
      75,    59,     0,     0,  1722,  1718,  1723,  1721,  1719,  1724,
    1720,   164,   165,   167,   176,   171,   169,     0,   158,  1933,
    1932,   161,     0,  1958,  1961,  1960,     0,     0,   120,   124,
      87,    26,    37,    40,    44,    43,  1966,    38,    39,     0,
    1929,   729,     0,     0,   707,  1711,  1893,  1895,   837,  1929,
    1465,   833,   834,   836,   838,     0,     0,     0,   826,  1465,
    2010,  2009,   823,   815,   817,   818,     0,  1465,     0,     0,
       0,   841,   821,     0,   829,   812,   828,   813,  1577,  1575,
       0,  1701,  1665,  1664,     0,  1650,     0,  1577,  1575,     0,
    1577,     0,  1762,  1577,  1594,  1596,  1577,     0,     0,     0,
    1577,  1654,  1655,  1656,     0,  1598,  1577,     0,  1954,  1487,
     894,  1709,  1633,     0,  1728,     0,     0,  1577,  1591,  1783,
     901,  1581,  1580,  1584,  1583,  1586,     0,   899,     0,     0,
    1616,   920,   961,   966,     0,  1915,     0,  1634,  1487,  1929,
    1794,  1706,   979,  1914,  1523,  1227,  1228,  1483,   752,  1486,
    1479,  1485,  1480,  1482,     0,  1002,  1001,   994,   997,   999,
       0,   986,   987,   984,   985,     0,  1487,     0,   927,  1045,
    1060,  1062,  1061,  1055,  1057,  1063,  1537,  1052,  1049,  1537,
    1053,  1568,  1540,  1541,  1956,  1086,  1612,   751,  1094,  1095,
    1994,  1110,  1111,  1113,  1115,  1116,  1112,  1114,  1105,  1994,
    1101,     0,  1150,     0,  1152,  1151,  1153,  1135,  1145,     0,
       0,  1129,  2034,  1957,     0,  1322,     0,  1920,     0,  1166,
    1487,     0,     0,     0,   399,   412,  1195,  1208,  1204,  1209,
    1205,  1210,     0,  1200,  1459,  1458,  1207,  1216,  1453,  1690,
    1691,  1692,     0,     0,  1256,   751,     0,  1268,     0,     0,
       0,     0,  1306,     0,  1310,  1309,  1302,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1290,  1291,  1788,  1523,
       0,  1354,  1986,  1986,  1374,     0,     0,  1487,     0,     0,
     750,     0,  1775,     0,  1374,  1226,  1879,   378,   363,     0,
       0,   544,     0,   451,     0,   382,   388,   432,   394,  1904,
    1929,     0,     0,  1929,  1904,  1947,  1929,  1883,   299,     0,
     304,   307,   308,   309,   310,   311,   312,   313,   314,   315,
       0,     0,   190,  1911,  1988,  1886,  1914,   272,     0,    79,
      81,    80,    77,    78,    61,   135,   134,   149,   145,   150,
     131,   148,   146,   132,   133,   147,   130,   136,   137,   139,
     166,     0,   170,     0,   174,  1716,   159,   162,     0,  1959,
     127,   121,   122,   125,     0,     0,    86,     0,    90,    42,
    1967,    36,    41,   723,   724,   727,     0,   718,   734,   736,
    1685,   845,  1683,  1684,     0,  1471,  1472,  1476,  1477,   811,
    1473,   751,  1468,   751,   835,  2008,  2007,  1949,  1949,   843,
     844,  1949,     0,   850,  1929,   852,   853,   854,   885,  1929,
     855,   856,   857,   858,   859,     0,   879,   880,   861,   863,
       0,   864,   883,   881,   882,     0,   866,  1929,   851,  1881,
     869,   884,   872,   839,   860,   865,   871,   827,   814,   816,
    1465,   824,   819,   820,   842,   822,  1578,  1579,  1712,     0,
       0,     0,  1667,  1649,  1666,  1793,     0,  1757,     0,  1757,
    1761,     0,  1757,  1757,  1757,     0,  1740,     0,  1757,     0,
     751,   751,   890,  1493,  1490,  1707,  1708,  1487,     0,  1757,
    1757,     0,  1782,   900,   902,   909,   907,   931,   965,   964,
     969,     0,  1231,     0,   751,   751,   976,  1524,  1530,  1527,
     754,  1008,  1009,  1006,  1005,  1007,  1004,   998,  1929,  1010,
       0,  1013,  1014,  1908,  1929,  1017,  1018,  1000,  1019,     0,
    1929,  1022,  1020,  1003,     0,  1031,     0,   922,   923,   722,
       0,  1537,  1537,  1059,   751,  1056,     0,  1093,   751,  1096,
    1091,     0,     0,  1117,     0,     0,     0,  1146,  1148,     0,
    1141,  1155,  1142,  1143,  1134,  1137,  1155,     0,  1670,  2033,
       0,  2006,  1314,  1929,   517,   518,  1934,     0,  1921,  1321,
    1167,  1170,     0,  1962,  1962,     0,  1184,  1185,  1604,  1196,
    1193,     0,     0,  1218,  1217,   751,   751,  1250,  1512,     0,
    1523,  1257,     0,  1270,  1537,  1537,  1265,  1271,  1289,  1311,
    1301,  1303,  1293,  1294,  1295,  1299,  1296,  1300,  1297,  1298,
    1292,  1789,  1347,     0,  1344,  1345,  1339,     0,  1332,  2032,
    2031,     0,  1987,  1358,  1358,  1496,     0,  1372,  1371,  1373,
    1793,  1380,     0,   743,     0,  1776,  1402,  1403,     0,  1406,
    1409,  1413,  1407,  1256,  1880,     0,   377,   365,   539,     0,
       0,   639,  1931,   426,     0,   452,     0,   423,  1929,  1890,
       0,  1905,     0,     0,  1929,  1883,     0,     0,     0,     0,
       0,  1948,  1929,   358,  1884,   359,     0,     0,   360,   305,
     306,  1968,  1989,  1904,     0,  2023,  2024,    74,   138,   141,
       0,   168,     0,   163,   128,     0,    96,    33,     0,    33,
       0,    88,    91,   725,   726,   736,   754,   849,  1466,  1474,
    1470,  1467,  1469,  1475,  1950,     0,     0,     0,  1717,   840,
    1686,  1687,     0,     0,   878,   870,  1929,  1929,  1533,  1533,
       0,  1882,     0,   825,  1576,  1713,     0,  1487,  1771,  1744,
    1773,  1745,  1769,  1741,  1742,  1743,  1767,  1764,  1765,  1739,
    1634,  1495,  1492,  1488,  1494,  1489,  1491,  1706,   891,  1758,
       0,  1737,  1738,  1784,  1673,  1674,   940,  1927,  1797,  1798,
    1799,  1800,  1801,  1802,  1803,  1804,  1796,     0,  1529,  1532,
    1525,  1531,  1526,  1528,     0,     0,  1011,  1012,  1954,   689,
     691,  1015,  1016,     0,     0,  1533,  1533,     0,  1487,  1599,
    1487,  1599,   924,   925,     0,   929,   928,   930,  1058,  1064,
    1054,  1088,  1092,  1103,  1106,  1107,  1906,  1099,  1994,  1104,
    1155,  1669,  1155,     0,  1925,  1925,  1140,  1156,  1157,  1138,
    1144,  1139,  2005,  1324,     0,  1935,  1318,  1922,  1487,  1963,
     267,   268,   269,  1188,  1178,  1605,     0,  1211,     0,  1956,
       0,  1237,  1219,  1232,  1225,  1221,  1234,     0,  1511,  1514,
    1505,  1513,  1506,  1255,  1258,     0,   751,   751,  1272,  1346,
    1336,  1340,  1341,  1342,  1343,  1334,  1356,  1359,  1357,   751,
     751,  1366,  1502,  1499,  1929,  1487,  1487,   745,  1394,  1775,
    1405,  1918,  1411,  1918,  1496,  1460,  1457,  1456,  1939,   364,
     378,   542,     0,     0,   290,     0,   429,   453,     0,   422,
       0,   527,   457,  1977,  1977,  1977,  1977,  1977,  1999,   458,
     461,   462,   463,   464,   465,   466,   489,   487,   488,   490,
     491,   467,  1973,   492,     0,   468,   454,   469,   470,     0,
    1980,   472,   473,   471,  1936,   475,   476,   474,  1929,   433,
     434,   435,   436,   437,   438,   455,   459,   460,   439,   440,
     441,   442,   443,   444,   445,   446,     0,     0,  1891,     0,
     427,     0,   395,   327,   236,   355,  2025,  2026,  1624,   336,
    1622,  2018,  2017,   329,  1626,  1625,  1945,  1902,  1918,     0,
    1929,   333,   332,  1929,   361,  1947,  1968,  1996,   252,     0,
    1929,  1900,  1934,   254,     0,  2003,   240,   189,   239,   191,
     192,   193,   194,   195,   196,     0,   197,     0,   198,   251,
     199,   200,   201,   202,   203,   204,  1896,  1929,     0,   277,
       0,   140,   172,    92,    93,    97,    94,    95,    89,   754,
     846,   848,   847,   874,   873,     0,     0,   876,     0,  1688,
    1689,   875,   868,   877,  1714,   892,  1759,   751,   751,   751,
     913,   947,   943,  1954,  1928,   934,   939,   938,   933,     0,
    1230,  1229,  1024,  1909,   690,   692,  1023,  1026,  1025,  1021,
    1033,     0,  1032,     0,   926,  1642,  1641,  1699,  1108,  1907,
       0,     0,  1136,  1147,  1155,  1926,     0,     0,  1158,  1159,
       0,     0,  1327,  1323,  1317,  1171,  1187,     0,     0,     0,
    1222,  1929,  1523,  1220,  1233,     0,     0,     0,  1236,  1259,
    1266,  1273,  1504,  1501,  1497,  1503,  1498,  1500,     0,  1382,
    1381,  1417,   744,     0,  1404,  1919,     0,  1918,  1408,     0,
    1400,   751,   751,  1451,  1462,  1520,  1517,  1461,  1940,  1941,
    1455,     0,   366,   378,   540,   378,   545,     0,   532,   528,
     530,   424,   536,   537,  1978,   486,   485,   478,   477,   484,
     483,   482,   481,   480,   479,  2000,     0,  1974,   524,   510,
     504,   447,  1981,  1937,  1938,   525,     0,   449,  1805,  1805,
     431,   430,     0,   317,     0,   354,  1623,  1946,   338,     0,
     320,  1982,   347,   349,   353,   352,   348,   350,   346,   351,
       0,     0,  1929,  1934,  1997,  1998,   219,   255,  1968,  1929,
    1929,  1929,  1929,   264,  1887,   265,     0,  1929,  1947,  1897,
       0,     0,   283,   284,   287,   142,   143,     0,   862,   867,
    2029,  2030,  1534,   945,   949,   946,   941,   948,   942,   944,
       0,   932,  1487,  1487,     0,  1118,  1154,  1161,  1160,  1929,
    1325,     0,     0,  1315,  1319,  1186,     0,  1224,     0,  1215,
    1240,  1512,  1509,  1239,  1223,  1235,  1375,  1425,   746,  1410,
       0,  1414,  1519,  1522,  1515,  1521,  1516,  1518,   368,   367,
     543,   547,   640,     0,   534,   531,   526,  1918,   506,     0,
    1992,   456,     0,   448,  1900,   497,   498,   328,   319,   318,
     316,   356,  1618,   337,  1902,  1983,   325,   334,   331,   335,
     330,     0,  1929,   221,   220,   217,   254,   250,     0,     0,
       0,     0,  1888,  1889,   263,   266,     0,  1929,   253,   235,
     285,     0,   286,     0,     0,   935,  1035,  1034,  1109,     0,
    1328,  1929,  1537,  1238,  1507,  1508,  1510,  1893,  1448,  1447,
    1426,  1418,  1419,  1881,  1420,  1421,  1422,  1423,  1446,     0,
       0,  1412,   370,   546,   642,   533,     0,   529,     0,     0,
       0,   504,   505,  1993,   508,   450,  1806,  1619,     0,     0,
     339,   340,   341,   342,     0,   321,  1917,   327,     0,   229,
     230,   228,   227,     0,   213,   214,   224,   224,     0,   212,
     210,   211,   216,   215,   224,   224,     0,   256,   257,   258,
     259,   262,   237,     0,   288,   144,   735,  1326,     0,  1212,
       0,  1984,     0,  1956,  1914,     0,   548,     0,   646,   641,
     643,     0,     0,  1929,   511,   507,   512,  1956,   515,   345,
     344,  1892,  1902,   326,  1777,   225,   207,   226,   208,  1910,
     209,   206,   222,   205,   223,  1929,     0,   246,   245,   246,
     242,  1329,     0,  1985,     0,  1444,  1443,  1442,     0,   369,
     371,  1925,   549,     0,   647,     0,   644,  2002,     0,   513,
     515,     0,   519,   514,     0,   323,   232,  1778,   218,     0,
     260,     0,   244,   243,  1445,  2014,  2013,  1964,  1438,  1432,
    1433,  1435,     0,     0,   649,   650,   645,   535,   519,   509,
    1898,   502,  1934,   343,  1956,   322,     0,   231,   261,     0,
     249,  1965,  1956,  1441,  1436,  1439,     0,  1434,   372,   374,
     373,     0,  1929,  1979,   503,     0,  1929,     0,     0,     0,
       0,  1440,  1437,   553,  1929,  1929,  1883,  1942,   578,   552,
     556,   557,     0,  1912,   665,  1929,   654,  1999,   655,  1908,
    1929,     0,   670,   663,   658,   664,  1949,   659,     0,     0,
     662,   672,   669,   667,   666,     0,   673,   661,     0,   684,
     678,   682,   681,   679,   683,   651,   685,   680,   668,   660,
       0,  1949,   523,   520,   521,     0,   324,     0,   151,   152,
     234,     0,  2021,  2022,   247,  1431,  1428,  1430,  1429,  1424,
    1427,     0,  2052,  2053,  1929,  1883,     0,   550,   554,  1913,
     558,     0,     0,   652,   653,   656,   657,     0,   687,  1929,
    1992,  1929,   688,   686,   704,  1929,   522,   516,   233,   248,
     555,  1943,  1944,   566,   563,   390,   579,   559,   560,   677,
     676,   697,   703,     0,   700,   562,  2019,  2020,   565,   580,
     392,   561,   695,   693,   696,   694,   698,   699,     0,   671,
     701,   702,     0,     0,  1929,  1929,     0,   567,   568,   569,
     570,   571,   572,     0,   582,   674,   675,  2039,  2038,  1929,
       0,     0,  2041,     0,  1929,  1929,   564,  1979,     0,   577,
     573,  2040,     0,     0,  1923,  1951,  1883,     0,     0,     0,
    1929,  1954,   581,  1929,  1929,     0,   587,   589,   598,   590,
     592,   595,   583,   584,   585,   594,   596,   599,   586,     0,
     591,     0,   593,   597,   588,  1951,  1883,   574,   576,   575,
    1924,   637,  1952,  1953,  1931,   623,  1929,   504,  1537,     0,
       0,     0,     0,     0,   631,     0,   621,   627,   630,     0,
     624,   632,   635,  1931,   626,   622,     0,  1992,   619,  1793,
     615,  1652,  2043,     0,     0,  2045,  2047,     0,  2051,  2049,
     600,   604,   608,   608,   602,   606,   601,   607,   638,     0,
     629,   628,   634,   633,   625,   613,   508,   636,  1956,   614,
    1653,  2042,  2046,  2044,  2050,  2048,   611,   603,   611,   605,
       0,   500,     0,     0,   610,   609,     0,     0,   499,   618,
     616,   617,   612,   620,   501
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2504, -2504, -2504, -2504, -2504,  2375, -2504, -2504, -2504, -2504,
   -2504, -2504,  2327, -2504,  1753, -2504, -2504, -2504, -2504, -2504,
   -2504,  2329,  2328,   -72, -2504, -2504, -2504,  1275, -2504, -2504,
   -2504, -2504, -2504,  2336, -2504, -2504, -2504,  2338, -2504, -2504,
    2000,  -254, -2504, -2504, -2504, -2504, -2504,  2188, -2504, -2504,
   -2504, -2504,   947, -2504, -2504, -2504, -2504,  2174,    21, -2504,
   -2504, -2504, -2504,  1287, -2504, -2504, -2504, -2504, -2504,   973,
   -2504, -2504, -1705, -2504, -2504, -2504, -2504, -2504,  1668, -2504,
   -2504, -2504, -2504,  1307, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  -957, -2504,
   -2504, -2504, -2504, -2504,    93, -2504, -2504, -2504, -2504, -2504,
    -154, -2504,   101, -2504, -2504, -2504,   -81, -2504, -2504, -2504,
   -2504,   104, -2504, -2504,  1705, -2504, -2504, -2504, -2504, -2504,
      95, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,   -64, -2504,
   -2504, -2504,   114, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -1323, -2504,
   -2504,  1728, -2504, -1660, -1887,  -669, -2504, -1888,  -481, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2193, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,   676, -1807,  -203,   151,
   -1689, -1676, -1761, -2504, -2504, -2504, -2329, -2504,  -465, -2504,
   -2504,  -145, -2504,  -151,  -172, -2504,  -256, -1737, -2504, -1725,
   -2504, -1683, -2504, -2504,   189, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504,  -443,  -467, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -1350, -2504,  -418, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
     -87, -2504, -2504, -2504,  -214,  -213,  -307,  -304, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  2202,
     857, -2504,   838, -2504, -2504, -2504, -2504, -1326, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504,   -25, -2504, -2504,   -20, -2504,
    2376, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1317, -2504,
    -754, -2504, -2504,  -684, -2504,  -174, -1220,   950, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1251, -2504, -2504,
   -2504,  1945, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1242,
   -2504, -2504,   848, -2504, -2504,  -618, -2504, -2504, -2504,   314,
   -2504,   317, -2504, -2504, -2504, -2504,  1937, -2504, -2504, -2504,
    1644, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1917, -2504, -2504,
   -2504,  1223, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1594, -2504, -2504,
    1590, -2504, -2504,  1208,   855, -2504, -2504, -2504, -2504, -2504,
    1905, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504,   577,  1555, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504,  1549, -2504, -2504,   842,
   -2504,  1190, -2504, -2504, -1570,   570,   573, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,  1884,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -1536,
    1874, -2504, -2504, -2504,   818, -2504, -2504, -2504,  1164, -2504,
   -2504, -2504,  -839,   820, -2504, -2504,   554, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504,   765, -1476, -2504, -2504, -2504, -2504, -2504, -2504,
    1496,   812, -2504, -2504, -2504, -2504, -2504,  -679, -2504, -2504,
   -2504, -2504,  1146, -2504, -2504, -2504,  1853, -2504,  1846, -2504,
   -2504, -2504,  2140, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504,   793, -2504, -2504, -2504, -2504, -2504,  1843, -2504,
   -2504,  1135, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504,   529, -2504,  1138, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,   -83, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -2504, -2504,   588, -2504,
    1458, -2504, -2504, -1001, -2504,  1035, -2504, -2504,  1039, -2504,
     865, -2504,  1657, -2504,  1664, -1178, -2504,   962, -2504,   960,
     544, -2504,   556, -2504,   560, -2504, -2504, -2504, -1595,   169,
   -1284, -2504, -2504,   298, -2504,   300, -1296,   552, -2504,   952,
   -2504,   954,  -556,  -960,  -302,  -816, -2504, -2504,  1648, -1140,
     840,   841,   843,   845,   863,   563,  -227,   972,   932, -2504,
    1256,   -27,  -730,  -279,   680,  1903, -1703,  -196,  -359, -2504,
    -600, -2504,  -268, -2293,  1730, -1453,  -400,  1457, -2504,   480,
   -2179,  -177,  1808,  -289,  -238, -2504,   483,  -187, -2504,   660,
   -2504,  -727, -1261, -2504,  1215,  -567, -1494, -2504,   988,  -324,
   -2504, -2504, -1565,   738, -2504,   -96,  -322, -2504,   -67, -2504,
   -2504, -2504,  -293,  -434, -2504, -2504,  1471,  -462,  -475,  -407,
    1121, -1436,  1127,  -333,  -208,  -441,   193, -2504, -2504, -2504,
     225,  2085, -2504, -2504,   998, -2504, -2504, -2504, -2504, -2504,
   -2504, -2504, -2504, -2504, -2504, -2504, -1501, -2504, -2504,   293,
   -2504, -2504, -2504, -2504,   118, -1717, -2504, -2504, -2504, -1653,
   -2504, -2504, -1002, -1938, -1973, -1170, -2504, -2504,    25, -2504,
   -1180, -2504, -1834, -2504, -2504, -1835, -2504,  -211, -1695, -1977,
   -2504, -2504, -2504, -2504, -1891, -1446,  -262,  -520, -1241,  1462,
     912, -2504, -2504,  -518, -2504, -2504, -2504,  -250, -2504, -2504,
   -2504,  1216, -2504,   948, -1823,  -840, -2504, -2504, -2504,  -218,
     809, -1684, -1649, -2504, -2504,  1086, -2504, -2504,  -119, -2504,
    1195, -2504, -2504, -2504,    44, -2504, -2503,  -265, -2504, -2504,
   -2504, -2504, -2504, -2504
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   428,    24,
      34,    80,    84,   236,   749,  1116,  1117,  1118,    19,    20,
      32,    33,    51,    52,   204,   400,   719,    53,   203,   390,
     391,   392,   393,   394,   395,   396,  1412,   397,   420,  1110,
    1446,  1447,  1448,  1778,    75,   218,   219,   220,   221,   222,
     418,   740,  1442,   741,   742,   223,   721,  1426,  1427,  1428,
    2110,  2315,  1429,  2690,   224,   425,   225,   733,   734,   735,
    1436,   226,  1091,  1092,   227,   228,  1432,   229,   230,   231,
     232,   233,   234,    47,    48,    71,   381,   202,   382,  1402,
    1761,  2089,  2090,  2494,  2495,  2496,  2405,  2543,  2536,  2091,
    2482,  2092,  2607,  2093,  2055,  2094,  2095,  2096,  2097,  2550,
    2582,  2098,  2099,  2100,  2101,  2102,  2499,  2103,  2104,  2304,
    2105,  1656,   703,   704,   705,   706,  1070,   707,  1066,  2312,
    2313,  2422,    29,   196,    30,    44,    67,   197,   198,   696,
     199,  1063,  1390,  1391,  2390,  1392,  2605,  2477,  2273,  1393,
    1394,  2073,  2398,  1395,  1396,  2393,  2470,  2471,  2472,  2473,
    1397,  2288,  2289,  1398,  2275,  1399,  1400,  1757,   684,  1727,
    1979,  2232,  2233,  2452,  2514,  2560,   373,  1367,   374,   375,
     688,   689,  1377,   690,  1060,  1061,  1739,   609,   959,   960,
     961,   962,   963,   691,  1989,   692,  1372,   693,  1373,  2050,
    1738,  2029,  2030,  2031,  2383,  1734,  1735,  2033,  2034,  2035,
     964,   965,  2038,  2808,  2908,  2039,  2380,  2461,  2528,  2378,
    2570,  2572,  2573,  1646,  2601,  2683,  2684,  2040,  2041,  2042,
    2043,  1733,  2374,  2239,  2240,  2457,  2045,  1051,  1980,  1371,
    2235,  1731,  2371,  2453,  2516,  2593,  2622,  2639,  2640,  2710,
    2737,  2641,  2733,  2745,  2767,  2768,  2769,  2770,  2771,  2772,
    2707,  2736,  2774,  2787,  2812,  2813,  2870,  2897,  2904,  2814,
    2815,  2889,  2910,  2816,  2817,  2818,  2819,  2820,  2821,  2846,
    2847,  2850,  2851,  2822,  2823,  2824,  1984,  2454,  2519,  2520,
    2521,  2595,  2623,  2675,  1871,  1872,  2756,  2757,  2758,  2762,
    2676,  2677,    41,   757,  1459,    42,    89,   241,   240,   430,
     431,   432,   754,  1122,   243,  1124,  1785,   367,   668,   669,
    1967,  2212,   670,   671,  1359,  1227,  1228,  1580,   672,    65,
     142,   143,   317,   440,   763,   441,  1130,  1131,  1132,  1155,
    1133,  1479,  1480,  1134,  1513,  1514,  1515,  1516,   762,   144,
     318,   478,   791,   789,   145,   319,   495,  1207,   146,   320,
     507,   508,  1209,   147,   321,   516,  1211,   517,   820,   868,
    1248,  1607,  1608,  1609,  1846,   336,  2148,  2140,  2328,  2141,
    2326,  2142,   817,   148,   322,   520,   521,   149,   323,   524,
     828,   150,   324,   527,   833,   151,   152,   153,   325,   536,
     842,   845,   154,   326,   540,   541,   542,   543,   858,   544,
    1237,  1238,  1239,  1585,  1603,   849,   155,   327,   548,   864,
     156,   328,   551,   157,   329,   554,   555,   556,   873,   874,
     875,  1258,   876,  1253,  1254,  1613,   870,   158,   330,   565,
     337,   159,   331,   566,   160,   332,   569,   161,   333,   572,
    1265,   162,   163,   338,  1269,  1620,   164,   339,   577,   918,
    1278,  1623,  1894,  1895,  1896,  1897,   165,   340,   580,   166,
     341,   582,   583,   924,   925,  1290,   926,   927,  1634,  1635,
    1287,  1288,  1289,  1628,  1906,  1907,  1908,   167,   342,   168,
     343,   592,   169,   344,   594,   934,   170,   346,   600,   601,
     602,   938,  1924,   171,   347,   610,   971,  1660,   972,   611,
     612,   613,  1308,  1310,  1311,   172,   348,   621,  1323,  1931,
    1932,  1933,  1224,  1225,  1226,  2193,  1935,  2192,  2349,   979,
     173,   174,   349,   623,   175,   176,   350,   626,   986,   177,
     351,   628,  1670,  1671,   989,   178,   179,   352,   631,   995,
    1326,  1676,  1677,   993,   180,   353,   637,   743,  1010,   638,
     639,  1346,  1347,   640,   641,   642,   643,   644,   645,   646,
     181,   354,   587,  1913,   928,  2184,  1295,  1642,  2182,  2343,
     182,   355,   654,  1349,  1018,  1693,  1694,  1695,  1014,   183,
     656,  1020,  1956,   361,   184,   362,   657,   658,   659,  1028,
    1708,  1705,  1024,   185,   363,   662,  1031,   186,   365,   187,
     366,   664,   188,   368,   673,   189,   369,   676,   190,   370,
     678,  1044,  1716,  1717,  1364,  1719,  1972,  2218,  1974,  1042,
    2213,  2357,  2441,  2442,  2443,  2699,  2444,  2589,  2590,  2616,
    2445,  2557,  2446,  2447,  2448,   191,   371,   680,   984,  1365,
    1316,  2223,  1046,  1469,  1791,  1470,  1471,  1788,  1472,  1473,
     852,  1232,   853,  1230,   854,  1552,  1835,  1553,  1833,  1554,
    1961,  2206,  1962,  2204,  1963,  1667,  2350,  2435,  1668,  1940,
    1941,  2224,  2366,  2225,  2364,  2226,  1576,  1577,  1862,  1578,
    1860,  1579,  2127,   575,   576,   558,   559,   904,   905,   906,
     907,   908,   909,   910,  1158,  1529,  1168,   497,   498,   499,
     500,   479,   528,   836,   624,   632,  1657,  1658,   581,   647,
     648,   915,   614,   510,   511,  2391,  2065,  1080,  2059,  2060,
    2066,   404,   736,   567,   530,   856,   480,   481,  2164,   482,
    2860,  1180,   502,  1164,  1533,  1636,  1900,   997,  1901,   522,
     821,   615,  1461,  1799,  2128,  1318,  1462,   588,   651,   674,
    1637,  2166,   483,   443,   531,   532,   444,   766,   767,  1463,
    1437,  2848,  1093,   484,   485,   486,   487,   488,   489,   490,
     795,   775,  1187,  1184,  1177,  1169,  1171,   694,  1718,  2576,
     812,  1200,  1562,   982,  1697,   700,   839,  1220,  1856,  2385,
     314,   315,   316,  1725,  1812,  1755,  1406,  2414,  2051,  1135,
    1136,  2310,   433,   398,   417,  1742,  2170,  1873,  1404,  2711,
    1216,  2478,  2216,  1649,  2831,  2176,  2149,   410,  1102,  1916,
    2265,  2230,  2706,  2278,  1752,  1795,  2834,   769,  1296,  1106,
    1920,  2612,  1451,  2106,  1040,  2258,   408,  2246,  2047,  2396,
    2554,  1703,  1763,   917,  2464,   573,  2296,  2256,  2458,   620,
    1643,  1481,  1157,   837,  2587,   760,  2063,  2748,  2694,  1767,
    1746,   830,  2322,  1701,  1297,   399,  2779,  2785,  2873,  2874,
    2875,  2876,  2877,  2643
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     411,   412,   546,   378,   415,   770,   831,   665,   585,   237,
     725,   744,   728,  1309,   618,   731,  1053,  1054,  1055,   847,
    1602,   776,    64,  1616,   442,  1355,   503,   557,  2057,   523,
     405,   650,  1796,   547,  1817,  1797,   413,  1985,  1019,  1669,
    1570,  1362,  1261,  1573,  1726,   529,  1801,  1006,   584,  2036,
     578,  1986,   509,  1698,   616,  2044,  1255,   798,   841,  1186,
    1189,  2109,  2037,  1103,   649,  2111,  1910,   996,  1605,  1196,
    2177,   840,  2143,  1775,  1942,   675,   630,   679,  2588,  1099,
     402,  2468,   376,   939,  1765,   402,  1250,   416,    87,  1071,
    1769,  -710,   496,   568,  2280,  2687,  1112,  2238,  1741,  1303,
    1780,   568,   871,  1885,  1235,  2301,  2302,  1526,  2317,   987,
     429,   504,  1059,   429,  1264,   568,   534,  1488, -1956, -1695,
    1808, -1696,  1651,   534,  1875,   967,   921,   525,   930,   537,
    1292,   534,  2526,  1786,  1282,  1804,  1246,   713,  1517,  2219,
     549,  2896,  2070,  2299,   882,   534,  1521,   429,   882,   574,
    2555,  1324,   622,   429,   627,   771,   593,   595,   969,   655,
    1978, -2003,  1215,  2271,  1156,  2137,  1783,  1250,   194,   446,
    -708,   966,   966,   677,  1236,   660,   711,   841,  2621,  1711,
    1108,  1099,  2071,   720,  2292,  1283, -2003,  1936,   718, -1898,
    1012,  1640, -2003,  2180,   722,   723,   409,   724,  1113,   802,
     802,   802,   729,   730,  1699,  1300,  2909,   745,  1696,  1965,
   -1956,   603,   755,  1162,  1749,  2137,   865,   750,  1104,  1292,
    1968,   920,  1550,  1866,   822,   701,  1764,   523, -2003,  2497,
    2120,  2121,  2122,  1114,  2281,  2061,  -710,  2123,  2124,   509,
    -710,   423,  -551,   686,  1644,  2132,  1610,   777,   409,  1581,
    1582,  2244,   805,   334,  1959,  2609, -1704,  2244,  1647,  1653,
     506,  2518,  1798,  2784,   737,  2591,   803,  2613, -2003,   535,
     698,  -551,  -551,  1776,  1526,   589,  2244,  1691,   618,  1574,
   -1704,  1314,  1692,   799,   504,   504,   504,   589,  2242,  2529,
    2530,  1161,   501,   792,   699,  2303,  2591,   765,  1100,  -710,
    2152,  2614,  1357,  2144,  1076,  1033,  1444,   829,     3,  2156,
    1284,  1315,  2159,  -710,  -710,  -708,  2402,  2388,   616,  -708,
     534,   377,  2615,  1094, -1969,  2245,  1332,  2518,   825,   914,
    2172,  2247,  2173,  1526,   506,  1165,  1645,  2849,  2871,   843,
     914,   998,  1115,  2197,  1551,  1575,   702,  2243,  2138, -1774,
    2249,  2238,  1194,  2062,  1281,  1004,  1648,  1526,   792,   534,
     919,   756,  1126, -1702,  1526,  1221,  2145,  1867,  1029,  1944,
     534,   701,   911,  1526,  1943,  1285,  1801,   608,  -708,  1838,
    1700,   454,  1886,  2360,  2610,  2146, -1934, -1725,  1114,  -551,
    1526,  1915,  -708,  -708,  1945,  2603,   195,  1217,   737, -1892,
    1100, -1892,  2300,   866,   931,  2316,   568,  1163,   922,  2174,
    1293,   914,  1827,   605,   606,   383,   608,  2417,  -551,  1105,
    1526,  2475,  2479,   384, -1990,   458,   999,   -35,   636,  1960,
    1621, -1898,   335,   446, -1898,   463,   534,  2559,  1022,  1624,
    1255,   534,   423,  1255,   666,  -710,  2466,  -379,  1527,   685,
    -715,   897,  1445,  -713,  2556,   897,  1052,  1936,  1304,  2119,
    1415,   506,   713,  1557,  1317,   501,   501,   501, -1898,  1021,
    1361,   660,   802,  1614, -1898,  2139,   792,  2181,  2340,   802,
     802,   802,   970,  1235,   439,  2455,   923,  2072,   802,   802,
     802,  1181,   702,  1181,  2279,  1583,  1809,  1115,  1074,   667,
    1876,   802,  1528,  1181,   802,   966,  1078,  1511,  2857,  -551,
    1083,   529,   505,   802,   802,   802,   802,   802,  2469,  1813,
     467,  2688,   439,  1065,  -708,  2139,  1723,  1294,   765, -1929,
    1915,  1887,  -715,  1107,   586,  -713,  1770,  1221,  1159,  1251,
     619,  1119,  1641,  2459,   802,  1137,  1654,  2147,    88,   439,
    1252,  1949,  1766,  1236,  1176,  1176,  1176,   504,   608,  2575,
    1072,  2319,  1416,   666,   504,   504,   504,  1195,  1109,   557,
     765,  1781,  1160,   504,   504,   504,  1182,  2036,  1182,  1520,
   -1898,   439,  1192, -1898,   732,   685,   504,   529,  1182,   504,
    2037,  1777, -1892,  2108,   439,   469,   439,  2351,   504,   504,
     504,   504,   504,  1190,  2336,  1610,   403,   829,   377,   872,
    1218,   403,  1129,  1655,  1286,  1527,  1294, -1898,   667,  2689,
    1251,  2198, -2003, -1898,  2389,  2626,   435,  1360,   998,   504,
    2564,  1252,  1848,   385,  1586,  1160,   802,  1929,  2430,  2135,
    1240,   472,   666,  1299,   793,   454,  1222,  1266,   778,  -551,
    1320,  1828,  1417,  2480,  1532,  1665,   529,  2234,  1192,  1682,
    1683,  1684,  1685,  1686,  1687,  1688,  1689,  1408,  1549, -1770,
     792,   806, -1934, -1892,  1527,  1584,   807, -1657,  1245,  1247,
    2597,  1312,   608,   715,   800,   505,   505,   505,  2189,   458,
    1319,   526,  2268,   477,   568,   438,  1418,   667,  1527,   463,
    2160,  1327,  2162, -1969,  2449,  1527,  1419,  1313,  1798,   386,
     823,  2481,  1455,   999,  1527,  1947,  1556,   911,  2505,  1302,
    1420,   504,  1629,   439,   534,    21,  2592,  1192, -1772,  1555,
    1534,  1527,  1354,   518,  -379, -2003,   686,   636,   501,    14,
    2185,  -379,   737,   687,   998,   501,   501,   501,  1301,  2695,
    2064,  2048,  1540,   529,   501,   501,   501,  2436,   526, -1766,
    2713,  1527,  1678,   526,   758,  1444,   914,   501, -1763,   387,
     501,   916,  2634,   737,   388, -2003, -1990,  2263,  1338,   501,
     501,   501,   501,   501,   467,  1560,  1339,  2209,  2210,   383,
     518,  1421, -1900, -1657,  2517,  1255,   534,   384, -2003,   356,
    1350,  2635,  2636,  2397,   619,  1348,  2696,  2535,  1453,   545,
     501,  2542,    17,  2547,  2697, -1768,  2669,   402,  1826,    -5,
    1666,  1336, -2003,   519,  1192,   806,  1229,  1000,   714,   999,
     807,    15,  1351,  1352,   436,   383,   383,  1234,   850,   973,
    -379,  1215, -1774,   384,   384,  1358,   663, -2003,  2749,   811,
     379,  1260,  1401,   998,   759, -2003,  1930,   608,   974,   469,
    2517,  2196,  2671,  1475,  -357,  1476,  1422,   802, -2003,  1423,
    1424,    22,   686,  1535,  1878, -2003,  1880,  1433,  2574,   687,
    1007,  2197,  -357,   715,  2282,   513,  2672,  1849,  1850,  1851,
    1454,  2283,  1268,  2507,   357,   608,  2353,  2742,  2673,  1534,
    2698, -2003,   501,   439,  2714,   472,   454,  1944,  2352,  1456,
    2369,  1445,  2370,  1137,   529,    78,   439,   634,  1464,  2703,
     608,   439,  1918,  -357,  1005,  2264, -2003,  2700,  2049,  1440,
    1441,  2269,  1945,  1531,  2036, -2003,   358,  2259,   999,  2681,
    2674,  1566,  2154,   884,   885,  1923,  1306,  2037,   409,  1847,
     458,   439,   504,  2548,  1852,    49,  1883,   477,   505,  1340,
     463, -2003,   608,  1353,  1425,   505,   505,   505,  1564,   359,
     439,   851,  2551,   454,   505,   505,   505,  1183,   454,  1183,
    2806,   534,  1966,   886,   887,   534, -2003,   505,  2732,  1183,
     505,  1341,   980,  2891,  -357,   439,   998,  1638,   534,   505,
     505,   505,   505,   505,   439,    79,   635,   385,  1571,  1650,
    1460,  2341,   439,  1342,  1409,  2752,  2791,   458,  1223,  1240,
   -1914,   380,   458,  2255,   526,   857,  2807,   463,  -357,  1664,
     505,   629,   463,  2244,  2886,   439,   998,   636,   534,  2637,
     737,     4,     5,   981,  1034,   467,   514,  2735,   515,  1784,
    2809,   681,   439,   385,   385,  2549,  1477,  -357,  2171,  1902,
     568,   914,  2810,  1710,  -357,   439,   752,   360,  1343,   439,
    1720,  1720,   737,   439,    50,  -357,  2753,   608,   377,  2835,
    1837,   999,   999,   386,  1853,  1854,  2155,  2221, -1657,  1855,
     534,   534,   534,  2580,  2294,    82, -1657, -1657,   737,   377,
     526, -1657,   752,  2825,  2811,  1035,  1672,  2251,  2284,  2854,
    2078,   526,   467,   636,  1000,  1830,   552,   467,  1550,  2691,
     469,   999,   505,   596,  2786,  1977,  2608,   553,  2342,   386,
     386,    25,  1344,   501,  1798,   753,  1706,  1478,  2826,  2855,
     526,  1822,  2079,   387,  1015,  2295,  1706,  2739,   388,   534,
    1681,  1970,  2740, -2003,  2426,  2427,   608,  2244,  2884,  2198,
    1800, -2003,  1736,  1574,  2844,  1976,   472,  1740,  1709,  1743,
    2585,   753,  1748,  1750,  2586,  1753,  1321,  2450,   560,  2638,
     597,  -357,  -357,  2618,   834,    83, -2003,   469,   598,   387,
     387,  2619,   469,  2775,   388,   388,  -357,  2776,  -357,  2285,
   -2001,  2692,  1410,  2693,   898,  1016,   899,  2403,  1017,  2845,
    2719,   608,   439, -2003,  1665,  2754,   608,   990,   477,  1008,
    2755,  2476,  1417,  1758,  2286,  2222,  2287,  2545,  1845,  1575,
    1000,  2253,  2727,   472,  1345,  2725,   802,   802,   472,   454,
    1551,  1067,  1617,   802,   -21,   802,   846,  1759,   712,  1077,
    2456,    27,  1181,  2131,  2406,  2404,  1009,   389,     4,     5,
     826,  1774,  -705,  2267,  1411,   802,  1418,  2546,  1844,  1047,
    2734,  1904,  2558,  1802,   599,  1079,  1419,  2620,  1803,   439,
     802,  1760, -1916,   458,   439,   477,  2571,   751,  -357,   806,
     477,   751,  1845,   463,   807,  1465,  1810,  1987,  1466,  1811,
    1673,  1905,  1814,  1816,    26,   561,   562,  1068,  1069,  1814,
    1889,  1814,  2773,  1271,   409,   454,  1272,  1273,  1574,  2157,
    2158,   504,   504,  1891,   563,  1879,   454,  1881,   504,  2510,
     504,  1840,  1844,   998,  2561,  2053,  -357,  1182,   737,  1000,
    1334,  1638,  2067,   403,  2789,  2790,  1857,  1868,  2153,   534,
     504,  1335,  2827,   505,  2777,   454,  2828,  2829,  2887,   458,
     439,  1421,    28,  2627,  2778,   504,  1460,  1213,  1312,   463,
     458,  2630,  1946,   529,  1869,    31,  1870,  1865,   467,  1666,
     463,  1845,   564,  1874,  1575,  2852,   827,   206,   808,  1877,
     -21,   738,  1214,   739,  1944,    39,   534,   809,   534,   458,
    1950,  2130,  2130,  2679,  2150,   454, -1929,  -705,   802,   463,
      38,  -705,   914,  1550,  2852,  2186,   608,  1270,   999,  1945,
    1271,  1844,  2115,  1272,  1273,   998,   999,  1465,    43,  1467,
    1466,  1468,  1914,   529,  2892,   409,  1422,   207,  1530,  1926,
    2187,    45,   534,  2894,   534,  1937,  1790,   806,  1793,   458,
    2167,  2116,   807,   469,   467,  2704,  2705,  2893,   806,   463,
    2151,  1925,  1558,   807,  2782,   467,  2895,  2437,  2130,  2130,
    -705,   806,  2509,   806,  1955,  1928,   807,   208,   807,   209,
    1379,   210,  1000,  1000,  -705,  -705,  2129,  2129,    46,   211,
    1800,   835,    54,   504,   467,    55,  2881,  1588,  1380,   472,
    1589,  2783,   501,   501,   534,  1672,  2885,  1590,  1591,   501,
     999,   501,    56, -1729,  2183, -1729,  1957,  1957,  2777,  1138,
    1139,  1038,  1000,  1039,    60,  1831,  1832,  2046,  2778,   469,
    2538,   501,   206,  2056,  1425,  1551,    63,  2540,  2541,  1381,
     469,  2069,   779,   780,   467,   439,   501,   212, -1914,  1858,
    1859,   477,   785,  2129,  2129,  2412,  2413,  1592,  2293,    62,
    1864,  1331,   738,  1140,   739,  1141,  2763,  1142,  2438,   469,
    1845, -1676, -1676, -1676, -1676,   472,    66,  2764,  2859,  2861,
    2074,  1215,   207,  1572,    68,  2261,   472,  1274,  1275,  1890,
    1744,  1198,  1745,  1892,    69,  2125,  2126,   815,  2625,  2890,
    2765,   806,  1143,  1144,  1145,    70,   807,  2260,    72,  2439,
    1844,    73,    40,  1276,  1277,   472,  -705,    74,  2900,   469,
      49,   439,   208,  2330,   209,    50,   210,   477,  1593,  2134,
    2766,   193,   439,  1215,   211,  1167,  1170,  1173,   477,   806,
    1938,  1939,   213,  2136,   807,  2913,   235,  2902,  2440,  1084,
    2832,  2833,   618,   806,  1146,   242,  1147,   940,   807,  1594,
    1197,   439,  1467,  1148,  1468,   472,  1149,   477,   200,   206,
     534,   201,   534,   409,   501,   205,  2228,  2305,  2229,   238,
    1382,  1595,   859,   860,   861,   862,   239,  2320,   214,  2321,
     345,  1383,   212,  1085,  1274,  1275,   364,   941,   942,   943,
     944,   945,  2692,  1086,  2693,  2114,  2746,  2117,  2747,   372,
     534, -1675, -1675, -1675, -1675,  2195,   389,   477,   618,   207,
    1276,  1277,   505,   505,  1241,  1242,  1243,  1244,   409,   505,
    1536,   505,  1140,  1538,  1141,  1596,   946,   947,  1183,  1541,
    1203,  1204,  1205,  1545,  2248,  2250,  2252,  2254,   801,  1547,
     804,   505,   406,  2208,   407,  1150,   414,  1151,   534,   208,
     416,   209,  1819,   210,  1821,   419,   505,  1823,  1824,  1825,
    1597,   211,  -927,  1829,   636,  -927,    36,    37,  1201,  1202,
    1178,  1179,   215,   424,  1841,  1842,   427,   213,  1087, -1892,
    1598,   512,   426,   437,   377,   533,   550,  1384,  1385,   439,
     579,  2318,   533,   570,   682,   571,   683,   695,   697,   708,
     533,   710,  1386,   590,  1387,   709,   429,  2266,   617,  1000,
     625,   717,   625,   633,   652,   590,   727,  1000,   216,   212,
     732,   748,   523,   214,   746,   761,   764,  2484,  2485,  2486,
     765,   768,   625,   948,   949,   950,   951,   952,   953,   954,
     955,   956,  1502,  -927,  1503,  1504,  2331,   772, -1898,  2290,
     773,   774,  2291,  1088,   788,  2387,   781,  2306,  1599,  2298,
    -927,   782,  2394,   783,  2392,   784,   816,   786,  2858,   793,
     794,   726,  2332,   726,  2333,   796,   726,   797,   810,   814,
    1600,   832,   838,   844,   505,   846,  2311,   848,   867,   863,
     912,   869,   916,   217,  1388,   932,   618,  1998,   929,  1089,
     933,  1000,  2314,  1925,   935,  2356,   975,   937,   976,   977,
     978,  2200,  2201,  2359,   213,   983,  2361,   215,   985,  1475,
    1140,  1476,  1141,   988,  2202,  2203,   992,  1001,   994,   636,
    1011,  1013,  1027,  1023,  1037,  1030,  1043,  1041,  1048,  1045,
    1049,  1050,  1389,   534,  1052,   534,  1601,  1057,  1152,  1064,
    1062,  1090,  2487,  1075,   737,  1081,  -927,  -927,  -927,  1079,
     214,  1082,  2462,   216,  1095,  -927,  2488,  1097,   512,  1096,
    2348,  1111,  1120,  1121,  1123,  1160,  1166,  -927,  1206,  2337,
    2338,  2467,  1174,   422,  1175,  1185,  1193,   957,  1208,   533,
    1199,  2346,  1223,   506,  1219,   850,   851,  1256,  1259,  1153,
    2500,  2501,   958,  1267,  2504,  1280,  2502,   922,  1298,  1305,
    -927,  1154,  2862,  2782,   608,  1307,  -927,  1325,  -927,  1322,
    1329,  -927,  1330,  -927,  -927,  -927,  1337,  2425,   533,  -927,
     618,  -927,   429,  1356,  1363,  1368,  -927,  1374,   217,   533,
    1369,  1375,  1376,  2525,  2368,  2433,  1403,  1370,  1378,  1405,
    2863,  2489,  2490,  2491,   215,  1407,  2750,  2451,  1431,  1434,
    1435,  2533,  1439,  1450,  1452,  1457,  2492,  2777,  1414,  2794,
    -927,  2401,  1458,  2500,  1482,  -927,  1518,  2778,  2408,  2409,
    2410,  2411,  1519,  1522,  1524,  1523,  2416,  1525,  1537,  -927,
    1539,   633,  1542,  1543,  1544,  2012,  1546,  1569,  1561,  1548,
     216,  1559,  2323,  2324,  2325,   533,  2314,  1565,  1604,  1568,
     533,  1606,  2795,  1611,  2796,  1612,  -927,  1619,  2429,  1293,
     747,  1618,  1625,  1626,  1639,  1652,  1659, -1898,  1661,  1622,
    1662,  1674,  1675,  1712,  1925,  1679,  2392,  2428,  1702,  1713,
    1714,  1715,  1724,  1729,  1728,  2797,  2562,  1741,  -927,  1730,
    1751,  1754,  1756,  1732,  1215,  1762,  1787,  1772,  1794,  1806,
    1807,  2599,  1779,  2493,  1811,  2474,  1550,  2798,  1551,  2392,
    2467, -1703,  1575,   439,  1574,   217,  1893,  1899,  1903,  1912,
    1911,  2483, -1698,  1915,   726,  -927,  2362,  2363,  1917,  2016,
    1666,  -927,  1919,  1922,  1665,  2799,  2503,  1964,  2467,  1969,
    1971,  1981,  1982,  -927,  -927,  1973,  1983,  2054,  1987,  2052,
    2508,  2058,  2112,  2113,  1988,  2068, -1650,  2686, -1701,  2075,
    2161,  1125,  2163,  2169,  1925,   618,  2118,  1904,  1905,  2175,
    2188,  1959,  2190,  2191,  2076,  2199,  2728,  -927,  2211,  1960,
    2215,  2217,  2720,  2231,  2236,  2077,  2255,  -927,  2274,  2584,
    2237,  1191,  2257,  2262,  -927,  2272,  2277,   445,   383,  2138,
     446,  2297,  2270,  2308,  2309,  2335,  2307,  2334,  -927,  2339,
    2347,  2840,  2345,  -927,  2020,  2392, -1898,  2354,  2358,  2355,
    2372,  -927,  1640,  -927,  2800,  2221,  2222,  2377,  2864,  -927,
    2373,  2382,  2865,  2866,  2421,  2376,  2384,  2379,  2423,  2395,
    2424,  2801,  2568,  2418,  2463,  2431,  2432,  2460,  1320,  2465,
    2513,  2498,  2512,  2506,  2522,  2515,  2524,  2467,  2523,  2527,
    2531,  2539,  2552,  2802,  2579,  2553,  2567,  1191,  2437,  2566,
    2569,  2581,  2604,  2594,  2596,  2600,  2867,  2606,   447,  2611,
    2628,  2629,  2631,  2633,  2803,  2708,  2709,  2682,  1319,  1804,
    2721,  2724,  1798,  2868,  2869,   449,  2791,  2830, -1774,  2878,
    2836,  2879,  2722,  2903,  2804,  2723,  2906,  2730,  2912,  2907,
    2838,  1732,    16,  2805,    81,    85,   512,  1449,    86,    77,
      76,  2837,   401,   421,  1782,  2583,  1443,   716,  1430,  2407,
    1768,  1098,  2534,   533,  2419,  2400,  1191,  2420,   523,  1073,
    2415,  2642,  2680,  2532,  2032,  2685,  1056,  2381,  2738,  2759,
    2670,  2901,  2602,  2701,  2702,  2598,  2624,  2726,  2375, -2003,
    2899,  2905,  2883,  2565,  2712,  2715,  2716,  2760,  2880,  2717,
    2761,   192,  2882,   434,  2751,  1805,   512,  1884,  1474,  2678,
     523,  1563,   813,  1567,  2078,  1882,  2329,   824,  2327,   855,
    1587,   450,   451,   452,  1257,  1249,  1888,  1615,   913,  1212,
     453,  2168,   334,  1279,  1291,   533,  1909,  1627,  2179,  1927,
    2178,  1663,   454,  1934,   936,   968,  2079,  2194,  1975,  1948,
    1003,  1328,  1690,  2731,   653,  1002,  -241,  1958,  2214,  1721,
    2914,  1026,  1722,  1191,  1925,  1366,  2617,  1792,  2741,  1789,
    2743,  1233,  2843,  1834,  2744,   455,  1836,  1231,  2220,  2207,
    2434,   456,  2205,   457,  2367,  2365,   458,  2227,   459,   460,
     461,  1863,  1861,   991,   462,  1413,   463,  1951,  1952,  2276,
    1953,   464,  1954,  1101,  2165,  1210,   802,   802,  1680,  1843,
    2133,  2080,  1263,  2780,  2781,  2718,  2081,  1773,  1771, -2003,
     787,  2511,  2386,  2853,  2578,  1438,  1921,   802,  2788,  1704,
    2107,  1898,  2729,  2792,  2793,   465,  2872,  1747,  2577,  2898,
    2898,     0,     0,     0,     0,     0,   802,     0,     0,  2839,
    2082,     0,  2841,  2842,   466,     0,     0,   590,  2083,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2911,
    2084,     0,     0,   802,     0,     0,     0,     0,     0,     0,
       0,   467,   447,     0,     0,  2856,     0,     0,     0,     0,
       0,   504,   504,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,  1641,     0,     0,     0,  2085,     0,     0,
       0,   335,   504,   468,     0,     0,  2086,     0,     0,     0,
     533,     0,     0,     0,   533,     0,     0,  -238,     0,     0,
       0,   504,     0,     0,     0,     0,     0,   533,     0,     0,
     512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,  2087,   504,     0,
    2088,     0,     0,     0,     0,     0,     0,     0,   470,   471,
       0,     0,     0,     0,     0,     0,     0,   533,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   450,   451,   452,     0,     0,
       0,     0,   472,     0,   453,     0,     0,     0,     0,     0,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,    91,     0,    92,     0,   533,
     533,   533,    93,   474,     0,     0,     0,     0,   475,     0,
      94,     0,     0,     0,     0,     0,   476,   608,   439,     0,
       0,     0,     0,     0,   477,     0,     0,     0,     0,     0,
     818,     0,   459,   460,   461,     0,     0,     0,   462,     0,
       0,     0,   501,   501,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,   533,     0,
       0,     0,     0,   501,     0,     0,     0,    98,     0,     0,
       0,    99,     0,     0,  1321,  1737,     0,     0,     0,   465,
       0,     0,   501,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   501,
       0,     0,     0,     0,     0,     0,   102,     0,   103,     0,
     819,     0,     0,     0,     0,     0,     0,  -753,  -753,  -753,
    -753,  -753,  -753,  -753,  -753,  -753,  -753,     0,  -753,  -753,
    -753,     0,  -753,  -753,  -753,  -753,  -753,  -753,  -753,  -753,
    -753,   104,     0,     0,     0,     0,  -753,   468,     0,     0,
       0,  -753,   105,     0,  -753,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   590,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,   108,     0,     0,   109,   110,     0,     0,     0,
       0,     0,   470,   471,     0,     0,   111,     0,     0,     0,
       0,     0,     0,   112,     0,   113,     0,     0,   114,     0,
       0,     0,  -753,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   473,     0,   533,     0,
       0,     0,   505,   505,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,   117,   474,     0,     0,
       0,     0,   475,   505,     0,     0,   118,     0,     0,     0,
     476,     0,   439,  -753,  -753,  -753,     0,  -753,  -753,  -753,
    -753,     0,   505,     0,     0,   533,     0,   533,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,    90,
       0,    91,     0,    92,     0,     0,     0,   120,    93,   505,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   533,     0,   533,     0,   121,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,   446,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,   124,
       0,   125,    97,     0,     0,     0,     0,     0,   126,     0,
       0,     0,   127,    98,     0,     0,     0,    99,     0,     0,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   129,   533,     0,     0,     0,     0,     0,     0,
       0,     0,  -753,   130,     0,     0,   590,     0,     0,     0,
       0,     0,   131,     0,   101,     0,     0,   132,   133,     0,
       0,   134,   102,   135,   103,     0,   447,     0,     0,   726,
       0,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   449,  -753,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -753,     0,     0,   104,     0,     0,
       0,     0,   138,     0,     0,     0,     0,     0,   105,   139,
       0,     0,     0,   106,   140,     0,   590,   590,   590,     0,
       0,     0,     0,   590,   590,     0,     0,     0,     0,   590,
     590,   590,     0,   590,     0,     0,  -753,     0,     0,     0,
       0,   107,   141,     0,     0,     0,     0,     0,   108,     0,
       0,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,   113,     0,     0,   114,     0,     0,     0,     0,   450,
     451,   452,     0,     0,     0,     0,   590,     0,   453,     0,
       0,     0,     0,     0,     0,   590,   590,   590,   590,   533,
     454,   533,     0,     0,     0,     0,    90,     0,    91,     0,
      92,     0,     0,     0,     0,    93,   115,     0,     0,     0,
     116,     0,   117,    94,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   726,     0,     0,     0,   533,
       0,     0,     0,     0,   458,     0,   459,   460,   461,     0,
       0,     0,   462,     0,   463,     0,     0,    95,    96,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,   120,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,    99,     0,     0,   533,     0,     0,
       0,     0,     0,   465,     0,     0,     0,     0,   100,     0,
       0,   121,   122,     0,     0,     0,     0,     0,     0,  2241,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,     0,   124,     0,   125,  1126,   102,
       0,   103,     0, -2003,   126,     0, -2003,     0,   127,   467,
       0,     0,     0, -2003, -2003,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,     0,     0,   104, -1892,     0, -1892,     0,   130,
       0,   468,     0,     0,     0,   105,     0,     0,   131,     0,
     106,     0,     0,   132,   133,     0,     0,   134,     0,   135,
       0,     0,     0, -2003,     0,     0,     0,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     137,     0,     0,     0,   469,   108,     0,     0,   109,   110,
       0,     0,     0,     0,     0,     0,   470,   471,   138,   111,
       0,     0,     0,     0,     0,   139,   112,     0,   113,     0,
     140,   114,     0,     0,     0,     0,     0,   590,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     472,     0,     0,     0, -2003,     0,     0,     0,   141,     0,
     473,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   533,   115,   533,     0,     0,   116,     0,   117,
       0,   474,     0,     0,     0, -2003,   475,     0,     0,   118,
       0,     0,     0,     0,   476,  2344,   439,     0,     0,     0,
       0,     0,   477,     0,     0,     0,     0, -2003,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1892,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
       0, -2003,     0,     0,     0,     0,     0,     0,  1129,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,   125,   726,     0,     0,     0,     0,
       0,   126,     0,     0,     0,   127, -2003,     0,     0,     0,
       0,  2399,  2399,     0,   128,     0,     0,  1992,  1993,  1994,
    1995,  1996,  1997,     0,     0,   129, -2003,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0, -1892,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
     132,   133,     0,     0,   134,  1999,   135,   946,   947,  2000,
    2001,  2002,  2003,  2004,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1036,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -2003,     0,
   -2003, -2003,     0,     0,     0,   138,    90,     0,    91,     0,
      92,  2005,   139,     0, -2003,    93,     0,   140,     0,     0,
       0,     0,   726,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -2003,     0,     0,   726,
       0,   726,   726,     0,     0,   141,     0,   726,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
     512,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,  2006,  2007,  2008,  2009,  2010,     0,
      98,   955,   956,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   726,
     726,     0, -2003,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1234,   726,  2011,     0,  2537,  2537,     0,
       0,   101,     0,     0,     0,  2537,  2537,  2544,     0,   102,
       0,   103,     0,   608,     0,     0,     0,     0,     0,   512,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,  2013,     0,   105,     0,   726,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,   512,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,     0,     0,   726,     0,     0,   107,     0,
     726,   726,     0,     0,     0,   108,     0,  2015,   109,   110,
     512,     0,     0,     0,     0,     0,     0,     0,  2017,   111,
       0,     0,     0,     0,     0,     0,   112,     0,   113,   726,
       0,   114,     0,  2018,     0,     0,     0,  2632,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   726,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2021,  2022,  2023,     0,   726,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
     120,   246,     0,   590,     0,     0,     0,     0,   590,   247,
       0,     0,     0,     0,     0,     0,     0,     0,   726,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,   248,   249,     0,  2025,  2026,  2027,   590,
       0,     0,   124,   590,   125,   250,     0,     0,     0,     0,
       0,   126,     0,     0,     0,   127,   251,     0,     0,     0,
     252,     0,     0,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,   445,     0,     0,   446,   131,     0,   254,     0,     0,
     132,   133,     0,     0,   134,   255,   135,   256,     0,     0,
       0,     0,     0,     0,   136,     0,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   267,   268,
       0,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,   138,     0,     0,     0,     0,
       0,   279,   139,     0,     0,     0,   280,   140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,   141,     0,     0,     0,   449,
       0,   282,     0,     0,   283,   284,     0,     0,     0,     0,
       0,   445,     0,     0,   446,   285,     0,   877,   878,   879,
       0,     0,   286,     0,   287,   880,     0,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1333,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   881,   289,
       0,     0,     0,   290,     0,   291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,     0,     0,     0,     0,
       0,     0,   447,     0,     0,   450,   451,   452,     0,     0,
       0,     0,     0,     0,   453,     0,     0,     0,     0,   449,
       0,     0,     0,   293,     0,     0,   454,     0,     0,   447,
       0,     0,     0,     0,     0,     0,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   455,
       0,     0,     0,     0,   295,   456,     0,   457,     0,     0,
     458,     0,   459,   460,   461,   296,     0,     0,   462,     0,
     463,   882,     0,     0,     0,   464,     0,     0,     0,     0,
     297,   883,     0,     0,     0,     0,     0,   298,     0,     0,
       0,   299,     0,     0,     0,     0,     0,     0,     0,     0,
     300,     0,     0,     0,     0,   450,   451,   452,     0,   465,
       0,   301,     0,     0,   453,     0,     0,     0,     0,     0,
     884,   885,   302,     0,     0,     0,   454,     0,   466,     0,
       0,   303,   450,   451,   452,     0,   304,   305,     0,     0,
     306,   453,   307,     0,     0,     0,  1262,     0,     0,     0,
     308,     0,     0,   454,     0,   467,     0,     0,     0,   455,
     886,   887,     0,   309,     0,   456,     0,   457,     0,     0,
     458,     0,   459,   460,   461,     0,     0,     0,   462,     0,
     463,   310,     0,     0,     0,   464,     0,   468,   311,     0,
       0,     0,     0,   312,     0,     0,     0,   458,   888,   459,
     460,   461,     0,     0,   889,   462,     0,   463,     0,   890,
       0,     0,     0,     0,     0,     0,     0,   891,     0,   465,
       0,   313,     0,     0,   892,     0,     0,     0,     0,   893,
     469,     0,     0,   445,     0,     0,   446,     0,   466,   877,
     878,   879,   470,   471,     0,     0,   465,   880,   894,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,     0,     0,  1334,
       0,     0,     0,     0,     0,     0,   472,     0,     0,     0,
    1335,     0,     0,     0,     0,     0,   473,     0,     0,     0,
     881,     0,   467,     0,     0,     0,     0,   468,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
       0,     0,   475,     0,   447,     0,     0,     0,     0,     0,
     476,     0,   439,     0,   468,     0,     0,   445,   477,     0,
     446,   449,     0,     0,     0,     0,     0,     0,     0,     0,
     469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,   895,     0,   896,     0,   897,   470,
     471,   898,     0,   899,   900,   901,   472,     0,   902,   903,
       0,     0,     0,   882,     0,     0,   473,     0,     0,     0,
       0,     0,     0,   883,     0,     0,     0,     0,   447,     0,
       0,     0,     0,   472,     0,     0,     0,   474,     0,     0,
     448,     0,   475,   473,     0,   449,     0,   450,   451,   452,
     476,     0,   439,     0,     0,     0,   453,     0,   477,     0,
       0,     0,   884,   885,   474,     0,     0,     0,   454,   475,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   439,
       0,     0,     0,     0,     0,   477,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,   446,     0,     0,     0,
       0,   455,   886,   887,     0,     0,     0,   456,     0,   457,
       0,     0,   458,     0,   459,   460,   461,     0,  -995,     0,
     462,     0,   463,  -995,     0,     0,  -995,   464,     0,     0,
       0,     0,     0,  -995,  -995,     0,     0,     0,     0,     0,
     888,   450,   451,   452,     0,     0,   889,     0,     0,     0,
     453,   890,     0,     0,     0,  -995,     0,  -995,     0,   891,
       0,   465,   454,     0,     0,     0,   892,     0,     0,     0,
       0,   893,     0,     0,   447,     0,     0,     0,     0,     0,
     466,     0,     0,  -995,     0,     0,     0,     0,     0,     0,
     894,   449,     0,     0,     0,   455,     0,     0,     0,     0,
       0,   456,     0,   457,     0,     0,   458,   467,   459,   460,
     461,     0,     0,     0,   462,     0,   463,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -995,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   466,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,  -995,     0,   450,   451,   452,
       0,     0,     0,     0,   470,   471,   453,   445,     0,     0,
     446,   467,     0,     0,     0,     0,     0,  -995,   454,     0,
       0,     0,     0,     0,     0,     0,   895,     0,   896,     0,
     897,     0,     0,   898,     0,   899,   900,   901,   472,     0,
     902,   903,     0,   468,     0,     0,     0,     0,   473,     0,
       0,   455,     0,     0,     0,     0,     0,   456,  -995,   457,
       0,     0,   458,     0,   459,   460,   461,     0,     0,   474,
     462,  -995,   463,     0,   475,     0,     0,   464,  -995,     0,
       0,     0,   476,     0,   439,     0,   469,     0,   447,     0,
     477,     0,     0,     0,     0,     0,     0,     0,   470,   471,
       0,   445,     0,     0,   446,   449,  -995,     0,     0,     0,
       0,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -995,     0,     0,     0,
     466,     0,   472,     0,     0,     0,     0,     0,     0,  -995,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,     0,
       0,     0,     0,   474,     0,     0,     0,     0,   475,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   439,     0,
       0,     0,   447,     0,   477,     0,     0,     0,  -995,   468,
    -995,  -995,     0,     0,   591,     0,     0,     0,     0,   449,
       0,   450,   451,   452,  -995,     0,     0,     0,     0,   445,
     453,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   454,     0,     0,     0,  -995,     0,     0,     0,
       0,     0,   469,     0,     0,     0,     0,   445,     0,     0,
     446,     0,     0,     0,   470,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   455,     0,     0,     0,     0,
       0,   456,     0,   457,     0,     0,   538,     0,   459,   460,
     461,     0,     0,     0,   462,     0,   463,     0,   472,     0,
       0,   464,     0,     0,     0,     0,     0,     0,   473,     0,
     447,     0,  -995,     0,     0,   450,   451,   452,     0,     0,
       0,     0,   661,  -995,   453,     0,     0,   449,     0,   474,
       0,     0,     0,     0,   475,   465,   454,     0,   447,     0,
     539,     0,   476,  -995,   439,     0,     0,     0,     0,     0,
     477,     0,     0,     0,   466,   449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   455,
       0,     0,     0,     0,     0,   456,     0,   457,     0,     0,
     458,   467,   459,   460,   461,     0,     0,     0,   462,     0,
     463,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   468,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   450,   451,   452,     0,     0,     0,   465,
       0,     0,   453,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   454,     0,     0,     0,   466,     0,
       0,   450,   451,   452,     0,     0,   469,     0,     0,     0,
     453,     0,     0,     0,     0,     0,     0,     0,   470,   471,
       0,     0,   454,     0,     0,   467,     0,   455,     0,     0,
       0,     0,     0,   456,     0,   457,     0,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,     0,   463,     0,
       0,     0,   472,   464,     0,   455,     0,   468,     0,     0,
       0,   456,   473,   457,     0,     0,   458,     0,   459,   460,
     461,     0,     0,     0,   462,     0,   463,     0,     0,     0,
       0,   464,     0,   474,     0,     0,     0,   465,   475,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   439,   445,
     469,     0,   446,     0,   477,     0,   466,     0,     0,     0,
       0,     0,   470,   471,     0,   465,     0,     0,     0,     0,
       0,   445,     0,     0,   446,     0,     0,     0,     0,     0,
       0,     0,     0,   467,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   473,     0,     0,     0,
       0,   467,     0,     0,     0,   468,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
     447,     0,   475,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   439,   468,     0,     0,     0,   449,   477,     0,
       0,     0,   447,     0,     0,     0,     0,     0,   469,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
     470,   471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,     0,     0,   445,
       0,     0,   446,     0,     0,     0,     0,     0,   470,   471,
       0,     0,     0,     0,   472,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   473,     0,     0,     0,   790,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   472,     0,     0,   474,     0,     0,     0,     0,
     475,     0,   473,   450,   451,   452,     0,     0,   476,     0,
     439,     0,   453,     0,     0,     0,   477,     0,     0,     0,
       0,     0,     0,   474,   454,   450,   451,   452,   475,     0,
     447,     0,     0,     0,   453,     0,   476,     0,   439,     0,
       0,     0,     0,     0,   477,     0,   454,   449,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   455,     0,     0,
       0,     0,  1025,   456,     0,   457,     0,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,     0,   463,   455,
       0,     0,     0,   464,     0,   456,     0,   457,     0,     0,
     458,     0,   459,   460,   461,     0,     0,     0,   462,     0,
     463,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   465,     0,     0,
       0,     0,   539,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   466,     0,   445,   465,
       0,   446,     0,   450,   451,   452,     0,  1032,     0,     0,
       0,     0,   453,     0,     0,     0,     0,     0,   466,     0,
       0,     0,     0,   467,   454,     0,   445,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   468,     0,   455,     0,     0,
       0,     0,     0,   456,     0,   457,     0,     0,   458,     0,
     459,   460,   461,     0,     0,     0,   462,   468,   463,   447,
       0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,     0,   469,     0,
       0,     0,  1188,     0,     0,   446,     0,   447,     0,     0,
     470,   471,     0,     0,     0,     0,     0,   465,     0,     0,
     469,     0,     0,     0,   449,     0,     0,     0,     0,     0,
       0,     0,   470,   471,     0,     0,   466,     0,     0,     0,
       0,     0,     0,     0,   472,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   473,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,     0,   474,   473,     0,     0,     0,
     475,     0,     0,   447,     0,     0,     0,     0,   476,     0,
     439,     0,   450,   451,   452,   468,   477,   474,     0,     0,
     449,   453,   475,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   439,   454,     0,     0,     0,     0,   477,     0,
     450,   451,   452,     0,     0,     0,     0,     0,     0,   453,
       0,     0,     0,     0,     0,     0,     0,     0,   469,     0,
       0,   454,     0,     0,     0,     0,   455,     0,     0,     0,
     470,   471,   456,     0,   457,     0,     0,   458,     0,   459,
     460,   461,     0,     0,     0,   462,     0,   463,     0,     0,
       0,     0,   464,     0,   455,     0,     0,     0,     0,     0,
     456,     0,   457,     0,   472,   458,     0,   459,   460,   461,
       0,     0,     0,   462,   473,   463,   450,   451,   452,     0,
     464,     0,     0,     0,     0,   453,   465,     0,     0,     0,
       0,     0,     0,     0,     0,   474,     0,   454,     0,     0,
     475,     0,     0,     0,     0,   466,     0,     0,   476,     0,
     439,     0,     0,     0,   465,     0,   477,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     455,     0,   467,   466,     0,     0,   456,     0,   457,     0,
       0,   458,     0,   459,   460,   461,     0,     0,     0,   462,
       0,   463,     0,     0,     0,     0,   464,     0,     0,     0,
     467,     0,     0,     0,   468,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     465,     0,   468,     0,     0,     0,     0,     0,     0,     0,
       0,  1707,     0,     0,     0,     0,     0,   469,     0,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
     471,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,   467,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,   471,     0,
       0,     0,     0,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   473,     0,     0,     0,     0,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   472,     0,     0,   474,     0,     0,     0,     0,   475,
       0,   473,     0,     0,     0,     0,  2563,   476,     0,   439,
       0,     0,     0,     0,     0,   477,     0,     0,     0,     0,
       0,   469,   474,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,   470,   471,   476,     0,   439,  -390,     0,
       0,  -390,     0,   477,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   472,     0,     0,
       0,     0,     0,  -390,     0,  -390,     0,   473,     0,     0,
       0,     0,     0,  -390,     0,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,     0,     0,     0,     0,     0,     0,   474,     0,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   439,     0,     0,     0,     0,     0,   477,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -390,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -390,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1059,     0,
       0,     0,  -390,  -390,  -390,  -390,  -390,     0,     0,  -390,
    -390,     0,     0,  -390,     0,     0,     0,     0,     0,  -390,
       0,  -390,     0,     0,     0,     0,     0,  -390,     0,     0,
       0,     0,  -390,     0,     0,  -390,     0,     0,     0,   446,
       0,     0,     0,  -390,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -390,     0,     0,  -390,
       0,     0,     0,     0,     0,  -390,     0,  -390,     0,     0,
       0,     0,     0,     0,     0,     0,  -390,     0,     0,     0,
    1058,   603,     0,     0,     0,     0,     0,     0,     0,  -390,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -390,  -390,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -390,  -390,     0,     0,     0,  -390,   447,     0,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,     0,     0,     0,     0,
       0,  -390,     0,  -390,   449,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -390,  -390,     0,     0,     0,     0,
       0,     0,     0,  -390,     0,     0,  -390,  -390,     0,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,     0,     0,     0,     0,
       0,  -390,     0,  -390,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -390,
       0,     0,     0,  -390,     0,     0,  -390,     0,  -390,  -390,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -390,   603,   604,
     450,   451,   452,     0,     0,     0,     0,     0,  -390,   453,
    -390,  -390,  -390,     0,     0,     0,     0,     0,     0,     0,
       0,   454,     0,     0,     0,     0,     0,  -390,     0,     0,
       0,     0,  1059,     0,   447,     0,  -390,  -390,  -390,  -390,
    -390,  -390,     0,  -390,  -390,     0,     0,     0,     0,     0,
       0,   449,  -390,   605,   606,     0,     0,  -390,     0,     0,
       0,  -390,  -390,     0,     0,   607,     0,   459,   460,   461,
       0,     0,     0,   462,  -390,   463,     0,  -390,     0,     0,
    -390,     0,     0,     0,  -390,  -390,  -390,     0,     0,     0,
    -390,     0,     0,  -390,     0,     0,     0,     0,  -390,  -390,
       0,     0,     0,  -390,     0,  -390,     0,     0,     0,     0,
       0,     0,  1052,     0,   465,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -390,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   604,   450,   451,   452,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
     467,     0,     0,     0,     0,  -390,     0,     0,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -390,
       0,     0,     0,     0,     0,     0,     0,  -390,  1282,     0,
    -390,     0,   468,     0,     0,     0,     0,     0,     0,     0,
     605,   606,     0,     0,     0,  -390,     0,     0,     0,     0,
       0,     0,   458,     0,   459,   460,   461,     0,  -390,     0,
     462,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,  1283,
       0,  1630,     0,     0,     0,     0,     0,   470,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -2003,   465,     0,     0,     0,     0, -1149,     0,     0,     0,
       0,     0,  -390,     0,  -390,  -390,  -390,     0,     0,     0,
       0,   472,     0, -1149,     0,     0,     0,     0,     0,     0,
       0,   473,  1631,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -390, -1206,     0,     0,     0,   467,     0,     0,
       0,     0,   474,     0,     0,     0,     0,   475,     0,   447,
       0,  -390, -1206,     0,     0,   476,   608,   439,     0,     0,
       0,     0,     0,   477,     0,     0,   449,     0,  -390,   468,
       0,     0,     0,     0,     0,     0,     0,     0,  -390,  -390,
    -390,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -390,     0,  1284,     0,     0,     0,     0,  -390,
       0,     0,     0,     0,     0,     0,  1052,     0,     0, -1149,
   -1149, -1149,   469,     0,     0,     0,     0,     0, -1149,     0,
       0,     0,     0,     0,   470,   471,     0,     0,     0,     0,
   -1149,     0,     0,     0,     0,     0,     0, -2003,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   472,  1285,
       0,     0,   450,   451,   452,     0,     0,     0,   473,     0,
       0,   453,     0,     0, -1149,     0, -1149, -1149, -1149,     0,
   -1206,     0, -1149,   454, -1149,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,  1990,     0,     0,     0, -1206,
       0,     0,   476,   608,   439,     0,     0,     0,     0,     0,
     477,  1991,  1632,     0,  1992,  1993,  1994,  1995,  1996,  1997,
    1998,     0,     0, -1149,     0,     0,     0,   458,     0,   459,
     460,   461,     0,     0,     0,   462,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1999,     0,   946,   947,  2000,  2001,  2002,  2003,
    2004,     0,     0,     0,     0,     0,     0,     0,     0, -1149,
       0,     0,     0,     0,     0,     0,   465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1126,     0, -2003,  2005,     0,
   -2003, -1149,  1127, -2003,     0,     0,     0,     0,     0,     0,
       0, -2003,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1892,     0, -1892,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,     0, -1149, -1149,     0,     0,
   -2003,  2006,  2007,  2008,  2009,  2010,     0,     0,   955,   956,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -2003,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1149,     0,     0,     0,     0,     0,     0,   469,  1286,     0,
   -1149,     0,  2011,     0,     0,     0,     0,     0,     0,   470,
     471,     0,     0,     0,     0,   409,     0,     0,  2012,     0,
       0, -1149,     0,     0, -1979,     0, -1149,     0,     0,     0,
       0,     0,     0,     0, -1149,     0, -1149,     0,     0,     0,
       0,     0, -1149,   472,     0,     0,     0,     0,     0,     0,
       0,  1633,     0,   473,     0,     0,     0,     0,     0,     0,
    2013,     0, -2003,     0,     0,     0,     0,     0,     0,  1128,
   -2003,     0,     0,     0,   474,     0,     0,     0,     0,   475,
       0,     0,     0,     0, -2003,     0,     0,   476,     0,   439,
    2014,     0,     0,     0,     0,   477,     0,     0,     0,     0,
       0,     0,     0,     0,  2015,     0,     0,     0,     0,     0,
       0,     0,  2016,     0,     0,  2017, -2003,     0,     0,     0,
       0,     0,     0,     0,     0, -1892,     0,     0,     0,     0,
    2018,     0,     0,     0,     0,     0, -2003,     0, -2003,     0,
       0,     0,     0,  2019,  1483,  1129,     0,  1484,     0,     0,
    1485,     0,     0,     0,     0,     0,     0,     0,  1486,     0,
   -2003, -2003,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -2003,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -2003,     0,     0,     0,  2020,     0,  2021,
    2022,  2023,     0,     0,     0,     0, -1892,  1487,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -2003, -2003,     0,     0,  1488,  2024,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -387,     0, -2003,     0,
       0,     0,     0,     0,     0, -2003,     0, -2003, -2003,     0,
       0,     0,     0, -1979,     0,     0,     0,     0,     0,     0,
       0, -2003,     0,  2025,  2026,  2027, -2003,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2028,     0,  2644,
       0,     0,  2645, -2003,  1732,  2646,  1992,  1993,  1994,  1995,
    1996,  1997,  2647,  2648,     0,     0,     0,     0,     0,  1489,
       0,     0,     0,     0,     0,     0,     0,  1490,     0,     0,
   -2003,     0,     0,     0,  1475,     0,  1476,     0, -1894, -2003,
       0,  1491,     0,     0,  1999,     0,   946,   947,  2000,  2001,
    2002,  2003,  2004,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -2003,
       0,     0,     0,  1492,     0,     0,     0,     0,     0, -2003,
       0,     0,     0,     0,     0, -2003,     0,     0,     0,     0,
    2005,     0,     0,  1493,     0,  1494,     0,     0,     0,     0,
     608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1495,  1496,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2649,     0,     0,     0,     0,     0,  1497,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1498,     0,     0,  2006,  2007,  2008,  2009,  2010,   447,     0,
     955,   956,     0,     0,  2650,     0,     0,     0,     0,     0,
    2651,     0,  2652,     0,     0,   449,     0,     0, -1929,  1499,
    1500,     0,     0,  2653,     0,     0,  2654,     0,     0,     0,
       0,     0,     0,     0,  2011,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1501,     0,   409,     0,     0,
    2012,     0,  1502,     0,  1503,  1504,     0,     0,  2655,     0,
       0,     0,     0,     0,     0,     0,     0,  2656,  1505,     0,
       0,     0,     0,  1506,     0,     0,     0,     0,     0,     0,
    2657,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1507,     0,  2013,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2658,  1496,     0,     0,     0,     0,     0,     0,
       0,   450,   451,   452,     0,     0,     0,  1508,     0,     0,
     453,     0,  2659,     0,  1497,     0,  1509,     0,     0,     0,
       0,     0,   454,     0,     0,  2660,  2015,     0,     0,     0,
       0,     0,     0,     0,  2016,     0,     0,  2017,     0,     0,
       0,     0,     0,     0,     0,     0,  1510,     0,     0,     0,
       0,     0,  2018,     0,  2661,   491,  1511,     0,     0,     0,
       0,   456,  1512,   457,   447,     0,   458,     0,   459,   460,
     461,     0,     0,     0,   462,     0,   463,     0,     0,     0,
    2662,   449,     0,     0,     0,     0,     0,  1502,     0,  1503,
    1504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2663,     0,
       0,     0,     0,     0,     0,   465,     0,     0,     0,  2020,
       0,  2021,  2022,  2023,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2664,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,  2665,     0,     0,     0,     0,  -648,     0,
       0,     0,     0,  2666,     0,   447,     0,   450,   451,   452,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
       0,  2667,   449,   468,     0,  2025,  2026,  2027,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2028,
       0,     0,     0,     0,  2668,     0,  1732,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   491,     0,     0,     0,     0,   469,   456,     0,   457,
       0,     0,   458,     0,   459,   460,   461,     0,   470,   471,
     462,     0,   463,     0,     0,     0,     0,     0,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1172,     0,     0,     0,     0,     0,   449,     0,     0,     0,
     492,     0,   472,     0,   493,   494,     0,     0,   450,   451,
     452,   465,   473,     0,     0,     0,     0,   453,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   454,
     466,     0,     0,   474,     0,     0,     0,     0,   475,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   439,     0,
       0,     0,     0,     0,   477,     0,     0,   467,     0,     0,
       0,     0,   491,     0,     0,     0,     0,     0,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,     0,   463,     0,     0,     0,     0,     0,   468,
       0,     0,   450,   451,   452,     0,     0,   447,     0,     0,
       0,   453,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   454,   449,     0,     0,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,     0,     0,     0,     0,
       0,   466,     0,     0,   470,   471,   491,     0,     0,     0,
       0,     0,   456,     0,   457,     0,     0,   458,     0,   459,
     460,   461,     0,     0,     0,   462,  1815,   463,   467,     0,
       0,     0,     0,     0,     0,     0,   492,     0,   472,     0,
     493,   494,     0,     0,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,     0,     0,     0,     0,     0,   465,     0,     0,   474,
     450,   451,   452,     0,   475,   447,     0,     0,     0,   453,
       0,     0,   476,     0,   439,   466,     0,     0,     0,     0,
     477,   454,   449,     0,     0,     0,     0,     0,     0,     0,
     447,     0,     0,   469,     0,     0,     0,     0,     0,     0,
       0,     0,   467,     0,     0,   470,   471,   449,     0,     0,
       0,     0,     0,  1818,   491,     0,     0,     0,     0,     0,
     456,     0,   457,     0,     0,   458,     0,   459,   460,   461,
       0,     0,     0,   462,   468,   463,     0,   492,     0,   472,
       0,   493,   494,     0,     0,     0,     0,     0,     0,   473,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,   465,   475,     0,   469,   450,   451,
     452,     0,     0,   476,     0,   439,     0,   453,     0,   470,
     471,   477,     0,   466,     0,     0,     0,  1820,     0,   454,
       0,     0,     0,   450,   451,   452,     0,     0,     0,     0,
       0,     0,   453,     0,     0,     0,     0,     0,     0,     0,
     467,   492,     0,   472,   454,   493,   494,     0,     0,     0,
       0,     0,   491,   473,     0,     0,     0,     0,   456,     0,
     457,     0,     0,   458,     0,   459,   460,   461,     0,     0,
       0,   462,   468,   463,   474,     0,     0,   491,     0,   475,
       0,     0,     0,   456,     0,   457,   447,   476,   458,   439,
     459,   460,   461,     0,     0,   477,   462,     0,   463,     0,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
       0,     0,   465,     0,     0,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,   471,     0,
       0,   466,     0,     0,     0,     0,     0,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1839,
       0,     0,     0,     0,     0,     0,   466,     0,   467,   492,
       0,   472,     0,   493,   494,     0,     0,     0,     0,     0,
       0,   473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     0,     0,     0,   447,     0,     0,
     468,     0,   474,     0,     0,     0,     0,   475,     0,   450,
     451,   452,     0,     0,   449,   476,     0,   439,   453,     0,
       0,     0,     0,   477,     0,   468,     0,     0,     0,     0,
     454,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   469,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,   471,     0,     0,     0,
       0,     0,     0,   491,     0,     0,     0,     0,   469,   456,
       0,   457,     0,     0,   458,     0,   459,   460,   461,     0,
     470,   471,   462,     0,   463,     0,     0,   492,     0,   472,
       0,   493,   494,     0,     0,     0,     0,     0,     0,   473,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     450,   451,   452,     0,   472,     0,   493,     0,     0,   453,
     474,     0,     0,   465,   473,   475,     0,     0,     0,     0,
       0,   454,     0,   476,     0,   439,     0,     0,     0,     0,
       0,   477,   466,     0,     0,   474,     0,     0,     0,     0,
     475,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     439,     0,     0,     0,   491,     0,   477,     0,     0,   467,
     456,     0,   457,     0,     0,   458,     0,   459,   460,   461,
       0,     0,     0,   462,     0,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2888,     0,     0,     0,     0,
       0,   468,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,   469,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,   471,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     472,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     473,     0,   468,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   474,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   439,     0,     0,     0,
       0,     0,   477,     0,     0,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   474,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,     0,   476,     0,   439,     0,     0,
       0,     0,     0,   477
};

static const yytype_int16 yycheck[] =
{
     211,   212,   326,   199,   215,   446,   526,   366,   341,    81,
     410,   418,   412,   973,   347,   415,   685,   686,   687,   537,
    1240,   455,    42,  1264,   317,  1027,   319,   329,  1745,   322,
     207,   353,  1478,   326,  1535,  1481,   213,  1732,   656,  1323,
    1218,  1043,   882,  1223,  1367,   324,  1482,   647,   341,  1738,
     339,  1734,   320,  1349,   347,  1738,   872,   491,   533,   786,
     790,  1764,  1738,   742,   353,  1770,  1636,   634,  1246,   796,
    1905,   533,     6,     9,  1669,   368,     9,   370,     9,    22,
       1,    49,     1,   603,    60,     1,    21,    60,    58,     1,
      17,     0,   319,   331,  2067,     9,    76,  1985,    91,   938,
       1,   339,    17,    92,   858,  2082,  2083,    74,   136,   627,
      50,   319,   183,    50,   119,   353,   324,   115,    28,    32,
     128,    32,  1300,   331,   128,   606,    97,   323,   590,   325,
     129,   339,  2461,  1459,     9,   133,   866,   391,  1139,  1973,
     327,   184,   182,  2081,   166,   353,  1147,    50,   166,   336,
     136,   990,   348,    50,   350,   448,   343,   344,   148,   355,
    1725,   271,   197,  2051,   764,   172,    33,    21,   180,     9,
       0,   605,   606,   369,   858,   362,   387,   652,     1,  1357,
     101,    22,   222,   401,  2075,    60,   296,  1663,   399,    92,
     652,    67,   341,   234,   405,   406,   241,   408,   178,   492,
     493,   494,   413,   414,   253,   935,   184,   418,  1348,  1710,
     120,    51,   371,   159,  1384,   172,    50,   428,   241,   129,
    1714,   580,   308,   261,   517,   283,  1406,   520,   196,  2408,
    1795,  1796,  1797,   368,  2068,   319,   145,  1802,  1803,   507,
     149,   220,    65,   421,    28,  1810,  1248,   455,   241,   101,
     102,   424,    60,   211,   307,   271,   211,   424,   227,     9,
     265,  2454,   265,  2766,   265,  2558,   493,   317,   112,   475,
     299,    94,    95,   209,    74,   342,   424,   299,   611,   240,
     466,     8,   304,   491,   492,   493,   494,   354,   253,  2468,
    2469,   766,   319,   480,   323,   296,  2589,   483,   241,   208,
    1865,   351,  1032,   237,   711,   664,   207,   525,     0,  1874,
     185,    38,  1877,   222,   223,   145,  2293,    60,   611,   149,
     528,   527,   372,   723,    40,   498,  1005,  2520,   524,   567,
    1900,   498,  1902,    74,   265,   769,   120,   340,  2841,   535,
     578,   634,   477,   245,   430,   306,   404,   312,   305,   527,
     498,  2239,   793,   437,   921,   644,   325,    74,   545,   567,
     578,   520,    31,   211,    74,   840,   300,   405,   661,   271,
     578,   283,   559,    74,  1670,   250,  1812,   526,   208,  1557,
     429,   221,   371,  2217,   400,   319,   241,   211,   368,   212,
      74,   246,   222,   223,   296,  2574,   408,   831,   265,    68,
     241,    70,   118,   237,   591,  2110,   644,   353,   379,  1903,
     320,   649,   250,   253,   254,    59,   526,  2308,   241,   442,
      74,  2394,   130,    67,   115,   265,   634,   472,   280,   482,
    1270,   371,   390,     9,   371,   275,   644,   472,   656,  1279,
    1256,   649,   421,  1259,   472,   354,  2384,   134,   415,   134,
     390,   473,   353,   390,   440,   473,   527,  1933,   939,  1785,
      29,   265,   716,  1193,   982,   492,   493,   494,   371,   656,
    1037,   658,   765,   327,   371,   482,   663,   518,  2181,   772,
     773,   774,   472,  1237,   527,  2373,   457,   527,   781,   782,
     783,   784,   404,   786,   467,   347,   504,   477,   709,   527,
     504,   794,   469,   796,   797,   939,   717,   505,  2837,   332,
     721,   790,   319,   806,   807,   808,   809,   810,   486,  1520,
     360,   435,   527,   700,   354,   482,  1365,   526,   483,   522,
     246,   520,   472,   744,   341,   472,   463,  1012,   765,   474,
     347,   752,   418,  2377,   837,   763,   296,   481,   518,   527,
     485,  1691,   528,  1237,   781,   782,   783,   765,   526,  2532,
     472,  2126,   131,   472,   772,   773,   774,   794,   745,   871,
     483,   472,   483,   781,   782,   783,   784,  2266,   786,  1146,
     520,   527,   790,   520,   527,   134,   794,   866,   796,   797,
    2266,   527,   261,  1763,   527,   435,   527,  2192,   806,   807,
     808,   809,   810,   790,  2174,  1607,   527,   825,   527,   524,
     837,   527,   281,   363,   489,   415,   526,   520,   527,   533,
     474,   523,   253,   520,   367,  2602,   319,  1034,   921,   837,
    2517,   485,    35,   277,  1234,   483,   929,     7,  2341,  1817,
     858,   481,   472,   932,   468,   221,   842,   915,   455,   472,
     983,   489,   221,   361,   265,   136,   935,  1980,   866,  1338,
    1339,  1340,  1341,  1342,  1343,  1344,  1345,  1074,  1188,   469,
     857,   479,   527,   342,   415,   527,   484,    60,   865,   866,
    2568,   974,   526,   527,   491,   492,   493,   494,  1929,   265,
     983,     6,   250,   533,   932,   319,   265,   527,   415,   275,
    1878,   994,  1880,   419,  2357,   415,   275,   975,   265,   353,
     517,   419,  1119,   921,   415,  1675,  1191,   904,  2423,   937,
     289,   929,  1289,   527,   932,   208,  2561,   935,   469,  1191,
    1164,   415,  1025,   265,   421,   341,   421,   280,   765,   127,
    1918,   428,   265,   428,  1037,   772,   773,   774,   935,   177,
     265,    27,   469,  1032,   781,   782,   783,  2352,     6,   469,
     261,   415,  1329,     6,   227,   207,  1004,   794,   469,   413,
     797,   462,    65,   265,   418,   339,   467,   251,    39,   806,
     807,   808,   809,   810,   360,   469,    47,  1965,  1966,    59,
     265,   360,    62,   176,  2454,  1611,  1004,    67,   429,   265,
    1018,    94,    95,   265,   611,  1016,   234,   265,    33,   326,
     837,   265,   160,    34,   242,   469,  2623,     1,  1545,     0,
     301,  1008,   271,   355,  1032,   479,   851,   634,   472,  1037,
     484,   127,  1019,   168,   527,    59,    59,   506,   172,   503,
     527,   197,   527,    67,    67,  1032,   363,   296,  2735,   232,
     243,   876,  1063,  1146,   317,   225,   226,   526,   522,   435,
    2520,   225,  2623,    68,    48,    70,   435,  1160,   183,   438,
     439,   354,   421,  1166,  1604,   245,  1606,  1095,  2531,   428,
     128,   245,    66,   527,   179,   280,  2623,   290,   291,   292,
     115,   186,   917,  2429,   360,   526,  2192,  2720,  2623,  1333,
     328,   271,   929,   527,   405,   481,   221,   271,  2192,  1120,
    2233,   353,  2235,  1131,  1193,   265,   527,   160,  1129,  2636,
     526,   527,  1652,   107,   467,   399,   296,  2630,   204,  1106,
    1107,   489,   296,  1160,  2623,   245,   402,   130,  1146,  2623,
    2623,  1209,   261,   215,   216,   394,   971,  2623,   241,  1567,
     265,   527,  1160,   174,   357,   315,   319,   533,   765,   220,
     275,   271,   526,   298,   533,   772,   773,   774,  1206,   435,
     527,   305,  2508,   221,   781,   782,   783,   784,   221,   786,
    2787,  1189,  1712,   255,   256,  1193,   296,   794,  2705,   796,
     797,   252,   294,   196,   178,   527,  1289,  1290,  1206,   806,
     807,   808,   809,   810,   527,   355,   249,   277,  1219,  1298,
     533,   211,   527,   274,   266,   279,   219,   265,   388,  1237,
     376,   414,   265,   524,     6,   542,  2787,   275,   212,  1322,
     837,   351,   275,   424,  2857,   527,  1329,   280,  1246,   332,
     265,   222,   223,   345,   411,   360,   441,  2707,   443,  1456,
    2787,   371,   527,   277,   277,   276,   261,   241,  1898,  1626,
    1298,  1299,  2787,  1356,   248,   527,   429,   533,   329,   527,
    1363,  1364,   265,   527,   434,   259,   340,   526,   527,  2796,
    1555,  1289,  1290,   353,   487,   488,   405,   164,   471,   492,
    1298,  1299,  1300,  2546,   467,   265,   479,   480,   265,   527,
       6,   484,   429,  2787,  2787,   472,  1324,   498,   403,  2826,
     229,     6,   360,   280,   921,  1549,   474,   360,   308,   283,
     435,  1329,   929,   177,  2773,  1725,  2579,   485,   328,   353,
     353,   472,   393,  1160,   265,   498,  1354,   342,  2787,  2834,
       6,  1541,   261,   413,   185,   518,  1364,  2712,   418,  1357,
    1337,  1718,  2717,   523,  2332,  2333,   526,   424,  2853,   523,
    1482,   271,  1373,   240,   295,   332,   481,  1378,  1355,  1380,
     168,   498,  1383,  1384,   172,  1386,   983,  2357,   207,   472,
     234,   365,   366,   234,   166,   355,   296,   435,   242,   413,
     413,   242,   435,  2758,   418,   418,   380,  2762,   382,   494,
     474,   365,   454,   367,   476,   246,   478,   130,   249,   340,
    2656,   526,   527,   523,   136,   479,   526,   629,   533,   467,
     484,   204,   221,  1400,   519,   302,   521,   433,  1561,   306,
    1037,   498,  2685,   481,   495,  2681,  1529,  1530,   481,   221,
     430,   365,  1267,  1536,   208,  1538,   365,   178,   472,   472,
     524,   127,  1545,  1809,   373,   178,   504,   527,   222,   223,
     370,  1438,     0,   178,   516,  1558,   265,   473,  1561,   681,
    2706,     8,  2513,  1484,   328,   527,   275,   328,  1489,   527,
    1573,   212,   265,   265,   527,   533,  2527,   430,   472,   479,
     533,   434,  1625,   275,   484,   169,  1507,   212,   172,     8,
    1325,    38,  1529,  1530,   472,   334,   335,   431,   432,  1536,
    1612,  1538,  2748,    12,   241,   221,    15,    16,   240,  1875,
    1876,  1529,  1530,  1616,   353,  1604,   221,  1606,  1536,    38,
    1538,  1558,  1625,  1626,  2514,  1742,   520,  1545,   265,  1146,
     474,  1634,  1749,   527,  2780,  2781,  1573,   136,  1868,  1557,
    1558,   485,  2788,  1160,   111,   221,  2792,  2793,  2859,   265,
     527,   360,   107,  2604,   121,  1573,   533,   271,  1661,   275,
     265,  2612,  1674,  1652,   163,    89,   165,  1588,   360,   301,
     275,  1714,   411,  1594,   306,  2821,   496,    11,   471,  1600,
     354,   318,   296,   320,   271,   127,  1604,   480,  1606,   265,
    1693,  1808,  1809,  2623,   410,   221,   212,   145,  1701,   275,
     472,   149,  1650,   308,  2850,   271,   526,     9,  1626,   296,
      12,  1714,   209,    15,    16,  1718,  1634,   169,   475,   303,
     172,   305,  1643,  1712,   196,   241,   435,    61,   470,  1657,
     296,   411,  1650,   196,  1652,  1663,  1471,   479,  1473,   265,
    1884,   238,   484,   435,   360,   257,   258,   219,   479,   275,
     466,  1657,   470,   484,    57,   360,   219,    31,  1875,  1876,
     208,   479,  2432,   479,  1701,  1662,   484,   101,   484,   103,
      48,   105,  1289,  1290,   222,   223,  1808,  1809,   235,   113,
    1812,   473,   472,  1701,   360,   472,  2846,    36,    66,   481,
      39,    94,  1529,  1530,  1712,  1723,  2856,    46,    47,  1536,
    1718,  1538,   149,   466,  1914,   468,  1703,  1704,   111,    25,
      26,   365,  1329,   367,   145,  1550,  1551,  1738,   121,   435,
    2487,  1558,    11,  1744,   533,   430,   127,  2494,  2495,   107,
     435,  1752,   456,   457,   360,   527,  1573,   171,   112,  1574,
    1575,   533,   466,  1875,  1876,    23,    24,    96,  2076,   472,
    1580,   467,   318,    69,   320,    71,   185,    73,   132,   435,
    1903,   507,   508,   509,   510,   481,   411,   196,  2839,  2840,
    1757,   197,    61,   199,   472,  2019,   481,   286,   287,  1614,
     365,   469,   367,  1618,   411,  1806,  1807,   511,  2600,  2860,
     219,   479,   108,   109,   110,   181,   484,  2014,   472,   173,
    1903,   472,   350,   312,   313,   481,   354,   436,  2879,   435,
     315,   527,   101,  2143,   103,   434,   105,   533,   167,   469,
     249,   472,   527,   197,   113,   772,   773,   774,   533,   479,
    1665,  1666,   266,   469,   484,  2906,    27,  2888,   212,   221,
     310,   311,  1985,   479,   160,   390,   162,     1,   484,   198,
     797,   527,   303,   169,   305,   481,   172,   533,   472,    11,
    1878,   472,  1880,   241,  1701,   472,   261,  2084,   263,   472,
     248,   220,   507,   508,   509,   510,   472,   261,   312,   263,
     416,   259,   171,   265,   286,   287,   349,    41,    42,    43,
      44,    45,   365,   275,   367,  1777,   261,  1779,   263,   529,
    1918,   507,   508,   509,   510,  1933,   527,   533,  2051,    61,
     312,   313,  1529,  1530,   859,   860,   861,   862,   241,  1536,
    1167,  1538,    69,  1170,    71,   274,    80,    81,  1545,  1176,
     808,   809,   810,  1180,  1994,  1995,  1996,  1997,   492,  1186,
     494,  1558,   442,  1964,   423,   261,   423,   263,  1966,   101,
      60,   103,  1537,   105,  1539,   383,  1573,  1542,  1543,  1544,
     309,   113,     6,  1548,   280,     9,    23,    24,   806,   807,
     782,   783,   406,   227,  1559,  1560,   472,   266,   360,   353,
     329,   320,   265,   472,   527,   324,   265,   365,   366,   527,
     527,  2125,   331,   332,   411,   467,    77,   472,   472,   418,
     339,    67,   380,   342,   382,   429,    50,  2028,   347,  1626,
     349,    62,   351,   352,   353,   354,    72,  1634,   452,   171,
     527,   527,  2125,   312,   472,   137,   204,   122,   123,   124,
     483,   317,   371,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   391,    87,   393,   394,  2149,   483,    92,  2070,
     483,   483,  2073,   435,   138,  2272,   483,  2085,   407,  2080,
     104,   483,  2279,   483,  2274,   483,   139,   483,  2838,   468,
     483,   410,  2161,   412,  2163,   483,   415,   483,   176,   467,
     429,   140,   401,   141,  1701,   365,  2107,   142,   518,   143,
     106,   144,   462,   527,   472,   467,  2239,    46,   483,   481,
     147,  1718,  2108,  2109,    50,  2208,   463,   422,   466,   460,
     150,  1946,  1947,  2216,   266,   204,  2219,   406,   151,    68,
      69,    70,    71,   152,  1959,  1960,   153,   172,   522,   280,
      32,   154,   117,   155,   204,   156,   117,   157,   472,   158,
     411,   270,   520,  2161,   527,  2163,   495,   472,   464,   323,
     527,   533,   247,   418,   265,   472,   200,   201,   202,   527,
     312,   112,  2379,   452,   265,   209,   261,   489,   507,   265,
    2191,   472,   429,   323,   114,   483,   467,   221,   390,  2176,
    2177,  2391,   527,   472,   527,   527,   211,   341,   352,   528,
     232,  2188,   388,   265,   281,   172,   305,   524,   524,   515,
    2410,  2411,   356,   135,  2421,   183,  2416,   379,   467,   472,
     254,   527,    56,    57,   526,   175,   260,   136,   262,   237,
     467,   265,   467,   267,   268,   269,    50,  2330,   567,   273,
    2373,   275,    50,   204,   237,   472,   280,   377,   527,   578,
     411,   472,   472,  2460,  2231,  2348,   475,   264,    90,    23,
      94,   346,   347,   348,   406,   472,  2735,  2360,   463,   417,
     265,  2478,   241,   353,    76,   527,   361,   111,   281,   218,
     314,  2292,   472,  2483,   464,   319,   532,   121,  2299,  2300,
    2301,  2302,   531,   246,   310,   442,  2307,   285,   469,   333,
     469,   630,   469,   469,   469,   244,   469,   376,   467,   469,
     452,   469,  2137,  2138,  2139,   644,  2312,   467,   211,   395,
     649,   211,   261,    17,   263,   463,   360,   146,  2339,   320,
     472,   135,   467,    50,   129,   211,   148,   371,     8,   379,
     204,   524,   524,   211,  2340,   318,  2546,  2334,   442,   472,
     467,     9,     7,   411,   472,   294,  2515,    91,   392,   380,
     281,    22,   317,   520,   197,   458,    48,   339,   310,    59,
     429,  2571,   527,   458,     8,  2393,   308,   316,   430,  2579,
    2580,   211,   306,   527,   240,   527,   520,   520,    50,   418,
     197,  2402,   197,   246,   723,   429,  2221,  2222,   325,   338,
     301,   435,   327,   321,   136,   344,  2417,   341,  2608,   324,
     118,   472,   411,   447,   448,   457,   405,   527,   212,   212,
    2431,   527,   265,   238,   463,   522,   211,  2627,   211,     4,
     375,   760,   375,   107,  2430,  2568,   472,     8,    38,   477,
      50,   307,   271,   246,    19,   271,  2687,   481,   514,   482,
     227,   100,  2659,    55,   472,    30,   524,   491,   197,  2552,
     411,   790,   399,   241,   498,   467,   263,     6,    59,   305,
       9,   419,   527,   271,    40,   115,   442,    50,   512,   350,
     271,  2801,   395,   517,   423,  2685,   520,   271,   472,   271,
     472,   525,    67,   527,   433,   164,   302,    54,   332,   533,
     463,    27,   336,   337,   342,   533,   417,   467,    17,   429,
     114,   450,  2523,   419,   466,   350,   503,   204,  2651,   265,
     112,   438,   353,   472,   420,   362,   527,  2727,   474,   119,
     196,     7,   381,   472,  2545,   437,   467,   866,    31,   472,
     232,   526,   119,   472,   472,   229,   380,   451,    87,   350,
     524,   320,   317,   472,   493,   212,   184,   527,  2651,   133,
      59,   212,   265,   397,   398,   104,   219,   230,   527,   124,
     218,   204,  2665,   324,   513,  2668,    50,  2701,   332,   444,
     524,   520,     7,   522,    55,    58,   915,  1112,    60,    53,
      52,  2798,   204,   219,  1447,  2549,  1109,   397,  1091,  2298,
    1427,   733,  2483,   932,  2311,  2291,   935,  2312,  2701,   704,
    2306,  2622,  2623,  2477,  1738,  2626,   688,  2266,  2711,  2743,
    2623,  2886,  2573,  2634,  2635,  2570,  2598,  2683,  2239,   168,
    2873,  2898,  2850,  2520,  2645,  2649,  2649,  2744,  2845,  2650,
    2744,    65,  2849,   241,  2737,  1495,   975,  1609,  1131,  2623,
    2743,  1200,   507,  1211,   229,  1607,  2142,   520,  2141,   542,
    1237,   200,   201,   202,   874,   871,  1611,  1259,   563,   825,
     209,  1894,   211,   918,   925,  1004,  1634,  1287,  1908,  1661,
    1907,  1317,   221,  1663,   600,   611,   261,  1933,  1723,  1677,
     644,   995,  1346,  2704,   354,   642,   271,  1704,  1969,  1364,
    2907,   658,  1364,  1032,  2700,  1047,  2589,  1472,  2719,  1470,
    2721,   854,  2805,  1553,  2725,   254,  1554,   853,  1974,  1963,
    2351,   260,  1962,   262,  2226,  2225,   265,  1975,   267,   268,
     269,  1579,  1578,   630,   273,  1078,   275,  1697,  1697,  2059,
    1697,   280,  1697,   735,  1884,   815,  2839,  2840,  1333,  1561,
    1812,   326,   904,  2764,  2765,  2651,   331,  1436,  1431,   298,
     475,  2443,  2269,  2825,  2539,  1103,  1654,  2860,  2779,  1353,
    1761,  1623,  2691,  2784,  2785,   314,  2841,  1382,  2534,  2872,
    2873,    -1,    -1,    -1,    -1,    -1,  2879,    -1,    -1,  2800,
     365,    -1,  2803,  2804,   333,    -1,    -1,  1126,   373,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2902,
     385,    -1,    -1,  2906,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   360,    87,    -1,    -1,  2836,    -1,    -1,    -1,    -1,
      -1,  2839,  2840,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,   418,    -1,    -1,    -1,   422,    -1,    -1,
      -1,   390,  2860,   392,    -1,    -1,   431,    -1,    -1,    -1,
    1189,    -1,    -1,    -1,  1193,    -1,    -1,   442,    -1,    -1,
      -1,  2879,    -1,    -1,    -1,    -1,    -1,  1206,    -1,    -1,
    1209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   435,   472,  2906,    -1,
     475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,   448,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1246,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   200,   201,   202,    -1,    -1,
      -1,    -1,   481,    -1,   209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,  1298,
    1299,  1300,    10,   512,    -1,    -1,    -1,    -1,   517,    -1,
      18,    -1,    -1,    -1,    -1,    -1,   525,   526,   527,    -1,
      -1,    -1,    -1,    -1,   533,    -1,    -1,    -1,    -1,    -1,
     265,    -1,   267,   268,   269,    -1,    -1,    -1,   273,    -1,
      -1,    -1,  2839,  2840,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,  1357,    -1,
      -1,    -1,    -1,  2860,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    79,    -1,    -1,  2651,  1374,    -1,    -1,    -1,   314,
      -1,    -1,  2879,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,  2906,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,   126,    -1,
     355,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    -1,    -1,    -1,    -1,   164,   392,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1482,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,   210,    -1,    -1,   213,   214,    -1,    -1,    -1,
      -1,    -1,   447,   448,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,   231,    -1,   233,    -1,    -1,   236,    -1,
      -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1541,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,  1557,    -1,
      -1,    -1,  2839,  2840,    -1,    -1,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,   282,    -1,   284,   512,    -1,    -1,
      -1,    -1,   517,  2860,    -1,    -1,   294,    -1,    -1,    -1,
     525,    -1,   527,   301,   302,   303,    -1,   305,   306,   307,
     308,    -1,  2879,    -1,    -1,  1604,    -1,  1606,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,    -1,    -1,    -1,   335,    10,  2906,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1650,    -1,  1652,    -1,   363,   364,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   374,    -1,     9,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
      -1,   389,    64,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,   400,    75,    -1,    -1,    -1,    79,    -1,    -1,
      -1,   409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,   420,  1712,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   430,   431,    -1,    -1,  1725,    -1,    -1,    -1,
      -1,    -1,   440,    -1,   116,    -1,    -1,   445,   446,    -1,
      -1,   449,   124,   451,   126,    -1,    87,    -1,    -1,  1748,
      -1,   459,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   472,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   482,    -1,    -1,   159,    -1,    -1,
      -1,    -1,   490,    -1,    -1,    -1,    -1,    -1,   170,   497,
      -1,    -1,    -1,   175,   502,    -1,  1795,  1796,  1797,    -1,
      -1,    -1,    -1,  1802,  1803,    -1,    -1,    -1,    -1,  1808,
    1809,  1810,    -1,  1812,    -1,    -1,   524,    -1,    -1,    -1,
      -1,   203,   530,    -1,    -1,    -1,    -1,    -1,   210,    -1,
      -1,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,   233,    -1,    -1,   236,    -1,    -1,    -1,    -1,   200,
     201,   202,    -1,    -1,    -1,    -1,  1865,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,  1874,  1875,  1876,  1877,  1878,
     221,  1880,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,   278,    -1,    -1,    -1,
     282,    -1,   284,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,    -1,    -1,  1914,    -1,    -1,    -1,  1918,
      -1,    -1,    -1,    -1,   265,    -1,   267,   268,   269,    -1,
      -1,    -1,   273,    -1,   275,    -1,    -1,    52,    53,    -1,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    79,    -1,    -1,  1966,    -1,    -1,
      -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    93,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,  1988,
      -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,   387,    -1,   389,    31,   124,
      -1,   126,    -1,    36,   396,    -1,    39,    -1,   400,   360,
      -1,    -1,    -1,    46,    47,    -1,    -1,   409,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,    -1,
      -1,    -1,    -1,    -1,   159,    68,    -1,    70,    -1,   431,
      -1,   392,    -1,    -1,    -1,   170,    -1,    -1,   440,    -1,
     175,    -1,    -1,   445,   446,    -1,    -1,   449,    -1,   451,
      -1,    -1,    -1,    96,    -1,    -1,    -1,   459,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
     472,    -1,    -1,    -1,   435,   210,    -1,    -1,   213,   214,
      -1,    -1,    -1,    -1,    -1,    -1,   447,   448,   490,   224,
      -1,    -1,    -1,    -1,    -1,   497,   231,    -1,   233,    -1,
     502,   236,    -1,    -1,    -1,    -1,    -1,  2126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,    -1,    -1,    -1,   167,    -1,    -1,    -1,   530,    -1,
     491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2161,   278,  2163,    -1,    -1,   282,    -1,   284,
      -1,   512,    -1,    -1,    -1,   198,   517,    -1,    -1,   294,
      -1,    -1,    -1,    -1,   525,  2184,   527,    -1,    -1,    -1,
      -1,    -1,   533,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,   281,   374,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   387,    -1,   389,  2274,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,   400,   309,    -1,    -1,    -1,
      -1,  2290,  2291,    -1,   409,    -1,    -1,    40,    41,    42,
      43,    44,    45,    -1,    -1,   420,   329,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,   342,
      -1,    -1,    -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,
     445,   446,    -1,    -1,   449,    78,   451,    80,    81,    82,
      83,    84,    85,    86,   459,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   391,    -1,
     393,   394,    -1,    -1,    -1,   490,     1,    -1,     3,    -1,
       5,   124,   497,    -1,   407,    10,    -1,   502,    -1,    -1,
      -1,    -1,  2391,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,  2408,
      -1,  2410,  2411,    -1,    -1,   530,    -1,  2416,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
    2429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,   187,   188,   189,   190,   191,    -1,
      75,   194,   195,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,  2468,
    2469,    -1,   495,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   506,  2483,   228,    -1,  2486,  2487,    -1,
      -1,   116,    -1,    -1,    -1,  2494,  2495,  2496,    -1,   124,
      -1,   126,    -1,   526,    -1,    -1,    -1,    -1,    -1,  2508,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   286,    -1,   170,    -1,  2546,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2571,    -1,    -1,  2574,    -1,    -1,   203,    -1,
    2579,  2580,    -1,    -1,    -1,   210,    -1,   330,   213,   214,
    2589,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,   224,
      -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,   233,  2608,
      -1,   236,    -1,   356,    -1,    -1,    -1,  2616,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2627,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,   282,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   425,   426,   427,    -1,  2685,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,
     335,    10,    -1,  2712,    -1,    -1,    -1,    -1,  2717,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2727,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   374,
      -1,    -1,    -1,    52,    53,    -1,   499,   500,   501,  2758,
      -1,    -1,   387,  2762,   389,    64,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,   400,    75,    -1,    -1,    -1,
      79,    -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,   420,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,   440,    -1,   116,    -1,    -1,
     445,   446,    -1,    -1,   449,   124,   451,   126,    -1,    -1,
      -1,    -1,    -1,    -1,   459,    -1,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,    -1,
      -1,   170,   497,    -1,    -1,    -1,   175,   502,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   530,    -1,    -1,    -1,   104,
      -1,   210,    -1,    -1,   213,   214,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,   224,    -1,    12,    13,    14,
      -1,    -1,   231,    -1,   233,    20,    -1,   236,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,   278,
      -1,    -1,    -1,   282,    -1,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,   200,   201,   202,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,   322,    -1,    -1,   221,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,   363,   260,    -1,   262,    -1,    -1,
     265,    -1,   267,   268,   269,   374,    -1,    -1,   273,    -1,
     275,   166,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,
     389,   176,    -1,    -1,    -1,    -1,    -1,   396,    -1,    -1,
      -1,   400,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     409,    -1,    -1,    -1,    -1,   200,   201,   202,    -1,   314,
      -1,   420,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,
     215,   216,   431,    -1,    -1,    -1,   221,    -1,   333,    -1,
      -1,   440,   200,   201,   202,    -1,   445,   446,    -1,    -1,
     449,   209,   451,    -1,    -1,    -1,   241,    -1,    -1,    -1,
     459,    -1,    -1,   221,    -1,   360,    -1,    -1,    -1,   254,
     255,   256,    -1,   472,    -1,   260,    -1,   262,    -1,    -1,
     265,    -1,   267,   268,   269,    -1,    -1,    -1,   273,    -1,
     275,   490,    -1,    -1,    -1,   280,    -1,   392,   497,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,   265,   293,   267,
     268,   269,    -1,    -1,   299,   273,    -1,   275,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,   314,
      -1,   530,    -1,    -1,   319,    -1,    -1,    -1,    -1,   324,
     435,    -1,    -1,     6,    -1,    -1,     9,    -1,   333,    12,
      13,    14,   447,   448,    -1,    -1,   314,    20,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,   474,
      -1,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,
     485,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,
      63,    -1,   360,    -1,    -1,    -1,    -1,   392,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      -1,    -1,   517,    -1,    87,    -1,    -1,    -1,    -1,    -1,
     525,    -1,   527,    -1,   392,    -1,    -1,     6,   533,    -1,
       9,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   447,   448,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,    -1,    -1,
      -1,    -1,    -1,    -1,   469,    -1,   471,    -1,   473,   447,
     448,   476,    -1,   478,   479,   480,   481,    -1,   483,   484,
      -1,    -1,    -1,   166,    -1,    -1,   491,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,   481,    -1,    -1,    -1,   512,    -1,    -1,
      99,    -1,   517,   491,    -1,   104,    -1,   200,   201,   202,
     525,    -1,   527,    -1,    -1,    -1,   209,    -1,   533,    -1,
      -1,    -1,   215,   216,   512,    -1,    -1,    -1,   221,   517,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   525,    -1,   527,
      -1,    -1,    -1,    -1,    -1,   533,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,   254,   255,   256,    -1,    -1,    -1,   260,    -1,   262,
      -1,    -1,   265,    -1,   267,   268,   269,    -1,    31,    -1,
     273,    -1,   275,    36,    -1,    -1,    39,   280,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
     293,   200,   201,   202,    -1,    -1,   299,    -1,    -1,    -1,
     209,   304,    -1,    -1,    -1,    68,    -1,    70,    -1,   312,
      -1,   314,   221,    -1,    -1,    -1,   319,    -1,    -1,    -1,
      -1,   324,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
     333,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
     343,   104,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,    -1,   262,    -1,    -1,   265,   360,   267,   268,
     269,    -1,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
      -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,   314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,    -1,   198,    -1,   200,   201,   202,
      -1,    -1,    -1,    -1,   447,   448,   209,     6,    -1,    -1,
       9,   360,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,   471,    -1,
     473,    -1,    -1,   476,    -1,   478,   479,   480,   481,    -1,
     483,   484,    -1,   392,    -1,    -1,    -1,    -1,   491,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,   261,   262,
      -1,    -1,   265,    -1,   267,   268,   269,    -1,    -1,   512,
     273,   274,   275,    -1,   517,    -1,    -1,   280,   281,    -1,
      -1,    -1,   525,    -1,   527,    -1,   435,    -1,    87,    -1,
     533,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,   448,
      -1,     6,    -1,    -1,     9,   104,   309,    -1,    -1,    -1,
      -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,
     333,    -1,   481,    -1,    -1,    -1,    -1,    -1,    -1,   342,
      -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,
      -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   525,    -1,   527,    -1,
      -1,    -1,    87,    -1,   533,    -1,    -1,    -1,   391,   392,
     393,   394,    -1,    -1,    99,    -1,    -1,    -1,    -1,   104,
      -1,   200,   201,   202,   407,    -1,    -1,    -1,    -1,     6,
     209,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      -1,    -1,   435,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,   447,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,    -1,   262,    -1,    -1,   265,    -1,   267,   268,
     269,    -1,    -1,    -1,   273,    -1,   275,    -1,   481,    -1,
      -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      87,    -1,   495,    -1,    -1,   200,   201,   202,    -1,    -1,
      -1,    -1,    99,   506,   209,    -1,    -1,   104,    -1,   512,
      -1,    -1,    -1,    -1,   517,   314,   221,    -1,    87,    -1,
     319,    -1,   525,   526,   527,    -1,    -1,    -1,    -1,    -1,
     533,    -1,    -1,    -1,   333,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   260,    -1,   262,    -1,    -1,
     265,   360,   267,   268,   269,    -1,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   200,   201,   202,    -1,    -1,    -1,   314,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,   333,    -1,
      -1,   200,   201,   202,    -1,    -1,   435,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,   448,
      -1,    -1,   221,    -1,    -1,   360,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,   262,    -1,    -1,   265,    -1,
     267,   268,   269,    -1,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   481,   280,    -1,   254,    -1,   392,    -1,    -1,
      -1,   260,   491,   262,    -1,    -1,   265,    -1,   267,   268,
     269,    -1,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
      -1,   280,    -1,   512,    -1,    -1,    -1,   314,   517,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   525,    -1,   527,     6,
     435,    -1,     9,    -1,   533,    -1,   333,    -1,    -1,    -1,
      -1,    -1,   447,   448,    -1,   314,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   360,   333,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,
      -1,   360,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      87,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     525,    -1,   527,   392,    -1,    -1,    -1,   104,   533,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,   435,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     447,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   435,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,   447,   448,
      -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,   467,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   481,    -1,    -1,   512,    -1,    -1,    -1,    -1,
     517,    -1,   491,   200,   201,   202,    -1,    -1,   525,    -1,
     527,    -1,   209,    -1,    -1,    -1,   533,    -1,    -1,    -1,
      -1,    -1,    -1,   512,   221,   200,   201,   202,   517,    -1,
      87,    -1,    -1,    -1,   209,    -1,   525,    -1,   527,    -1,
      -1,    -1,    -1,    -1,   533,    -1,   221,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,   237,   260,    -1,   262,    -1,    -1,   265,    -1,
     267,   268,   269,    -1,    -1,    -1,   273,    -1,   275,   254,
      -1,    -1,    -1,   280,    -1,   260,    -1,   262,    -1,    -1,
     265,    -1,   267,   268,   269,    -1,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,
      -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,     6,   314,
      -1,     9,    -1,   200,   201,   202,    -1,   204,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,   360,   221,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   392,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,   262,    -1,    -1,   265,    -1,
     267,   268,   269,    -1,    -1,    -1,   273,   392,   275,    87,
      -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,   435,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    87,    -1,    -1,
     447,   448,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,
     435,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   447,   448,    -1,    -1,   333,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   360,    -1,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   512,   491,    -1,    -1,    -1,
     517,    -1,    -1,    87,    -1,    -1,    -1,    -1,   525,    -1,
     527,    -1,   200,   201,   202,   392,   533,   512,    -1,    -1,
     104,   209,   517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     525,    -1,   527,   221,    -1,    -1,    -1,    -1,   533,    -1,
     200,   201,   202,    -1,    -1,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,    -1,
      -1,   221,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     447,   448,   260,    -1,   262,    -1,    -1,   265,    -1,   267,
     268,   269,    -1,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,    -1,   280,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,   262,    -1,   481,   265,    -1,   267,   268,   269,
      -1,    -1,    -1,   273,   491,   275,   200,   201,   202,    -1,
     280,    -1,    -1,    -1,    -1,   209,   314,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   512,    -1,   221,    -1,    -1,
     517,    -1,    -1,    -1,    -1,   333,    -1,    -1,   525,    -1,
     527,    -1,    -1,    -1,   314,    -1,   533,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     254,    -1,   360,   333,    -1,    -1,   260,    -1,   262,    -1,
      -1,   265,    -1,   267,   268,   269,    -1,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,
     360,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,    -1,    -1,    -1,    -1,    -1,   435,    -1,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,
     448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   435,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,   448,    -1,
      -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,   392,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   481,    -1,    -1,   512,    -1,    -1,    -1,    -1,   517,
      -1,   491,    -1,    -1,    -1,    -1,     1,   525,    -1,   527,
      -1,    -1,    -1,    -1,    -1,   533,    -1,    -1,    -1,    -1,
      -1,   435,   512,    -1,    -1,    -1,    -1,   517,    -1,    -1,
      -1,    -1,    -1,   447,   448,   525,    -1,   527,    33,    -1,
      -1,    36,    -1,   533,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,   491,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,
      -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   525,    -1,   527,    -1,    -1,    -1,    -1,    -1,   533,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,   194,
     195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,   204,
      -1,   206,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,
      -1,    -1,   217,    -1,    -1,   220,    -1,    -1,    -1,     9,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,    -1,   244,
      -1,    -1,    -1,    -1,    -1,   250,    -1,   252,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
       1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,    -1,    -1,    -1,    37,    87,    -1,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,   316,    -1,   318,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,   330,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   338,    -1,    -1,   341,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,   356,    -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,
      -1,    -1,    -1,   124,    -1,    -1,   391,    -1,   393,   394,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    51,   199,
     200,   201,   202,    -1,    -1,    -1,    -1,    -1,   423,   209,
     425,   426,   427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,   183,    -1,    87,    -1,   187,   188,   189,   190,
     191,   456,    -1,   194,   195,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   467,   253,   254,    -1,    -1,   472,    -1,    -1,
      -1,   212,   477,    -1,    -1,   265,    -1,   267,   268,   269,
      -1,    -1,    -1,   273,   489,   275,    -1,   228,    -1,    -1,
     495,    -1,    -1,    -1,   499,   500,   501,    -1,    -1,    -1,
     241,    -1,    -1,   244,    -1,    -1,    -1,    -1,   513,   250,
      -1,    -1,    -1,   518,    -1,   520,    -1,    -1,    -1,    -1,
      -1,    -1,   527,    -1,   314,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
     360,    -1,    -1,    -1,    -1,   316,    -1,    -1,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,     9,    -1,
     341,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,   254,    -1,    -1,    -1,   356,    -1,    -1,    -1,    -1,
      -1,    -1,   265,    -1,   267,   268,   269,    -1,   369,    -1,
     273,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   435,    -1,    -1,    -1,    60,
      -1,     9,    -1,    -1,    -1,    -1,    -1,   447,   448,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     460,   314,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,   423,    -1,   425,   426,   427,    -1,    -1,    -1,
      -1,   481,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   453,   503,    -1,    -1,    -1,   360,    -1,    -1,
      -1,    -1,   512,    -1,    -1,    -1,    -1,   517,    -1,    87,
      -1,   472,   522,    -1,    -1,   525,   526,   527,    -1,    -1,
      -1,    -1,    -1,   533,    -1,    -1,   104,    -1,   489,   392,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,   500,
     501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   513,    -1,   185,    -1,    -1,    -1,    -1,   520,
      -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,    -1,   200,
     201,   202,   435,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,   447,   448,    -1,    -1,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   481,   250,
      -1,    -1,   200,   201,   202,    -1,    -1,    -1,   491,    -1,
      -1,   209,    -1,    -1,   265,    -1,   267,   268,   269,    -1,
     503,    -1,   273,   221,   275,    -1,    -1,    -1,    -1,   512,
      -1,    -1,    -1,    -1,   517,    21,    -1,    -1,    -1,   522,
      -1,    -1,   525,   526,   527,    -1,    -1,    -1,    -1,    -1,
     533,    37,   250,    -1,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,   314,    -1,    -1,    -1,   265,    -1,   267,
     268,   269,    -1,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    33,   124,    -1,
      36,   392,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   392,    -1,   447,   448,    -1,    -1,
      96,   187,   188,   189,   190,   191,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,    -1,    -1,    -1,    -1,    -1,    -1,   435,   489,    -1,
     491,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,   447,
     448,    -1,    -1,    -1,    -1,   241,    -1,    -1,   244,    -1,
      -1,   512,    -1,    -1,   250,    -1,   517,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   525,    -1,   527,    -1,    -1,    -1,
      -1,    -1,   533,   481,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   489,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,
     286,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,
     206,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,   517,
      -1,    -1,    -1,    -1,   220,    -1,    -1,   525,    -1,   527,
     316,    -1,    -1,    -1,    -1,   533,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   338,    -1,    -1,   341,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,
     356,    -1,    -1,    -1,    -1,    -1,   272,    -1,   274,    -1,
      -1,    -1,    -1,   369,    33,   281,    -1,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
     296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,    -1,    -1,    -1,   423,    -1,   425,
     426,   427,    -1,    -1,    -1,    -1,   342,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   358,   359,    -1,    -1,   115,   453,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,   391,    -1,   393,   394,    -1,
      -1,    -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   407,    -1,   499,   500,   501,   412,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   513,    -1,    33,
      -1,    -1,    36,   429,   520,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
     456,    -1,    -1,    -1,    68,    -1,    70,    -1,   464,   465,
      -1,   220,    -1,    -1,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   505,
      -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,
     124,    -1,    -1,   272,    -1,   274,    -1,    -1,    -1,    -1,
     526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,   187,   188,   189,   190,   191,    87,    -1,
     194,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
     204,    -1,   206,    -1,    -1,   104,    -1,    -1,   212,   358,
     359,    -1,    -1,   217,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   384,    -1,   241,    -1,    -1,
     244,    -1,   391,    -1,   393,   394,    -1,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,   407,    -1,
      -1,    -1,    -1,   412,    -1,    -1,    -1,    -1,    -1,    -1,
     274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,    -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,   201,   202,    -1,    -1,    -1,   456,    -1,    -1,
     209,    -1,   316,    -1,   318,    -1,   465,    -1,    -1,    -1,
      -1,    -1,   221,    -1,    -1,   329,   330,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   338,    -1,    -1,   341,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,
      -1,    -1,   356,    -1,   358,   254,   505,    -1,    -1,    -1,
      -1,   260,   511,   262,    87,    -1,   265,    -1,   267,   268,
     269,    -1,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     384,   104,    -1,    -1,    -1,    -1,    -1,   391,    -1,   393,
     394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,
      -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,   423,
      -1,   425,   426,   427,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   360,    -1,   467,    -1,    -1,    -1,    -1,   472,    -1,
      -1,    -1,    -1,   477,    -1,    87,    -1,   200,   201,   202,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,   495,   104,   392,    -1,   499,   500,   501,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   513,
      -1,    -1,    -1,    -1,   518,    -1,   520,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,   435,   260,    -1,   262,
      -1,    -1,   265,    -1,   267,   268,   269,    -1,   447,   448,
     273,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     469,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
     479,    -1,   481,    -1,   483,   484,    -1,    -1,   200,   201,
     202,   314,   491,    -1,    -1,    -1,    -1,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     333,    -1,    -1,   512,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   525,    -1,   527,    -1,
      -1,    -1,    -1,    -1,   533,    -1,    -1,   360,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
     262,    -1,    -1,   265,    -1,   267,   268,   269,    -1,    -1,
      -1,   273,    -1,   275,    -1,    -1,    -1,    -1,    -1,   392,
      -1,    -1,   200,   201,   202,    -1,    -1,    87,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   333,    -1,    -1,   447,   448,   254,    -1,    -1,    -1,
      -1,    -1,   260,    -1,   262,    -1,    -1,   265,    -1,   267,
     268,   269,    -1,    -1,    -1,   273,   469,   275,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,   481,    -1,
     483,   484,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     392,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,   512,
     200,   201,   202,    -1,   517,    87,    -1,    -1,    -1,   209,
      -1,    -1,   525,    -1,   527,   333,    -1,    -1,    -1,    -1,
     533,   221,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   360,    -1,    -1,   447,   448,   104,    -1,    -1,
      -1,    -1,    -1,   455,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,   262,    -1,    -1,   265,    -1,   267,   268,   269,
      -1,    -1,    -1,   273,   392,   275,    -1,   479,    -1,   481,
      -1,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,   491,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     512,    -1,    -1,    -1,   314,   517,    -1,   435,   200,   201,
     202,    -1,    -1,   525,    -1,   527,    -1,   209,    -1,   447,
     448,   533,    -1,   333,    -1,    -1,    -1,   455,    -1,   221,
      -1,    -1,    -1,   200,   201,   202,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     360,   479,    -1,   481,   221,   483,   484,    -1,    -1,    -1,
      -1,    -1,   254,   491,    -1,    -1,    -1,    -1,   260,    -1,
     262,    -1,    -1,   265,    -1,   267,   268,   269,    -1,    -1,
      -1,   273,   392,   275,   512,    -1,    -1,   254,    -1,   517,
      -1,    -1,    -1,   260,    -1,   262,    87,   525,   265,   527,
     267,   268,   269,    -1,    -1,   533,   273,    -1,   275,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   314,    -1,    -1,   435,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,   448,    -1,
      -1,   333,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,   360,   479,
      -1,   481,    -1,   483,   484,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   360,    -1,    -1,    -1,    87,    -1,    -1,
     392,    -1,   512,    -1,    -1,    -1,    -1,   517,    -1,   200,
     201,   202,    -1,    -1,   104,   525,    -1,   527,   209,    -1,
      -1,    -1,    -1,   533,    -1,   392,    -1,    -1,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   447,   448,    -1,    -1,    -1,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,   435,   260,
      -1,   262,    -1,    -1,   265,    -1,   267,   268,   269,    -1,
     447,   448,   273,    -1,   275,    -1,    -1,   479,    -1,   481,
      -1,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,   491,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     200,   201,   202,    -1,   481,    -1,   483,    -1,    -1,   209,
     512,    -1,    -1,   314,   491,   517,    -1,    -1,    -1,    -1,
      -1,   221,    -1,   525,    -1,   527,    -1,    -1,    -1,    -1,
      -1,   533,   333,    -1,    -1,   512,    -1,    -1,    -1,    -1,
     517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   525,    -1,
     527,    -1,    -1,    -1,   254,    -1,   533,    -1,    -1,   360,
     260,    -1,   262,    -1,    -1,   265,    -1,   267,   268,   269,
      -1,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,
      -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   333,   435,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   447,   448,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     491,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   512,    -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   525,    -1,   527,    -1,    -1,    -1,
      -1,    -1,   533,    -1,    -1,   435,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,   448,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   512,    -1,    -1,    -1,    -1,   517,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   525,    -1,   527,    -1,    -1,
      -1,    -1,    -1,   533
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   537,   538,     0,   222,   223,   539,   540,   541,   542,
     543,   544,   545,   551,   127,   127,   541,   160,   550,   564,
     565,   208,   354,   552,   555,   472,   472,   127,   107,   678,
     680,    89,   566,   567,   556,   553,   550,   550,   472,   127,
     350,   848,   851,   475,   681,   411,   235,   629,   630,   315,
     434,   568,   569,   573,   472,   472,   149,   546,   547,   548,
     145,   549,   472,   127,   874,   875,   411,   682,   472,   411,
     181,   631,   472,   472,   436,   590,   573,   569,   265,   355,
     557,   557,   265,   355,   558,   548,   558,    58,   518,   852,
       1,     3,     5,    10,    18,    52,    53,    64,    75,    79,
      93,   116,   124,   126,   159,   170,   175,   203,   210,   213,
     214,   224,   231,   233,   236,   278,   282,   284,   294,   322,
     335,   363,   364,   374,   387,   389,   396,   400,   409,   420,
     431,   440,   445,   446,   449,   451,   459,   472,   490,   497,
     502,   530,   876,   877,   895,   900,   904,   909,   929,   933,
     937,   941,   942,   943,   948,   962,   966,   969,   983,   987,
     990,   993,   997,   998,  1002,  1012,  1015,  1033,  1035,  1038,
    1042,  1049,  1061,  1076,  1077,  1080,  1081,  1085,  1091,  1092,
    1100,  1116,  1126,  1135,  1140,  1149,  1153,  1155,  1158,  1161,
    1164,  1191,   876,   472,   180,   408,   679,   683,   684,   686,
     472,   472,   633,   574,   570,   472,    11,    61,   101,   103,
     105,   113,   171,   266,   312,   406,   452,   527,   591,   592,
     593,   594,   595,   601,   610,   612,   617,   620,   621,   623,
     624,   625,   626,   627,   628,    27,   559,   559,   472,   472,
     854,   853,   390,   860,     3,     5,    10,    18,    52,    53,
      64,    75,    79,    93,   116,   124,   126,   135,   137,   138,
     139,   140,   141,   142,   143,   144,   146,   147,   148,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   170,
     175,   203,   210,   213,   214,   224,   231,   233,   236,   278,
     282,   284,   294,   322,   335,   363,   374,   389,   396,   400,
     409,   420,   431,   440,   445,   446,   449,   451,   459,   472,
     490,   497,   502,   530,  1346,  1347,  1348,   878,   896,   901,
     905,   910,   930,   934,   938,   944,   949,   963,   967,   970,
     984,   988,   991,   994,   211,   390,   921,   986,   999,  1003,
    1013,  1016,  1034,  1036,  1039,   416,  1043,  1050,  1062,  1078,
    1082,  1086,  1093,  1101,  1117,  1127,   265,   360,   402,   435,
     533,  1139,  1141,  1150,   349,  1154,  1156,   863,  1159,  1162,
    1165,  1192,   529,   722,   724,   725,     1,   527,  1263,   243,
     414,   632,   634,    59,    67,   277,   353,   413,   418,   527,
     575,   576,   577,   578,   579,   580,   581,   583,  1359,  1421,
     571,   583,     1,   527,  1277,  1277,   442,   423,  1392,   241,
    1373,  1373,  1373,  1277,   423,  1373,    60,  1360,   596,   383,
     584,   593,   472,   594,   227,   611,   265,   472,   554,    50,
     855,   856,   857,  1358,   855,   319,   527,   472,   319,   527,
     879,   881,  1308,  1309,  1312,     6,     9,    87,    99,   104,
     200,   201,   202,   209,   221,   254,   260,   262,   265,   267,
     268,   269,   273,   275,   280,   314,   333,   360,   392,   435,
     447,   448,   481,   491,   512,   517,   525,   533,   897,  1257,
    1282,  1283,  1285,  1308,  1319,  1320,  1321,  1322,  1323,  1324,
    1325,   254,   479,   483,   484,   902,  1252,  1253,  1254,  1255,
    1256,  1257,  1288,  1308,  1320,  1322,   265,   906,   907,  1268,
    1269,  1270,  1312,   280,   441,   443,   911,   913,   265,   355,
     931,   932,  1295,  1308,   935,  1263,     6,   939,  1258,  1259,
    1280,  1310,  1311,  1312,  1320,   475,   945,  1263,   265,   319,
     950,   951,   952,   953,   955,  1282,  1295,  1308,   964,  1283,
     265,   968,   474,   485,   971,   972,   973,  1240,  1241,  1242,
     207,   334,   335,   353,   411,   985,   989,  1279,  1280,   992,
    1312,   467,   995,  1401,  1283,  1239,  1240,  1004,  1279,   527,
    1014,  1264,  1017,  1018,  1308,  1319,  1322,  1118,  1303,  1304,
    1312,    99,  1037,  1283,  1040,  1283,   177,   234,   242,   328,
    1044,  1045,  1046,    51,   199,   253,   254,   265,   526,   733,
    1051,  1055,  1056,  1057,  1268,  1297,  1308,  1312,  1319,  1322,
    1405,  1063,  1263,  1079,  1260,  1312,  1083,  1263,  1087,  1260,
       9,  1094,  1261,  1312,   160,   249,   280,  1102,  1105,  1106,
    1109,  1110,  1111,  1112,  1113,  1114,  1115,  1265,  1266,  1279,
    1302,  1304,  1312,  1118,  1128,  1263,  1136,  1142,  1143,  1144,
    1283,    99,  1151,  1282,  1157,  1264,   472,   527,   864,   865,
     868,   869,   874,  1160,  1305,  1308,  1163,  1263,  1166,  1308,
    1193,  1260,   411,    77,   714,   134,   421,   428,   726,   727,
     729,   739,   741,   743,  1333,   472,   685,   472,   299,   323,
    1341,   283,   404,   668,   669,   670,   671,   673,   418,   429,
      67,  1373,   472,   577,   472,   527,   576,    62,  1373,   572,
    1405,   602,  1373,  1373,  1373,  1272,  1312,    72,  1272,  1373,
    1373,  1272,   527,   613,   614,   615,  1278,   265,   318,   320,
     597,   599,   600,  1103,  1315,  1373,   472,   472,   527,   560,
    1373,   856,   429,   498,   858,   371,   520,   849,   227,   317,
    1411,   137,   894,   880,   204,   483,  1313,  1314,   317,  1383,
    1321,  1308,   483,   483,   483,  1327,  1309,  1320,  1322,  1411,
    1411,   483,   483,   483,   483,  1411,   483,  1327,   138,   899,
     467,   898,  1283,   468,   483,  1326,   483,   483,  1309,  1320,
    1322,  1256,  1308,  1252,  1256,    60,   479,   484,   471,   480,
     176,   232,  1336,   907,   467,  1411,   139,   928,   265,   355,
     914,  1296,  1308,  1322,   932,  1263,   370,   496,   936,  1405,
    1417,  1383,   140,   940,   166,   473,  1259,  1409,   401,  1342,
    1313,  1314,   946,  1263,   141,   947,   365,  1389,   142,   961,
     172,   305,  1206,  1208,  1210,   953,  1281,  1282,   954,   507,
     508,   509,   510,   143,   965,    50,   237,   518,   915,   144,
     982,    17,   524,   974,   975,   976,   978,    12,    13,    14,
      20,    63,   166,   176,   215,   216,   255,   256,   293,   299,
     304,   312,   319,   324,   343,   469,   471,   473,   476,   478,
     479,   480,   483,   484,  1243,  1244,  1245,  1246,  1247,  1248,
    1249,  1283,   106,   986,  1280,  1267,   462,  1399,  1005,  1405,
    1264,    97,   379,   457,  1019,  1020,  1022,  1023,  1120,   483,
    1313,  1283,   467,   147,  1041,    50,  1045,   422,  1047,  1383,
       1,    41,    42,    43,    44,    45,    80,    81,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   341,   356,   734,
     735,   736,   737,   738,   756,   757,  1309,   734,  1056,   148,
     472,  1052,  1054,   503,   522,   463,   466,   460,   150,  1075,
     294,   345,  1339,   204,  1194,   151,  1084,  1389,   152,  1090,
    1194,  1261,   153,  1099,   522,  1095,  1291,  1293,  1308,  1320,
    1322,   172,  1112,  1114,  1279,   467,  1266,   128,   467,   504,
    1104,    32,  1313,   154,  1134,   185,   246,   249,  1130,   921,
    1137,  1283,  1405,   155,  1148,   237,  1144,   117,  1145,  1308,
     156,  1152,   204,  1264,   411,   472,   472,   204,   365,   367,
    1390,   157,  1175,   117,  1167,   158,  1198,  1194,   472,   411,
     270,   783,   527,   731,   731,   731,   727,   472,     1,   183,
     730,   731,   527,   687,   323,  1277,   674,   365,   431,   432,
     672,     1,   472,   670,  1373,   418,  1315,   472,  1373,   527,
    1273,   472,   112,  1373,   221,   265,   275,   360,   435,   481,
     533,   618,   619,  1318,  1272,   265,   265,   489,   614,    22,
     241,  1278,  1374,  1103,   241,   442,  1385,  1373,   101,  1277,
     585,   472,    76,   178,   368,   477,   561,   562,   563,  1373,
     429,   323,   859,   114,   861,  1312,    31,    38,   205,   281,
     882,   883,   884,   886,   889,  1355,  1356,  1405,    25,    26,
      69,    71,    73,   108,   109,   110,   160,   162,   169,   172,
     261,   263,   464,   515,   527,   885,  1266,  1408,  1250,  1252,
     483,  1314,   159,   353,  1289,  1309,   467,  1250,  1252,  1331,
    1250,  1332,   469,  1250,   527,   527,  1252,  1330,  1330,  1330,
    1287,  1308,  1320,  1322,  1329,   527,  1287,  1328,     6,  1258,
    1283,  1312,  1320,   211,  1321,  1252,  1287,  1250,   469,   232,
    1337,  1253,  1253,  1254,  1254,  1254,   390,   903,   352,   908,
    1270,   912,   936,   271,   296,   197,  1366,  1309,  1252,   281,
    1343,  1314,  1263,   388,  1068,  1069,  1070,   871,   872,   871,
    1209,  1210,  1207,  1208,   506,   886,   889,   956,   957,   958,
    1405,  1206,  1206,  1206,  1206,  1283,  1258,  1283,   916,   973,
      21,   474,   485,   979,   980,  1241,   524,   976,   977,   524,
     871,  1401,   241,  1244,   119,   996,  1268,   135,   871,  1000,
       9,    12,    15,    16,   286,   287,   312,   313,  1006,  1010,
     183,  1291,     9,    60,   185,   250,   489,  1026,  1027,  1028,
    1021,  1022,   129,   320,   526,  1122,  1384,  1420,   467,  1279,
    1258,  1283,  1405,  1068,   734,   472,   871,   175,  1058,  1239,
    1059,  1060,  1308,  1268,     8,    38,  1196,  1389,  1301,  1308,
    1319,  1322,   237,  1064,  1068,   136,  1096,  1308,  1096,   467,
     467,   467,  1103,   159,   474,   485,  1283,    50,    39,    47,
     220,   252,   274,   329,   393,   495,  1107,  1108,  1373,  1129,
    1405,  1283,   168,   298,  1308,  1358,   204,  1258,  1283,   870,
    1315,  1291,  1358,   237,  1170,  1195,  1196,   723,   472,   411,
     264,   785,   742,   744,   377,   472,   472,   728,    90,    48,
      66,   107,   248,   259,   365,   366,   380,   382,   472,   520,
     688,   689,   691,   695,   696,   699,   700,   706,   709,   711,
     712,  1373,   635,   475,  1364,    23,  1352,   472,  1315,   266,
     454,   516,   582,  1273,   281,    29,   131,   221,   265,   275,
     289,   360,   435,   438,   439,   533,   603,   604,   605,   608,
     619,   463,   622,  1405,   417,   265,   616,  1316,  1385,   241,
    1277,  1277,   598,   599,   207,   353,   586,   587,   588,   563,
     353,  1388,    76,    33,   115,  1315,  1373,   527,   472,   850,
     533,  1298,  1302,  1315,  1373,   169,   172,   303,   305,  1199,
    1201,  1202,  1204,  1205,   884,    68,    70,   261,   342,   887,
     888,  1407,   464,    33,    36,    39,    47,    96,   115,   198,
     206,   220,   252,   272,   274,   296,   297,   318,   329,   358,
     359,   384,   391,   393,   394,   407,   412,   429,   456,   465,
     495,   505,   511,   890,   891,   892,   893,  1199,   532,   531,
    1291,  1199,   246,   442,   310,   285,    74,   415,   469,  1251,
     470,  1252,   265,  1290,  1309,  1308,  1251,   469,  1251,   469,
     469,  1251,   469,   469,   469,  1251,   469,  1251,   469,  1383,
     308,   430,  1211,  1213,  1215,  1313,  1314,  1258,   470,   469,
     469,   467,  1338,   903,  1280,   467,  1268,   915,   395,   376,
    1211,  1373,   199,  1366,   240,   306,  1232,  1233,  1235,  1237,
     873,   101,   102,   347,   527,   959,  1266,   957,    36,    39,
      46,    47,    96,   167,   198,   220,   274,   309,   329,   407,
     429,   495,   892,   960,   211,  1211,   211,   917,   918,   919,
    1358,    17,   463,   981,   327,   979,  1384,   871,   135,   146,
    1001,  1401,   379,  1007,  1401,   467,    50,  1027,  1029,  1291,
       9,    60,   250,   489,  1024,  1025,  1291,  1306,  1308,   129,
      67,   418,  1123,  1406,    28,   120,   769,   227,   325,  1369,
    1279,  1211,   211,     9,   296,   363,   667,  1262,  1263,   148,
    1053,     8,   204,  1064,  1308,   136,   301,  1221,  1224,  1226,
    1088,  1089,  1405,   871,   524,   524,  1097,  1098,  1291,   318,
    1290,  1283,  1103,  1103,  1103,  1103,  1103,  1103,  1103,  1103,
    1108,   299,   304,  1131,  1132,  1133,  1245,  1340,  1232,   253,
     429,  1419,   442,  1397,  1397,  1147,  1405,   429,  1146,  1283,
    1308,  1211,   211,   472,   467,     9,  1168,  1169,  1334,  1171,
    1308,  1147,  1171,  1068,     7,  1349,   724,   715,   472,   411,
     380,   787,   520,   777,   751,   752,  1373,  1312,   746,   732,
    1373,    91,  1361,  1373,   365,   367,  1416,  1416,  1373,  1361,
    1373,   281,  1380,  1373,    22,  1351,   317,   713,  1277,   178,
     212,   636,   458,  1398,  1366,    60,   528,  1415,   605,    17,
     463,  1318,   339,  1316,  1277,     9,   209,   527,   589,   527,
       1,   472,   588,    33,  1315,   862,   863,    48,  1203,  1204,
     871,  1200,  1201,   871,   310,  1381,  1381,  1381,   265,  1299,
    1302,  1317,  1373,  1373,   133,   893,    59,   429,   128,   504,
    1373,     8,  1350,  1199,  1252,   469,  1252,  1342,   455,  1326,
     455,  1326,  1272,  1326,  1326,  1326,  1287,   250,   489,  1326,
    1309,   871,   871,  1214,  1215,  1212,  1213,  1314,  1211,   469,
    1252,  1326,  1326,  1294,  1308,  1319,   920,   921,    35,   290,
     291,   292,   357,   487,   488,   492,  1344,  1252,   871,   871,
    1236,  1237,  1234,  1235,   874,  1373,   261,   405,   136,   163,
     165,   840,   841,  1363,  1373,   128,   504,  1373,  1258,  1259,
    1258,  1259,   918,   319,   858,    92,   371,   520,   980,  1240,
     871,  1308,   871,   520,  1008,  1009,  1010,  1011,  1399,   520,
    1292,  1294,  1291,    50,     8,    38,  1030,  1031,  1032,  1025,
    1030,   197,   418,  1119,  1373,   246,  1375,   325,  1258,   327,
    1386,  1386,   321,   394,  1048,  1263,  1405,  1060,  1283,     7,
     226,  1065,  1066,  1067,  1069,  1072,  1089,  1405,   871,   871,
    1225,  1226,  1224,  1232,   271,   296,  1240,  1239,  1097,  1245,
    1308,  1246,  1247,  1248,  1249,  1252,  1138,  1283,  1138,   307,
     482,  1216,  1218,  1220,   341,  1342,  1258,   866,  1292,   324,
    1291,   118,  1172,   457,  1174,  1088,   332,  1266,  1298,   716,
     784,   472,   411,   405,   832,  1374,   777,   212,   463,   740,
      21,    37,    40,    41,    42,    43,    44,    45,    46,    78,
      82,    83,    84,    85,    86,   124,   187,   188,   189,   190,
     191,   228,   244,   286,   316,   330,   338,   341,   356,   369,
     423,   425,   426,   427,   453,   499,   500,   501,   513,   747,
     748,   749,   752,   753,   754,   755,   756,   757,   758,   761,
     773,   774,   775,   776,   777,   782,  1373,  1394,    27,   204,
     745,  1354,   212,  1315,   527,   650,  1373,  1351,   527,  1274,
    1275,   319,   437,  1412,   265,  1272,  1276,  1315,   522,  1373,
     182,   222,   527,   697,  1277,     4,    19,    30,   229,   261,
     326,   331,   365,   373,   385,   422,   431,   472,   475,   637,
     638,   645,   647,   649,   651,   652,   653,   654,   657,   658,
     659,   660,   661,   663,   664,   666,  1389,  1406,  1361,  1262,
     606,   608,   265,   238,   559,   209,   238,   559,   472,   863,
    1298,  1298,  1298,  1298,  1298,  1373,  1373,  1238,  1300,  1302,
    1315,  1238,  1298,  1299,   469,  1211,   469,   172,   305,   482,
     923,   925,   927,     6,   237,   300,   319,   481,   922,  1372,
     410,   466,  1298,  1383,   261,   405,  1298,  1238,  1238,  1298,
    1211,   375,  1211,   375,  1284,  1285,  1307,  1309,  1009,   107,
    1362,  1401,  1030,  1030,  1292,   477,  1371,  1371,  1032,  1031,
     234,   518,  1124,  1272,  1121,  1211,   271,   296,    50,  1384,
     271,   246,  1073,  1071,  1072,  1405,   225,   245,   523,   271,
     871,   871,   871,   871,  1219,  1220,  1217,  1218,  1373,  1211,
    1211,   514,   867,  1176,  1169,   227,  1368,   100,  1173,  1368,
    1216,   164,   302,  1197,  1227,  1229,  1231,  1233,   261,   263,
    1377,    55,   717,   718,   724,   786,   472,   411,   733,   779,
     780,  1312,   253,   312,   424,   498,  1393,   498,  1393,   498,
    1393,   498,  1393,   498,  1393,   524,  1403,   399,  1391,   130,
    1315,  1309,   241,   251,   399,  1376,  1373,   178,   250,   489,
     527,   733,   467,   694,   197,   710,  1275,   263,  1379,   467,
    1360,  1368,   179,   186,   403,   494,   519,   521,   707,   708,
    1373,  1373,  1380,  1389,   467,   518,  1402,   419,  1373,  1359,
     118,  1375,  1375,   296,   665,  1315,  1405,   442,   271,    40,
    1357,  1373,   675,   676,  1263,   607,   608,   136,  1295,  1298,
     261,   263,  1418,   871,   871,   871,   926,   927,   924,   925,
    1383,  1308,  1259,  1259,    50,   115,  1030,  1283,  1283,   350,
    1262,   211,   328,  1125,  1312,   395,  1283,   271,  1373,  1074,
    1222,  1224,  1226,  1232,   271,   271,  1308,  1177,   472,  1308,
    1368,  1308,   871,   871,  1230,  1231,  1228,  1229,  1277,   724,
     724,   788,   472,   463,   778,   780,   533,    54,   765,   467,
     762,   755,    27,   750,   417,  1345,  1345,  1315,    60,   367,
     690,  1271,  1272,   701,  1315,   429,  1395,   265,   698,  1312,
     698,  1373,  1375,   130,   178,   642,   373,   658,  1373,  1373,
    1373,  1373,    23,    24,  1353,   667,  1373,  1380,   419,   650,
     676,   342,   677,    17,   114,  1308,  1211,  1211,  1283,  1373,
    1262,   350,   503,  1308,  1225,  1223,  1224,    31,   132,   173,
     212,  1178,  1179,  1180,  1182,  1186,  1188,  1189,  1190,  1355,
    1366,  1308,   719,   789,   833,   733,   524,   781,  1404,  1368,
     204,   763,  1315,   466,  1400,   265,  1359,  1272,    49,   486,
     702,   703,   704,   705,  1405,  1360,   204,   693,  1367,   130,
     361,   419,   646,  1373,   122,   123,   124,   247,   261,   346,
     347,   348,   361,   458,   639,   640,   641,  1276,   438,   662,
    1272,  1272,  1272,  1373,  1315,   608,   472,  1055,  1373,  1239,
      38,  1350,   353,   112,   720,   362,   790,   729,   743,   834,
     835,   836,   420,   474,   527,  1315,   762,   119,   764,  1276,
    1276,   196,   694,  1315,   662,   265,   644,  1312,   644,     7,
     644,   644,   265,   643,  1312,   433,   473,    34,   174,   276,
     655,  1055,   381,   437,  1396,   136,   440,  1187,  1384,   472,
     721,  1366,  1264,     1,   730,   836,   472,   467,  1373,   232,
     766,  1384,   767,   768,  1355,  1360,  1335,  1420,  1364,  1373,
    1271,   526,   656,   656,  1308,   168,   172,  1410,     9,  1183,
    1184,  1269,  1371,   791,   472,   837,   472,   733,   767,  1272,
     229,   770,   769,  1276,   119,   692,   451,   648,  1271,   271,
     400,   350,  1387,   317,   351,   372,  1185,  1184,   234,   242,
     328,     1,   792,   838,   770,  1358,  1375,  1384,   524,   320,
    1384,   317,  1312,   472,    65,    94,    95,   332,   472,   793,
     794,   797,  1373,  1429,    33,    36,    39,    46,    47,   167,
     198,   204,   206,   217,   220,   252,   261,   274,   296,   316,
     329,   358,   384,   412,   456,   467,   477,   495,   518,   753,
     754,   758,   773,   775,   777,   839,   846,   847,   891,   892,
    1373,  1407,   527,   771,   772,  1373,  1272,     9,   435,   533,
     609,   283,   365,   367,  1414,   177,   234,   242,   328,  1181,
    1262,  1373,  1373,  1351,   257,   258,  1378,   806,   212,   184,
     795,  1365,  1373,   261,   405,   840,   841,  1373,  1301,  1381,
    1315,    59,  1308,  1308,   212,  1381,   772,  1271,  1321,  1414,
    1295,  1373,  1351,   798,  1317,   729,   807,   796,  1308,  1298,
    1298,  1373,  1400,  1373,  1373,   799,   261,   263,  1413,   730,
     731,  1308,   279,   340,   479,   484,   842,   843,   844,  1295,
     842,   843,   845,   185,   196,   219,   249,   800,   801,   802,
     803,   804,   805,  1317,   808,  1298,  1298,   111,   121,  1422,
    1373,  1373,    57,    94,  1422,  1423,  1408,   809,  1373,  1317,
    1317,   219,  1373,  1373,   218,   261,   263,   294,   316,   344,
     433,   450,   472,   493,   513,   522,   753,   758,   759,   773,
     775,   777,   810,   811,   815,   816,   819,   820,   821,   822,
     823,   824,   829,   830,   831,  1407,  1408,  1317,  1317,  1317,
     230,  1370,   310,   311,  1382,  1351,   218,  1315,   524,  1373,
    1383,  1373,  1373,  1308,   295,   340,   825,   826,  1317,   340,
     827,   828,  1317,  1382,  1351,  1374,  1373,   762,  1239,  1288,
    1286,  1288,    56,    94,   332,   336,   337,   380,   397,   398,
     812,  1422,  1423,  1424,  1425,  1426,  1427,  1428,   124,   204,
    1315,   826,  1315,   828,  1374,   826,  1400,  1342,   386,   817,
    1288,   196,   196,   219,   196,   219,   184,   813,  1308,   813,
    1288,   764,  1384,   324,   814,   814,    50,   444,   760,   184,
     818,  1308,   332,  1288,  1315
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   536,   538,   537,   539,   539,   540,   540,   541,   541,
     543,   542,   544,   545,   546,   546,   547,   547,   548,   549,
     550,   551,   551,   551,   553,   554,   552,   556,   555,   557,
     557,   558,   558,   559,   559,   560,   560,   561,   561,   561,
     561,   562,   562,   563,   563,   564,   565,   565,   566,   567,
     567,   568,   568,   568,   568,   568,   570,   569,   571,   571,
     572,   572,   574,   573,   575,   575,   575,   575,   576,   576,
     577,   577,   577,   577,   578,   579,   580,   581,   582,   582,
     582,   582,   583,   583,   584,   585,   584,   586,   586,   586,
     587,   587,   588,   588,   588,   588,   589,   589,   590,   590,
     591,   591,   592,   592,   593,   593,   594,   594,   594,   594,
     594,   594,   594,   594,   594,   594,   594,   594,   596,   595,
     597,   597,   597,   597,   598,   598,   599,   600,   600,   602,
     601,   603,   603,   603,   603,   603,   603,   604,   604,   605,
     605,   606,   605,   607,   607,   608,   608,   608,   608,   608,
     608,   609,   609,   610,   611,   611,   612,   613,   613,   614,
     615,   615,   616,   616,   617,   618,   618,   619,   619,   620,
     621,   622,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   630,   631,   631,   632,   632,   633,   633,   635,   634,
     636,   636,   637,   637,   637,   637,   637,   637,   637,   637,
     637,   637,   637,   637,   637,   638,   638,   638,   638,   638,
     639,   639,   639,   640,   640,   640,   640,   641,   641,   642,
     642,   642,   643,   643,   644,   644,   644,   645,   646,   646,
     646,   647,   648,   648,   648,   649,   650,   651,   652,   652,
     652,   654,   653,   655,   655,   655,   656,   656,   656,   656,
     657,   657,   658,   658,   658,   658,   659,   660,   661,   662,
     662,   662,   663,   664,   665,   665,   666,   667,   667,   667,
     668,   668,   668,   669,   669,   670,   670,   671,   672,   672,
     672,   672,   674,   673,   675,   675,   676,   677,   677,   679,
     678,   680,   680,   681,   681,   682,   682,   683,   685,   684,
     684,   686,   686,   687,   687,   688,   688,   688,   688,   688,
     688,   688,   688,   688,   688,   688,   689,   690,   690,   690,
     691,   691,   691,   692,   692,   693,   693,   694,   694,   695,
     696,   696,   697,   697,   698,   698,   699,   700,   701,   701,
     702,   702,   702,   703,   704,   705,   706,   707,   707,   707,
     707,   707,   708,   708,   709,   710,   710,   711,   712,   712,
     713,   713,   714,   715,   714,   716,   716,   717,   719,   718,
     720,   720,   721,   721,   721,   722,   723,   722,   724,   725,
     724,   726,   726,   727,   727,   727,   728,   727,   727,   729,
     730,   730,   730,   731,   732,   732,   733,   733,   733,   733,
     734,   734,   734,   734,   734,   734,   734,   734,   734,   734,
     734,   734,   734,   735,   735,   736,   736,   737,   737,   737,
     738,   738,   739,   740,   740,   742,   741,   743,   744,   743,
     745,   745,   746,   746,   747,   747,   747,   747,   747,   747,
     747,   747,   747,   747,   747,   747,   747,   748,   749,   750,
     750,   751,   751,   752,   753,   754,   754,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   756,   756,   757,   757,   758,   758,   759,
     760,   760,   761,   761,   762,   762,   763,   763,   764,   764,
     765,   765,   766,   766,   767,   768,   768,   769,   769,   770,
     770,   771,   771,   772,   773,   774,   775,   776,   778,   777,
     779,   779,   780,   780,   781,   781,   782,   782,   783,   784,
     783,   785,   786,   785,   787,   788,   787,   789,   789,   791,
     790,   792,   792,   792,   793,   793,   793,   793,   794,   795,
     796,   796,   797,   798,   798,   798,   799,   799,   800,   800,
     800,   800,   800,   801,   802,   803,   804,   805,   806,   806,
     808,   807,   809,   809,   810,   810,   810,   810,   810,   810,
     810,   810,   810,   810,   810,   810,   810,   810,   810,   810,
     811,   812,   812,   812,   812,   812,   812,   812,   813,   813,
     813,   814,   814,   815,   816,   817,   817,   818,   818,   819,
     820,   821,   822,   822,   823,   824,   824,   825,   825,   826,
     826,   826,   827,   827,   828,   828,   829,   830,   831,   832,
     833,   832,   834,   834,   835,   835,   836,   837,   836,   836,
     838,   838,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   840,
     840,   841,   841,   842,   842,   843,   843,   844,   844,   844,
     845,   845,   845,   846,   847,   848,   849,   850,   848,   851,
     848,   852,   853,   852,   854,   852,   855,   855,   856,   857,
     857,   857,   858,   858,   858,   858,   858,   858,   859,   859,
     860,   860,   860,   861,   862,   861,   863,   863,   864,   864,
     864,   864,   864,   866,   865,   867,   867,   868,   869,   870,
     870,   872,   873,   871,   875,   874,   874,   876,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   878,   877,
     880,   879,   879,   879,   879,   879,   879,   879,   879,   879,
     879,   879,   879,   879,   879,   879,   879,   879,   879,   879,
     881,   881,   882,   882,   883,   883,   884,   884,   884,   884,
     884,   885,   885,   886,   886,   886,   887,   888,   888,   889,
     890,   890,   890,   890,   890,   890,   890,   890,   890,   890,
     890,   890,   890,   890,   890,   890,   890,   890,   890,   890,
     890,   890,   890,   890,   890,   890,   890,   890,   891,   891,
     891,   892,   892,   892,   893,   893,   894,   894,   896,   895,
     897,   897,   897,   898,   898,   899,   899,   901,   900,   902,
     902,   903,   903,   905,   904,   906,   906,   907,   908,   908,
     910,   909,   912,   911,   913,   913,   913,   913,   914,   914,
     915,   916,   915,   917,   917,   918,   918,   919,   919,   919,
     919,   920,   920,   920,   920,   920,   921,   921,   922,   922,
     923,   923,   923,   924,   924,   925,   925,   926,   926,   927,
     928,   928,   930,   929,   931,   931,   932,   932,   934,   933,
     935,   935,   936,   936,   936,   936,   936,   938,   937,   939,
     940,   940,   941,   942,   944,   943,   945,   945,   946,   946,
     947,   947,   949,   948,   950,   950,   950,   950,   950,   951,
     951,   952,   952,   954,   953,   955,   955,   956,   956,   957,
     957,   957,   957,   957,   958,   958,   958,   958,   959,   959,
     960,   960,   960,   960,   960,   960,   960,   960,   960,   960,
     960,   960,   960,   960,   960,   960,   960,   961,   961,   963,
     962,   964,   964,   964,   964,   964,   965,   965,   967,   966,
     968,   970,   969,   971,   972,   972,   973,   973,   973,   974,
     974,   975,   975,   976,   977,   978,   978,   979,   979,   980,
     980,   980,   980,   981,   981,   982,   982,   984,   983,   985,
     985,   985,   985,   985,   985,   985,   986,   986,   988,   987,
     989,   991,   990,   992,   994,   993,   995,   996,   996,   997,
     999,   998,  1000,  1000,  1000,  1001,  1001,  1003,  1002,  1004,
    1005,  1005,  1006,  1006,  1006,  1007,  1007,  1008,  1008,  1009,
    1010,  1010,  1010,  1010,  1010,  1010,  1010,  1011,  1011,  1013,
    1012,  1014,  1014,  1016,  1015,  1017,  1018,  1018,  1018,  1019,
    1019,  1019,  1019,  1021,  1020,  1022,  1023,  1024,  1024,  1025,
    1025,  1025,  1025,  1025,  1025,  1026,  1026,  1027,  1027,  1028,
    1028,  1028,  1028,  1028,  1029,  1030,  1030,  1030,  1030,  1030,
    1031,  1032,  1034,  1033,  1036,  1035,  1037,  1037,  1039,  1038,
    1040,  1040,  1041,  1041,  1043,  1042,  1044,  1044,  1045,  1046,
    1046,  1046,  1046,  1047,  1047,  1048,  1048,  1048,  1048,  1050,
    1049,  1051,  1052,  1051,  1051,  1053,  1053,  1054,  1054,  1055,
    1055,  1056,  1056,  1056,  1056,  1056,  1057,  1057,  1058,  1058,
    1059,  1059,  1060,  1062,  1061,  1063,  1064,  1064,  1065,  1065,
    1065,  1065,  1066,  1066,  1067,  1067,  1068,  1068,  1069,  1070,
    1070,  1070,  1071,  1071,  1072,  1072,  1072,  1073,  1073,  1074,
    1074,  1075,  1075,  1076,  1078,  1077,  1079,  1080,  1082,  1081,
    1083,  1084,  1084,  1086,  1085,  1087,  1088,  1088,  1089,  1089,
    1090,  1090,  1091,  1093,  1092,  1094,  1094,  1095,  1095,  1096,
    1096,  1097,  1097,  1098,  1099,  1099,  1101,  1100,  1102,  1102,
    1102,  1102,  1102,  1102,  1102,  1103,  1103,  1104,  1104,  1105,
    1106,  1107,  1107,  1108,  1108,  1108,  1108,  1108,  1108,  1108,
    1108,  1109,  1109,  1110,  1111,  1111,  1112,  1113,  1113,  1114,
    1114,  1115,  1117,  1116,  1119,  1118,  1120,  1120,  1121,  1121,
    1122,  1122,  1123,  1123,  1124,  1124,  1124,  1125,  1125,  1125,
    1127,  1126,  1128,  1129,  1129,  1130,  1130,  1130,  1130,  1131,
    1131,  1131,  1131,  1131,  1131,  1132,  1133,  1133,  1134,  1134,
    1136,  1135,  1135,  1137,  1137,  1137,  1137,  1137,  1138,  1138,
    1139,  1139,  1139,  1139,  1141,  1140,  1142,  1143,  1143,  1144,
    1145,  1145,  1146,  1146,  1147,  1147,  1148,  1148,  1150,  1149,
    1151,  1151,  1151,  1152,  1152,  1153,  1154,  1154,  1156,  1155,
    1157,  1157,  1159,  1158,  1160,  1162,  1161,  1163,  1165,  1164,
    1166,  1167,  1167,  1168,  1168,  1169,  1170,  1170,  1171,  1172,
    1172,  1173,  1173,  1174,  1174,  1175,  1175,  1177,  1176,  1178,
    1178,  1178,  1178,  1178,  1179,  1180,  1180,  1181,  1181,  1181,
    1181,  1181,  1182,  1183,  1183,  1184,  1184,  1184,  1185,  1185,
    1185,  1185,  1186,  1187,  1187,  1188,  1189,  1190,  1190,  1192,
    1191,  1193,  1194,  1194,  1195,  1195,  1195,  1195,  1196,  1196,
    1197,  1197,  1197,  1198,  1198,  1199,  1199,  1199,  1200,  1200,
    1201,  1202,  1202,  1203,  1203,  1204,  1205,  1205,  1206,  1206,
    1206,  1207,  1207,  1208,  1209,  1209,  1210,  1211,  1211,  1211,
    1212,  1212,  1213,  1214,  1214,  1215,  1216,  1216,  1216,  1217,
    1217,  1218,  1219,  1219,  1220,  1221,  1221,  1222,  1222,  1223,
    1223,  1224,  1225,  1225,  1226,  1227,  1227,  1228,  1228,  1229,
    1230,  1230,  1231,  1232,  1232,  1233,  1233,  1234,  1234,  1235,
    1236,  1236,  1237,  1238,  1238,  1239,  1240,  1242,  1241,  1243,
    1243,  1243,  1244,  1244,  1244,  1244,  1244,  1244,  1244,  1244,
    1244,  1244,  1244,  1244,  1244,  1244,  1244,  1244,  1244,  1244,
    1244,  1244,  1244,  1244,  1244,  1244,  1244,  1245,  1245,  1246,
    1246,  1247,  1247,  1248,  1249,  1250,  1250,  1251,  1251,  1251,
    1252,  1252,  1252,  1253,  1253,  1253,  1254,  1254,  1255,  1255,
    1255,  1256,  1256,  1257,  1257,  1257,  1257,  1257,  1257,  1258,
    1258,  1259,  1260,  1261,  1262,  1262,  1263,  1264,  1265,  1265,
    1266,  1267,  1267,  1268,  1269,  1269,  1269,  1270,  1271,  1271,
    1272,  1273,  1274,  1274,  1275,  1276,  1276,  1277,  1277,  1278,
    1279,  1279,  1280,  1280,  1280,  1281,  1281,  1282,  1282,  1283,
    1283,  1284,  1284,  1285,  1285,  1285,  1285,  1285,  1285,  1285,
    1285,  1285,  1286,  1286,  1287,  1287,  1287,  1288,  1288,  1288,
    1288,  1288,  1288,  1288,  1289,  1289,  1290,  1290,  1291,  1292,
    1293,  1293,  1293,  1294,  1294,  1295,  1295,  1296,  1296,  1296,
    1297,  1297,  1297,  1298,  1298,  1298,  1299,  1299,  1300,  1300,
    1301,  1301,  1301,  1302,  1303,  1304,  1304,  1305,  1306,  1307,
    1308,  1309,  1309,  1309,  1309,  1310,  1311,  1311,  1311,  1311,
    1312,  1312,  1313,  1314,  1314,  1315,  1316,  1317,  1318,  1318,
    1318,  1318,  1318,  1318,  1318,  1319,  1319,  1320,  1320,  1321,
    1321,  1321,  1321,  1321,  1321,  1321,  1322,  1322,  1322,  1322,
    1322,  1322,  1322,  1322,  1322,  1322,  1322,  1322,  1323,  1323,
    1324,  1324,  1324,  1325,  1325,  1325,  1325,  1326,  1326,  1326,
    1327,  1327,  1327,  1328,  1328,  1328,  1329,  1329,  1330,  1330,
    1331,  1331,  1332,  1332,  1333,  1334,  1334,  1335,  1335,  1336,
    1336,  1337,  1337,  1338,  1338,  1339,  1339,  1339,  1340,  1340,
    1341,  1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344,  1344,
    1344,  1344,  1344,  1344,  1344,  1345,  1345,  1346,  1346,  1346,
    1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,
    1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,
    1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,
    1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,
    1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1348,
    1348,  1348,  1348,  1348,  1348,  1348,  1348,  1348,  1348,  1348,
    1348,  1348,  1348,  1348,  1348,  1348,  1348,  1348,  1348,  1349,
    1349,  1350,  1350,  1351,  1351,  1352,  1352,  1353,  1353,  1353,
    1354,  1354,  1355,  1355,  1356,  1356,  1357,  1357,  1358,  1358,
    1359,  1359,  1360,  1360,  1361,  1361,  1362,  1362,  1363,  1363,
    1364,  1364,  1365,  1365,  1366,  1366,  1367,  1367,  1368,  1368,
    1369,  1369,  1369,  1370,  1370,  1371,  1371,  1372,  1372,  1373,
    1373,  1374,  1374,  1374,  1375,  1375,  1376,  1376,  1376,  1377,
    1377,  1377,  1378,  1378,  1378,  1379,  1379,  1380,  1380,  1381,
    1381,  1382,  1382,  1382,  1383,  1383,  1384,  1384,  1385,  1385,
    1385,  1385,  1386,  1386,  1387,  1387,  1388,  1388,  1389,  1389,
    1390,  1390,  1390,  1391,  1391,  1392,  1392,  1393,  1393,  1394,
    1394,  1394,  1395,  1395,  1396,  1396,  1397,  1397,  1398,  1398,
    1399,  1399,  1400,  1400,  1401,  1401,  1402,  1402,  1402,  1403,
    1403,  1404,  1404,  1405,  1405,  1406,  1406,  1407,  1407,  1408,
    1408,  1409,  1409,  1410,  1410,  1411,  1411,  1412,  1412,  1413,
    1413,  1414,  1414,  1415,  1415,  1416,  1416,  1417,  1417,  1418,
    1418,  1419,  1419,  1420,  1420,  1421,  1421,  1421,  1422,  1422,
    1423,  1423,  1424,  1424,  1425,  1425,  1426,  1426,  1427,  1427,
    1428,  1428,  1429,  1429
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     0,     1,     1,     2,     3,     3,
       3,     0,     3,     3,     0,     0,     8,     0,     6,     1,
       1,     1,     1,     0,     2,     0,     3,     1,     1,     1,
       1,     2,     2,     1,     1,     3,     0,     3,     5,     0,
       3,     0,     1,     1,     2,     2,     0,     4,     0,     3,
       0,     3,     0,     4,     0,     2,     3,     2,     1,     2,
       1,     1,     1,     1,     5,     3,     3,     4,     1,     1,
       1,     1,     1,     2,     0,     0,     4,     0,     2,     3,
       1,     2,     3,     3,     3,     3,     1,     2,     0,     2,
       0,     1,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       2,     3,     3,     1,     0,     1,     1,     3,     4,     0,
       5,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     0,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     3,     1,     2,     3,
       1,     2,     1,     2,     4,     1,     2,     1,     3,     4,
       5,     0,     3,     3,     5,     3,     4,     3,     3,     5,
       0,     3,     0,     2,     0,     2,     0,     2,     0,     6,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       1,     1,     1,     1,     0,     1,     1,     4,     1,     1,
       1,     7,     0,     4,     3,     3,     1,     4,     0,     1,
       1,     0,     5,     2,     2,     1,     0,     4,     5,     2,
       3,     1,     1,     3,     1,     2,     4,     4,     4,     1,
       3,     4,     4,     3,     1,     1,     3,     2,     2,     2,
       0,     2,     3,     1,     2,     1,     1,     5,     0,     1,
       1,     1,     0,     6,     1,     2,     2,     0,     2,     0,
      10,     0,     3,     0,     3,     0,     2,     2,     0,     5,
       3,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       4,     6,     9,     0,     3,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     1,     1,     3,     5,     0,     2,
       1,     1,     1,     4,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     2,     2,     2,     2,
       1,     2,     0,     0,     5,     0,     2,     2,     0,     5,
       0,     2,     3,     3,     3,     0,     0,     5,     0,     0,
       2,     2,     3,     1,     1,     1,     0,     4,     3,     2,
       0,     1,     1,     1,     0,     2,     1,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     2,     0,     4,     5,     0,     5,
       2,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     0,
       2,     0,     1,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       0,     2,     7,     8,     0,     2,     0,     2,     0,     3,
       0,     3,     0,     1,     1,     0,     5,     1,     1,     0,
       3,     1,     2,     1,     2,     2,     3,     1,     0,     5,
       1,     2,     1,     3,     0,     4,     2,     2,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     2,     0,
       6,     0,     2,     2,     2,     3,     1,     1,     2,     2,
       1,     2,     4,     1,     4,     2,     0,     2,     1,     1,
       1,     1,     1,     3,     4,     4,     4,     3,     0,     2,
       0,     5,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     2,     1,     2,     1,     1,     0,     2,
       2,     0,     2,     4,     4,     0,     3,     1,     1,     3,
       6,     2,     3,     2,     2,     3,     2,     1,     2,     2,
       1,     1,     1,     2,     2,     1,     4,     2,     3,     0,
       0,     5,     0,     1,     2,     3,     1,     0,     4,     3,
       0,     2,     2,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     5,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     3,     2,     0,     0,     0,     9,     0,
       4,     0,     0,     3,     0,     3,     1,     2,     4,     0,
       2,     2,     0,     3,     3,     4,     4,     3,     0,     1,
       0,     2,     2,     0,     0,     7,     0,     2,     1,     1,
       2,     1,     1,     0,     6,     0,     2,     2,     1,     0,
       1,     0,     0,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     4,
       0,     4,     3,     3,     4,     3,     4,     3,     3,     4,
       4,     3,     4,     3,     4,     5,     3,     4,     3,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     2,
       3,     1,     2,     2,     2,     2,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     4,     3,     1,
       2,     1,     1,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     4,
       4,     5,     6,     0,     2,     0,     1,     0,     3,     3,
       4,     0,     2,     0,     3,     1,     2,     4,     0,     2,
       0,     4,     0,     6,     0,     1,     1,     1,     1,     1,
       0,     0,     3,     1,     2,     2,     3,     0,     2,     2,
       2,     0,     3,     2,     2,     4,     1,     1,     1,     1,
       0,     2,     2,     0,     1,     2,     2,     0,     1,     2,
       0,     1,     0,     3,     1,     2,     1,     1,     0,     3,
       2,     3,     0,     1,     3,     3,     2,     0,     4,     4,
       0,     1,     1,     1,     0,     4,     4,     2,     1,     2,
       0,     1,     0,     4,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     0,     3,     1,     1,     1,     2,     1,
       2,     1,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     3,     1,     3,     3,     3,     3,     0,     1,     0,
       4,     4,     6,     6,     8,     8,     0,     1,     0,     3,
       2,     0,     4,     2,     1,     3,     1,     1,     1,     2,
       1,     1,     2,     2,     3,     2,     3,     1,     3,     2,
       1,     1,     1,     0,     2,     0,     1,     0,     3,     0,
       2,     1,     2,     1,     1,     1,     0,     2,     0,     3,
       1,     0,     3,     1,     0,     3,     3,     0,     3,     2,
       0,     6,     3,     2,     1,     0,     1,     0,     3,     5,
       0,     2,     0,     3,     3,     0,     2,     1,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       3,     1,     2,     0,     3,     2,     1,     1,     1,     2,
       1,     1,     1,     0,     3,     2,     5,     1,     2,     2,
       2,     1,     1,     1,     2,     1,     2,     4,     2,     0,
       1,     1,     1,     1,     4,     0,     1,     1,     2,     2,
       3,     3,     0,     3,     0,     3,     3,     4,     0,     4,
       4,     6,     0,     1,     0,     3,     1,     2,     5,     1,
       1,     1,     1,     0,     3,     0,     3,     2,     1,     0,
       3,     2,     0,     4,     2,     0,     1,     1,     1,     1,
       3,     0,     2,     1,     3,     3,     0,     3,     1,     1,
       1,     3,     7,     0,     4,     7,     0,     2,     0,     1,
       2,     1,     2,     3,     3,     1,     0,     1,     1,     4,
       4,     2,     0,     1,     1,     3,     2,     0,     3,     1,
       1,     0,     1,     1,     0,     3,     2,     1,     0,     4,
       4,     0,     1,     0,     4,     5,     0,     1,     2,     3,
       0,     1,     1,     0,     4,     4,     6,     0,     2,     0,
       2,     1,     2,     3,     0,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     3,     4,     1,     2,     3,     1,     2,     3,
       3,     4,     0,     3,     0,     7,     0,     5,     0,     2,
       0,     2,     0,     3,     0,     2,     4,     0,     2,     4,
       0,     4,     4,     0,     3,     0,     4,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     1,     0,     1,
       0,     4,     2,     0,     2,     1,     4,     4,     0,     1,
       1,     1,     1,     1,     0,     4,     5,     1,     2,     2,
       0,     3,     1,     1,     0,     4,     0,     1,     0,     4,
       4,     6,     6,     0,     1,     2,     0,     1,     0,     3,
       1,     2,     0,     3,     5,     0,     3,     2,     0,     4,
       6,     0,     3,     1,     3,     2,     2,     2,     3,     0,
       3,     0,     3,     0,     3,     0,     1,     0,     3,     1,
       1,     1,     1,     1,     7,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     1,     2,     3,     0,     1,
       2,     1,     3,     1,     1,     4,     1,     1,     1,     0,
       4,     6,     0,     2,     0,     4,     3,     3,     1,     1,
       0,     1,     1,     0,     1,     0,     2,     2,     0,     1,
       2,     1,     1,     0,     1,     2,     1,     1,     0,     2,
       2,     0,     1,     2,     0,     1,     2,     0,     2,     2,
       0,     1,     2,     0,     1,     2,     0,     2,     2,     0,
       1,     2,     0,     1,     2,     2,     2,     2,     2,     0,
       1,     2,     0,     1,     2,     2,     2,     0,     1,     2,
       0,     1,     2,     0,     1,     2,     2,     0,     1,     2,
       0,     1,     2,     0,     2,     1,     1,     0,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     2,     2,
       1,     3,     1,     1,     3,     1,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     0,     2,     1,     1,     1,     3,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     4,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     3,     2,     2,     1,     1,     3,     2,     2,     1,
       1,     3,     3,     4,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     5,     5,
       4,     5,     5,     5,     5,     5,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     5,
       0,     3,     2,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     0,     0,     1,     0,     1,     0,
       1,     0,     2,     0,     2,     0,     1,     1,     0,     1,
       0,     1,     2,     0,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     1,     0,
       1,     1,     0,     2,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     0,     2,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     3,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 2215 "parser.y" /* yacc.c:1646  */
    {
	clear_initial_values ();
	current_program = NULL;
	defined_prog_list = NULL;
	cobc_cs_check = 0;
	prog_end = 0;
	depth = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  }
#line 7276 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 2227 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
	if (depth > 1) {
		cb_error (_("multiple PROGRAM-ID's without matching END PROGRAM"));
	}
	if (cobc_flag_main && !main_flag_set) {
		cb_error (_("executable requested but no program found"));
	}
	if (errorcount > 0) {
		YYABORT;
	}
	if (!current_program->entry_list) {
		emit_entry (current_program->program_id, 0, NULL);
	}
  }
#line 7299 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 2263 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	current_section = NULL;
	current_paragraph = NULL;
	prog_end = 1;
	if (increment_depth ()) {
		YYABORT;
	}
	l = cb_build_alphanumeric_literal (demangle_name,
					   strlen (demangle_name));
	current_program->program_id = cb_build_program_id (l, NULL, 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = cobc_flag_main;
	}
	check_relaxed_syntax (COBC_HD_PROGRAM_ID);
  }
#line 7323 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 2314 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 7332 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2322 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 7340 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2345 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7348 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2349 "parser.y" /* yacc.c:1646  */
    {
	if (setup_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}

	setup_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 1);
  }
#line 7360 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2357 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7369 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 2365 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_id = 1;
  }
#line 7377 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 2369 "parser.y" /* yacc.c:1646  */
    {
	if (setup_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	setup_prototype ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 7390 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 2381 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
	}
	/*
	  The program name is a key part of defining the current_program, so we
	  mustn't lose it (unlike in undefined_word).
	*/
	(yyval) = (yyvsp[0]);
  }
#line 7405 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 2400 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7411 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2401 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7417 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 2410 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7430 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2419 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 7443 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 2429 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING (_("CALL prototypes"));
  }
#line 7451 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 2441 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 7459 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 2445 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 7467 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 2461 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 7475 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2478 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 7487 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 2492 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
#line 7497 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2504 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 7507 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 2519 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 7519 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 2532 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 7529 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2561 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 7537 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2569 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 7545 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2576 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 7553 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2583 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7565 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2594 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7573 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2598 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7581 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2602 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7589 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2606 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7597 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2620 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7606 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2625 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7614 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2633 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7622 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2645 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7630 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2649 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		setup_prototype ((yyvsp[-1]), (yyvsp[0]), CB_FUNCTION_TYPE, 0);
	}
  }
#line 7640 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2656 "parser.y" /* yacc.c:1646  */
    {
	  if ((yyvsp[-1]) != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		setup_prototype ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE, 0);
	}
  }
#line 7651 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2666 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7660 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2671 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7669 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2682 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7683 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2727 "parser.y" /* yacc.c:1646  */
    {
	char system_name[16];
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	check_duplicate = 0;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		save_tree = NULL;
	} else {
		/* get system name and revert word-combination of scanner.l,
		   if necessary (e.g. SWITCH A <--> SWITCH_A) */
		system_name[15] = 0;
		strncpy(system_name, CB_NAME ((yyvsp[0])), 15);
		if (system_name [6] == '_') {
			system_name [6] = ' ';
		}
		/* lookup system name */
		save_tree = lookup_system_name (system_name);
		if (!save_tree) {
			cb_error_x ((yyvsp[0]), _("invalid system-name '%s'"), system_name);
		}
	}
  }
#line 7712 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2756 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("invalid %s clause"), "");
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7726 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2767 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("invalid %s clause"), "SPECIAL NAMES");
		} else if (CB_VALID_TREE ((yyvsp[0]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[-2]);
			cb_define ((yyvsp[0]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[0]), save_tree);
		}
	}
  }
#line 7743 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2780 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7755 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2796 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7763 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2803 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 7782 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2818 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 7801 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2838 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		(yyval) = NULL;
	} else {
		/* Returns null on error */
		(yyval) = cb_build_alphabet_name ((yyvsp[0]));
	}
  }
#line 7818 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2851 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7830 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2862 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7840 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2868 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7850 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2874 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7860 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2880 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7870 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2886 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7880 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2892 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7891 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2902 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7899 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7907 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2913 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7915 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2917 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7923 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2921 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7931 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2925 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7939 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2932 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7947 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2936 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7955 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2942 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7961 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2943 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7967 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2944 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7973 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2945 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7979 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2946 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7985 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2947 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7991 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2951 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7997 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2952 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 8003 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2960 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else if ((yyvsp[-1])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 8018 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2974 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8026 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2978 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8034 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2986 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8042 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2993 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8050 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2997 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 8062 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 3008 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[-2])) != cb_list_length ((yyvsp[0]))) {
		cb_error (_("invalid %s clause"), "SYMBOLIC");
		(yyval) = NULL;
	} else {
		l1 = (yyvsp[-2]);
		l2 = (yyvsp[0]);
		for (; l1; l1 = CB_CHAIN (l1), l2 = CB_CHAIN (l2)) {
			CB_PURPOSE (l1) = CB_VALUE (l2);
		}
		(yyval) = (yyvsp[-2]);
	}
  }
#line 8083 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 3028 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 8095 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 3036 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 8107 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 3046 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 8113 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 3047 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 8119 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 3054 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		x = cb_build_class_name ((yyvsp[-2]), (yyvsp[0]));
		if (x) {
			current_program->class_name_list =
				cb_list_add (current_program->class_name_list, x);
		}
	}
  }
#line 8141 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 3074 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 8147 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 3075 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 8153 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 3080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8161 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 3084 "parser.y" /* yacc.c:1646  */
    {
	if (CB_TREE_CLASS ((yyvsp[-2])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[-2])) && CB_LITERAL ((yyvsp[-2]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (CB_TREE_CLASS ((yyvsp[0])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[0])) && CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (literal_value ((yyvsp[-2])) <= literal_value ((yyvsp[0]))) {
		(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
	} else {
		(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-2]));
	}
  }
#line 8181 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 3105 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		l = cb_build_locale_name ((yyvsp[-2]), (yyvsp[0]));
		if (l) {
			current_program->locale_list =
				cb_list_add (current_program->locale_list, l);
		}
	}
  }
#line 8203 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 3128 "parser.y" /* yacc.c:1646  */
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[-1]))->data;
	unsigned int	error_ind = 0;
	unsigned int	char_seen = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURRENCY", SYN_CLAUSE_1, &check_duplicate);
		if (strcmp("$", (const char *)s) != 0) {
			if ((yyvsp[0]) && CB_LITERAL ((yyvsp[-1]))->size != 1) {
				CB_PENDING_X ((yyvsp[-1]), _("CURRENCY SIGN longer than one character"));
				error_ind = 1;
			}
			while (*s) {
				switch (*s) {
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
				case '+':
				case '-':
				case ',':
				case '.':
				case '*':
					error_ind = 2;
					break;
				case ' ':
					break;
				default:
					char_seen = 1;
					break;
				}
				s++;
			}
			if (!char_seen) {
				error_ind = 2;
			}
		} else {
			if (error_ind > 1) {;
				CB_PENDING_X ((yyvsp[-1]), _("CURRENCY SIGN other than '$'"));
			}
		}
		switch (error_ind) {
		case 0:
		case 1:
			/* FIXME: currency sign/symbol are currently mixed in cobc and libcob */
			/* current_program->currency_sign = CB_LITERAL ($4); */
			break;
		default:
			cb_error_x ((yyvsp[-1]), _("invalid CURRENCY SIGN '%s'"), (char*)CB_LITERAL ((yyvsp[-1]))->data);
			break;
		}
		if ((yyvsp[0])) {
			set_currency_picture_symbol ((yyvsp[0]));
		} else {
			set_currency_picture_symbol ((yyvsp[-1]));
		}
	}
  }
#line 8277 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 3202 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8285 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 3206 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8293 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 3215 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2, &check_duplicate);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  }
#line 8310 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 3234 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		current_program->flag_trailing_separate = 1;
	}
  }
#line 8325 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 3250 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3, &check_duplicate);
		current_program->cursor_pos = (yyvsp[0]);
	}
  }
#line 8341 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 3268 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4, &check_duplicate);
		current_program->crt_status = (yyvsp[0]);
	}
  }
#line 8357 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3286 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5, &check_duplicate);
		CB_PENDING ("SCREEN CONTROL");
	}
  }
#line 8373 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 3303 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6, &check_duplicate);
		CB_PENDING ("EVENT STATUS");
	}
  }
#line 8389 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3324 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 8397 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3331 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 8406 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 3339 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 8416 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3348 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 8426 "parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 3363 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_VALID_TREE ((yyvsp[0]))) {
		/* Build new file */
		current_file = build_file ((yyvsp[0]));
		current_file->optional = CB_INTEGER ((yyvsp[-1]))->val;

		/* Add file to current program list */
		CB_ADD_TO_CHAIN (CB_TREE (current_file),
				 current_program->file_list);
	} else {
		current_file = NULL;
		if (current_program->file_list) {
			current_program->file_list
				= CB_CHAIN (current_program->file_list);
		}
	}
  }
#line 8452 "parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 3385 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 8462 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3417 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 8472 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3423 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 8486 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3433 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdout", (size_t)6);
		current_file->special = COB_SELECT_STDOUT;
	}
  }
#line 8503 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3446 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdin", (size_t)5);
		current_file->special = COB_SELECT_STDIN;
	}
  }
#line 8520 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3459 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		/* RM/COBOL always expects an assignment name here - we ignore this
		   for PRINTER + PRINTER-1 as ACUCOBOL allows this for using as alias */
		current_file->flag_ext_assign = 0;
		if ((yyvsp[-1]) == cb_int0) {
			current_file->assign =
				cb_build_alphanumeric_literal ("PRINTER",	(size_t)7);
		} else if ((yyvsp[-1]) == cb_int1) {
			current_file->assign =
				cb_build_alphanumeric_literal ("PRINTER-1",	(size_t)9);
		} else {
			current_file->assign =
				cb_build_alphanumeric_literal ("LPT1",	(size_t)4);
		}

	}
  }
#line 8548 "parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3485 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8554 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 3486 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8560 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 3487 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8566 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 3499 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8574 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3506 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8582 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3519 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8590 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3531 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8599 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3538 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8605 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3539 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8611 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3540 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8617 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3548 "parser.y" /* yacc.c:1646  */
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[-2]);
	p->duplicates = CB_INTEGER ((yyvsp[-1]))->val;
	p->next = NULL;

	/* Add to the end of list */
	if (current_file->alt_key_list == NULL) {
		current_file->alt_key_list = p;
	} else {
		l = current_file->alt_key_list;
		for (; l->next; l = l->next) {
			;
		}
		l->next = p;
	}
  }
#line 8642 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3571 "parser.y" /* yacc.c:1646  */
    { }
#line 8648 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3574 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
#line 8656 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3579 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8664 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3589 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
#line 8673 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3597 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8687 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3612 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8696 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3627 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8704 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3635 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8713 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3640 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8722 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3645 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8731 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3654 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8739 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3658 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
#line 8748 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3674 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8757 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3679 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8766 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3684 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8775 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3689 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8784 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3700 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8793 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3711 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8801 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3721 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8810 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3728 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8816 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3729 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8822 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3730 "parser.y" /* yacc.c:1646  */
    { CB_PENDING ("SPLIT KEYS"); }
#line 8828 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3737 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8837 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3748 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8845 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3762 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8854 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3769 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8860 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3770 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8866 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3771 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8872 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3780 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8880 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3799 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	switch (CB_INTEGER ((yyvsp[-3]))->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l))) {
				CB_FILE (cb_ref (CB_VALUE (l)))->same_clause = samearea;
			}
		}
		samearea++;
		break;
	case 2:
		/* SAME SORT-MERGE */
		break;
	}
  }
#line 8909 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3826 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8915 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3827 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8921 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3828 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8927 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3829 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8933 "parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 3836 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8942 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3841 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8954 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3870 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8962 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3879 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8970 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3886 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8978 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3895 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8988 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3909 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[0]))) {
			if (current_file->reports) {
				cb_error (_("RECORD description invalid with REPORT"));
			} else {
				finalize_file (current_file, CB_FIELD ((yyvsp[0])));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
#line 9006 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3928 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[0])) || cb_ref ((yyvsp[0])) == cb_error_node) {
		YYERROR;
	}
	current_file = CB_FILE (cb_ref ((yyvsp[0])));
	if (CB_VALID_TREE (current_file)) {
		if ((yyvsp[-1])) {
			current_file->organization = COB_ORG_SORT;
		}
	}
  }
#line 9026 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3945 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9034 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3952 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9042 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3956 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9050 "parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 3967 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 9064 "parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 3977 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_external) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		current_file->flag_global = 1;
		current_program->flag_file_global = 1;
	}
  }
#line 9083 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 4007 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 9092 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 4020 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_max = cb_get_int ((yyvsp[-1]));
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			cb_error (_("RECORD clause invalid"));
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
		}
	}
  }
#line 9116 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 4040 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_min = cb_get_int ((yyvsp[-3]));
		current_file->record_max = cb_get_int ((yyvsp[-1]));
		if (current_file->record_min < 0)  {
			current_file->record_min = 0;
			error_ind = 1;
		}
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			error_ind = 1;
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
			error_ind = 1;
		}
		if (current_file->record_max <= current_file->record_min)  {
			error_ind = 1;
		}
		if (error_ind) {
			cb_error (_("RECORD clause invalid"));
		}
	}
  }
#line 9154 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 4075 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	current_file->record_min = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : 0;
	current_file->record_max = (yyvsp[-2]) ? cb_get_int ((yyvsp[-2])) : 0;
	if ((yyvsp[-3]) && current_file->record_min < 0)  {
		current_file->record_min = 0;
		error_ind = 1;
	}
	if ((yyvsp[-2]) && current_file->record_max < 1)  {
		current_file->record_max = 1;
		error_ind = 1;
	}
	if ((yyvsp[-2]) && current_file->record_max > MAX_FD_RECORD)  {
		current_file->record_max = MAX_FD_RECORD;
		cb_error (_("RECORD size exceeds maximum allowed (%d)"),
			  MAX_FD_RECORD);
		error_ind = 1;
	}
	if (((yyvsp[-3]) || (yyvsp[-2])) && current_file->record_max <= current_file->record_min)  {
		error_ind = 1;
	}
	if (error_ind) {
		cb_error (_("RECORD clause invalid"));
	}
  }
#line 9186 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 4106 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 9194 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 4112 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9200 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 4113 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9206 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 4117 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9212 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 4118 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9218 "parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 4126 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 9227 "parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 4137 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 9236 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 4142 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 9248 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 4165 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 9257 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 4177 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8, &check_duplicate);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
	} else {
		current_file->linage = (yyvsp[-2]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  }
#line 9276 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 4205 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 9284 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 4212 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 9292 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 4219 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 9300 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 4228 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 9310 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 4241 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
#line 9320 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 4257 "parser.y" /* yacc.c:1646  */
    {
	struct cb_alphabet_name	*al;

	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);

	al = CB_ALPHABET_NAME (cb_ref ((yyvsp[-1])));
	switch (al->alphabet_type) {
#ifdef	COB_EBCDIC_MACHINE
	case CB_ALPHABET_ASCII:
#else
	case CB_ALPHABET_EBCDIC:
#endif
	case CB_ALPHABET_CUSTOM:
		current_file->code_set = al;
		break;
	default:
		if (warningopt && CB_VALID_TREE ((yyvsp[-1]))) {
			cb_warning_x ((yyvsp[-1]), _("ignoring CODE-SET '%s'"),
				      cb_name ((yyvsp[-1])));
		}
		break;
	}

	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("CODE-SET clause invalid for file type"));
	}

	if (warningopt) {
		CB_PENDING ("CODE-SET");
	}
  }
#line 9357 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 4293 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 9369 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 4306 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REPORT", SYN_CLAUSE_11, &check_duplicate);
	CB_PENDING("REPORT WRITER");
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[0]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
#line 9385 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 4326 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9399 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4336 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 9412 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4350 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_COMMUNICATION;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_COMMUNICATION_SECTION;
	/* add a compiler configuration if either */
	if (cb_std_define > CB_STD_85) {
		cb_verify (CB_UNCONFORMABLE, _ ("COMMUNICATION SECTION"));
	} else if (cb_verify (CB_OBSOLETE, _("COMMUNICATION SECTION"))) {
		CB_PENDING ("COMMUNICATION SECTION");
	}
  }
#line 9428 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4371 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[0]))) {
			finalize_file (current_file, CB_FIELD ((yyvsp[0])));
		} else {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
#line 9442 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 4386 "parser.y" /* yacc.c:1646  */
    {
	/* CD internally defines a new file */
	if (CB_VALID_TREE ((yyvsp[0]))) {
		/* Build new file */
		current_file = build_file ((yyvsp[0]));
		current_file->organization = COB_ORG_MESSAGE;

		/* Add file to current program list */
		CB_ADD_TO_CHAIN (CB_TREE (current_file),
				 current_program->file_list);
	} else {
		current_file = NULL;
		if (current_program->file_list) {
			current_program->file_list
				= CB_CHAIN (current_program->file_list);
		}
	}
	check_duplicate = 0;
  }
#line 9466 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 4417 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
  }
#line 9474 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4421 "parser.y" /* yacc.c:1646  */
    {
	  current_file->sharing = cb_int (COB_LOCK_OPEN_EXCLUSIVE);
  current_file->lock_mode = COB_LOCK_EXCLUSIVE;
  }
#line 9483 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4426 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
  }
#line 9491 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4436 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 9501 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4442 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 9511 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4451 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9519 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 4454 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 9529 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4460 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 9542 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4480 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9552 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4486 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 9565 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4495 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9579 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4508 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9587 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4515 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9597 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4521 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 9607 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4531 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 9617 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4540 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9625 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4544 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9638 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4555 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9644 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4556 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9650 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4557 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9656 "parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 4558 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9662 "parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 4563 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9670 "parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 4567 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9678 "parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 4571 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9686 "parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 4575 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9694 "parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 4579 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9702 "parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 4583 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9710 "parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 4587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9718 "parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 4591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9726 "parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 4595 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9734 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4599 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9742 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4603 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9750 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4607 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9758 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4611 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9770 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4643 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-4]), (yyvsp[-3]))) {
		YYERROR;
	}

	if (cb_ref ((yyvsp[-1])) != cb_error_node) {
		error_if_invalid_level_for_renames ((yyvsp[-1]));
		current_field->redefines = CB_FIELD (cb_ref ((yyvsp[-1])));
	}

	if ((yyvsp[0])) {
		error_if_invalid_level_for_renames ((yyvsp[0]));
		current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[0])));
	} else {
		/* If there is no THRU clause, RENAMES acts like REDEFINES. */
		current_field->pic = current_field->redefines->pic;
	}

	cb_validate_renames_item (current_field);
  }
#line 9795 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4667 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 9803 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4671 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]) == cb_error_node ? NULL : (yyvsp[0]);
  }
#line 9811 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4678 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9821 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4684 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_88_item (current_field);
  }
#line 9829 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4691 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[-4]));
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-4]));
	if (level != 1) {
		cb_error (_("CONSTANT item not at 01 level"));
	} else if ((yyvsp[0])) {
		x = cb_build_constant ((yyvsp[-3]), (yyvsp[0]));
		CB_FIELD (x)->flag_item_78 = 1;
		CB_FIELD (x)->level = 1;
		cb_needs_01 = 1;
		if ((yyvsp[-1])) {
			CB_FIELD (x)->flag_is_global = 1;
		}
		/* Ignore return value */
		(void)cb_validate_78_item (CB_FIELD (x), 0);
	}
  }
#line 9856 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4714 "parser.y" /* yacc.c:1646  */
    {
	if (set_current_field ((yyvsp[-1]), (yyvsp[0]))) {
		YYERROR;
	}
  }
#line 9866 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4720 "parser.y" /* yacc.c:1646  */
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
#line 9875 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4728 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9883 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4732 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
#line 9892 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4740 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9901 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4746 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9910 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4773 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
	if ((yyvsp[-2]) != NULL) {
		if (cb_relaxed_syntax_checks) {
			cb_warning_x ((yyvsp[0]), _("REDEFINES clause should follow entry-name"));
		} else {
			cb_error_x ((yyvsp[0]), _("REDEFINES clause must follow entry-name"));
		}
	}

	current_field->redefines = cb_resolve_redefines (current_field, (yyvsp[0]));
	if (current_field->redefines == NULL) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		YYERROR;
	}
  }
#line 9932 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4797 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_2, &check_pic_duplicate);
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("%s not allowed here"), "EXTERNAL");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "EXTERNAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "EXTERNAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_is_global) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "REDEFINES");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	} else {
		current_field->flag_external = 1;
		current_program->flag_has_external = 1;
	}
  }
#line 9960 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4824 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9968 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4828 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9976 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4841 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_3, &check_pic_duplicate);
	if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "GLOBAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "GLOBAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else if (current_storage == CB_STORAGE_LOCAL) {
		cb_error (_("%s not allowed here"), "GLOBAL");
	} else {
		current_field->flag_is_global = 1;
	}
  }
#line 9999 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4866 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 10008 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4882 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 10016 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4886 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 10024 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4890 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FLOAT);
  }
#line 10032 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4894 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_DOUBLE);
  }
#line 10040 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4898 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
#line 10048 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4902 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 10056 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4906 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_COMP_5);
  }
#line 10064 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4910 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_COMP_6);
  }
#line 10072 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4914 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_COMP_X);
  }
#line 10080 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4918 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_DISPLAY);
  }
#line 10088 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4922 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_INDEX);
  }
#line 10096 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4926 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_PACKED);
  }
#line 10104 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4930 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 10113 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4935 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 10122 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4940 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 10130 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4944 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 10138 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4948 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 10150 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4956 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 10158 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4960 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 10166 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4964 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 10178 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4972 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 10186 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4976 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 10194 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4980 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 10202 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4984 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 10210 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4988 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 10218 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4992 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 10226 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4996 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 10234 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 5000 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 10242 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 5004 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 10254 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 5012 "parser.y" /* yacc.c:1646  */
    {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 10266 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 5020 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_BIN32);
  }
#line 10274 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 5024 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_BIN64);
  }
#line 10282 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 5028 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_BIN128);
  }
#line 10290 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 5032 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_DEC64);
  }
#line 10298 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 5036 "parser.y" /* yacc.c:1646  */
    {
	check_and_set_usage (CB_USAGE_FP_DEC128);
  }
#line 10306 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 5040 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_UNFINISHED ("USAGE NATIONAL");
  }
#line 10315 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 5060 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 10326 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 5067 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 10337 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 5081 "parser.y" /* yacc.c:1646  */
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[-4]), (yyvsp[-3]));
  }
#line 10347 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 5090 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 10355 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 5100 "parser.y" /* yacc.c:1646  */
    {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max ((yyvsp[-5]), (yyvsp[-4]));
  }
#line 10365 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 5107 "parser.y" /* yacc.c:1646  */
    {
	setup_occurs ();
	current_field->occurs_min = (yyvsp[-4]) ? cb_get_int ((yyvsp[-4])) : 0;
	if ((yyvsp[-3])) {
		current_field->occurs_max = cb_get_int ((yyvsp[-3]));
		if (current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_max = 0;
	}
	CB_PENDING("OCCURS DYNAMIC");
  }
#line 10383 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 5123 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10389 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 5124 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10395 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 5128 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10401 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 5129 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10407 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 5134 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 10415 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 5141 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10424 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 5149 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 10432 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5156 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_tree		l;
		struct cb_key	*keys;
		int		i;
		int		nkeys;

		l = (yyvsp[0]);
		nkeys = cb_list_length ((yyvsp[0]));
		keys = cobc_parse_malloc (sizeof (struct cb_key) * nkeys);

		for (i = 0; i < nkeys; i++) {
			keys[i].dir = CB_PURPOSE_INT (l);
			keys[i].key = CB_VALUE (l);
			l = CB_CHAIN (l);
		}
		current_field->keys = keys;
		current_field->nkeys = nkeys;
	}
  }
#line 10457 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5179 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 10463 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 5182 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[-3]);
		if (qualifier && !CB_REFERENCE(CB_VALUE(l))->chain &&
		    strcasecmp (CB_NAME(CB_VALUE(l)), CB_NAME(qualifier))) {
			CB_REFERENCE(CB_VALUE(l))->chain = qualifier;
		}
	}
	(yyval) = cb_list_append ((yyvsp[-4]), (yyvsp[0]));
  }
#line 10480 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5197 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 10486 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5198 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 10492 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5203 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 10500 "parser.c" /* yacc.c:1646  */
    break;

  case 521:
#line 5209 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10506 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5211 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10512 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5216 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 10521 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5227 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 10530 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 5238 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 10539 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5249 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 10548 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5260 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BASED", SYN_CLAUSE_11, &check_pic_duplicate);
	if (current_storage != CB_STORAGE_WORKING &&
	    current_storage != CB_STORAGE_LINKAGE &&
	    current_storage != CB_STORAGE_LOCAL) {
		cb_error (_("%s not allowed here"), "BASED");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "BASED");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "BASED");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "REDEFINES");
	} else if (current_field->flag_any_length) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else {
		current_field->flag_item_based = 1;
	}
  }
#line 10575 "parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5288 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 10584 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5296 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 10590 "parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5297 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 10596 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5301 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10602 "parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5302 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 10608 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5307 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 10619 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5319 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10632 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5328 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY NUMERIC");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10646 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5343 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10659 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5352 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10669 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5364 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10679 "parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5370 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10689 "parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5381 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10699 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5397 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10712 "parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5412 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10720 "parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5419 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10729 "parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5424 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10737 "parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5435 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10745 "parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5454 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PAGE", SYN_CLAUSE_4, &check_duplicate);
	if (!current_report->heading) {
		current_report->heading = 1;
	}
	if (!current_report->first_detail) {
		current_report->first_detail = current_report->heading;
	}
	if (!current_report->last_control) {
		if (current_report->last_detail) {
			current_report->last_control = current_report->last_detail;
		} else if (current_report->footing) {
			current_report->last_control = current_report->footing;
		} else {
			current_report->last_control = current_report->lines;
		}
	}
	if (!current_report->last_detail && !current_report->footing) {
		current_report->last_detail = current_report->lines;
		current_report->footing = current_report->lines;
	} else if (!current_report->last_detail) {
		current_report->last_detail = current_report->footing;
	} else if (!current_report->footing) {
		current_report->footing = current_report->last_detail;
	}
	if (current_report->heading > current_report->first_detail ||
	    current_report->first_detail > current_report->last_control ||
	    current_report->last_control > current_report->last_detail ||
	    current_report->last_detail > current_report->footing) {
		cb_error (_("invalid %s clause"), "PAGE");
	}
  }
#line 10782 "parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5490 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10790 "parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5494 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10799 "parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 5499 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10807 "parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5519 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10815 "parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5526 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10823 "parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5533 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10831 "parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5540 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10839 "parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5547 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10847 "parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5558 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10855 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5589 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10863 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5615 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10871 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5622 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10879 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5638 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10887 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5649 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10895 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5661 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10903 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5694 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10911 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5701 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10919 "parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 5708 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10927 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5717 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10938 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5724 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	if (description_field) {
		for (p = description_field; p; p = p->sister) {
			cb_validate_field (p);
		}
		current_program->screen_storage = description_field;
		current_program->flag_screen = 1;
	}
  }
#line 10954 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5749 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-1]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (current_field->parent) {
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  }
#line 10978 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5769 "parser.y" /* yacc.c:1646  */
    {
	cob_flags_t	flags;

	if (current_field->parent) {
		flags = current_field->parent->screen_flag;
		flags &= ~COB_SCREEN_BLANK_LINE;
		flags &= ~COB_SCREEN_BLANK_SCREEN;
		flags &= ~COB_SCREEN_ERASE_EOL;
		flags &= ~COB_SCREEN_ERASE_EOS;
		flags &= ~COB_SCREEN_LINE_PLUS;
		flags &= ~COB_SCREEN_LINE_MINUS;
		flags &= ~COB_SCREEN_COLUMN_PLUS;
		flags &= ~COB_SCREEN_COLUMN_MINUS;

		flags = zero_conflicting_flags (current_field->screen_flag,
						flags);

		current_field->screen_flag |= flags;
	}

	if (current_field->screen_flag & COB_SCREEN_INITIAL) {
		if (!(current_field->screen_flag & COB_SCREEN_INPUT)) {
			cb_error (_("INITIAL specified on non-input field"));
		}
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}

	if (likely (current_field)) {
		if (!description_field) {
			description_field = current_field;
		}
		if (current_field->flag_occurs
		    && !has_relative_pos (current_field)) {
			cb_error (_("relative LINE/COLUMN clause required with OCCURS"));
		}
	}
  }
#line 11022 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5809 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
#if	1	/* RXWRXW Screen field */
	if (current_field) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
	}
#endif
	current_field = cb_get_real_field ();
  }
#line 11042 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5832 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				       "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 11051 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5837 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				       "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 11060 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5842 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 11068 "parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5846 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 11076 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5850 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				       "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 11085 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5855 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				       "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 11094 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5860 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				       "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11103 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5865 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				       "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 11112 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5870 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 11120 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5874 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 11128 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5878 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
#line 11137 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5883 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
#line 11146 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5888 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
#line 11155 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5893 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				       "TAB", COB_SCREEN_TAB);
  }
#line 11164 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5898 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("TAB", COB_SCREEN_TAB,
				       "AUTO", COB_SCREEN_AUTO);
  }
#line 11173 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5903 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				       "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
#line 11182 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5908 "parser.y" /* yacc.c:1646  */
    {
	if (cb_no_echo_means_secure) {
		set_screen_attr ("SECURE", COB_SCREEN_SECURE);
	} else {
		set_screen_attr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					       "SECURE", COB_SCREEN_SECURE);
	}
  }
#line 11195 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5917 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 11203 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5921 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 11211 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5925 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 11220 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5930 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 11228 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5934 "parser.y" /* yacc.c:1646  */
    {
	set_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 11236 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5938 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 11245 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5943 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 11254 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5948 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 11263 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5953 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 11272 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5966 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11285 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5975 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 11294 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5980 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 11306 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 6011 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11314 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 6015 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 11322 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 6019 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 11330 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 6026 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 11338 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 6030 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 11346 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 6034 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 11354 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 6042 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 11366 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 6053 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 11374 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 6062 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 11388 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 6072 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[-4])) {
		cb_error (_("executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[-4]));
	current_program->num_proc_params = cb_list_length ((yyvsp[-4]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[-4]));
	}
  }
#line 11404 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 6084 "parser.y" /* yacc.c:1646  */
    {
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
  }
#line 11423 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 6099 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	/* No PROCEDURE DIVISION header ! */
	/* Only a statement is allowed as first element */
	/* Thereafter, sections/paragraphs may be used */
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	label = cb_build_reference ("MAIN SECTION");
	current_section = CB_LABEL (cb_build_label (label, NULL));
	current_section->flag_section = 1;
	current_section->flag_dummy_section = 1;
	current_section->flag_skip_label = !!skip_statements;
	current_section->flag_declaratives = !!in_declaratives;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_section));
	label = cb_build_reference ("MAIN PARAGRAPH");
	current_paragraph = CB_LABEL (cb_build_label (label, NULL));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_dummy_paragraph = 1;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
	cb_set_system_names ();
  }
#line 11456 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 6132 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11464 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 6136 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11473 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6141 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11485 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 6149 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 11498 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6158 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11510 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 6168 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11516 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6170 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11522 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 6175 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	struct cb_field	*f;

	x = cb_build_identifier ((yyvsp[0]), 0);
	if ((yyvsp[-1]) == cb_int1 && CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
		f = CB_FIELD (cb_ref (x));
		f->flag_is_pdiv_opt = 1;
	}

	if (call_mode == CB_CALL_BY_VALUE
	    && CB_REFERENCE_P ((yyvsp[0]))
	    && CB_FIELD (cb_ref ((yyvsp[0])))->flag_any_length) {
		cb_error_x ((yyvsp[0]), _("ANY LENGTH items may only be BY REFERENCE formal parameters"));
	}

	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), x);
	CB_SIZES ((yyval)) = size_mode;
  }
#line 11546 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 6199 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11554 "parser.c" /* yacc.c:1646  */
    break;

  case 721:
#line 6203 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_UNFINISHED (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11567 "parser.c" /* yacc.c:1646  */
    break;

  case 723:
#line 6216 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11579 "parser.c" /* yacc.c:1646  */
    break;

  case 724:
#line 6224 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11591 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 6232 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11603 "parser.c" /* yacc.c:1646  */
    break;

  case 726:
#line 6240 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
	} else {
		size_mode = CB_SIZE_UNSIGNED;
		switch (*s) {
		case '1':
			size_mode |= CB_SIZE_1;
			break;
		case '2':
			size_mode |= CB_SIZE_2;
			break;
		case '4':
			size_mode |= CB_SIZE_4;
			break;
		case '8':
			size_mode |= CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
			break;
		}
	}
  }
#line 11636 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6269 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
	} else {
		size_mode = 0;
		switch (*s) {
		case '1':
			size_mode = CB_SIZE_1;
			break;
		case '2':
			size_mode = CB_SIZE_2;
			break;
		case '4':
			size_mode = CB_SIZE_4;
			break;
		case '8':
			size_mode = CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[0]), _("invalid value for SIZE"));
			break;
		}
	}
  }
#line 11669 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 6301 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11677 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6305 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11690 "parser.c" /* yacc.c:1646  */
    break;

  case 730:
#line 6317 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11700 "parser.c" /* yacc.c:1646  */
    break;

  case 731:
#line 6323 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11714 "parser.c" /* yacc.c:1646  */
    break;

  case 732:
#line 6333 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[0]));
/* RXWRXW
		if (f->storage != CB_STORAGE_LINKAGE) {
			cb_error (_("RETURNING item is not defined in LINKAGE SECTION"));
		} else if (f->level != 1 && f->level != 77) {
*/
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01"));
		} else if (f->flag_occurs) {
			cb_error (_("RETURNING item should not have OCCURS"));
		} else if (f->storage == CB_STORAGE_LOCAL) {
			cb_error (_("RETURNING item should not be in LOCAL-STORAGE"));
		} else {
			if (current_program->prog_type == CB_FUNCTION_TYPE) {
				if (f->flag_any_length) {
					cb_error (_("function RETURNING item may not be ANY LENGTH"));
				}

				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[0]);
		}
	}
  }
#line 11747 "parser.c" /* yacc.c:1646  */
    break;

  case 734:
#line 6365 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11756 "parser.c" /* yacc.c:1646  */
    break;

  case 735:
#line 6371 "parser.y" /* yacc.c:1646  */
    {
	if (needs_field_debug) {
		start_debug = 1;
	}
	in_declaratives = 0;
	in_debugging = 0;
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		current_paragraph = NULL;
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		current_section->flag_fatal_check = 1;
		emit_statement (cb_build_perform_exit (current_section));
		current_section = NULL;
	}
	skip_statements = 0;
	emit_statement (cb_build_comment ("END DECLARATIVES"));
	check_unreached = 0;
  }
#line 11786 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 6409 "parser.y" /* yacc.c:1646  */
    {
	if (next_label_list) {
		cb_tree	plabel;
		char	name[32];

		snprintf (name, sizeof(name), "L$%d", next_label_id);
		plabel = cb_build_label (cb_build_reference (name), NULL);
		CB_LABEL (plabel)->flag_next_sentence = 1;
		emit_statement (plabel);
		current_program->label_list =
			cb_list_append (current_program->label_list, next_label_list);
		next_label_list = NULL;
		next_label_id++;
	}
	/* check_unreached = 0; */
  }
#line 11807 "parser.c" /* yacc.c:1646  */
    break;

  case 742:
#line 6427 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11815 "parser.c" /* yacc.c:1646  */
    break;

  case 743:
#line 6437 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[-3]), 0) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph/section */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
	if (current_program->flag_debugging && !in_debugging) {
		if (current_paragraph || current_section) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new section */
	current_section = CB_LABEL (cb_build_label ((yyvsp[-3]), NULL));
	if ((yyvsp[-1])) {
		current_section->segment = cb_get_int ((yyvsp[-1]));
	}
	current_section->flag_section = 1;
	/* Careful here, one negation */
	current_section->flag_real_label = !in_debugging;
	current_section->flag_declaratives = !!in_declaratives;
	current_section->flag_skip_label = !!skip_statements;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	current_paragraph = NULL;
  }
#line 11863 "parser.c" /* yacc.c:1646  */
    break;

  case 744:
#line 6481 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11871 "parser.c" /* yacc.c:1646  */
    break;

  case 747:
#line 6492 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[-1]), 1) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		if (current_program->flag_debugging && !in_debugging) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new paragraph */
	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_declaratives = !!in_declaratives;
		current_section->flag_skip_label = !!skip_statements;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[-1]), current_section));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
#line 11920 "parser.c" /* yacc.c:1646  */
    break;

  case 748:
#line 6540 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		if (is_reserved_word (CB_NAME ((yyvsp[0])))) {
			cb_error_x ((yyvsp[0]), _("'%s' is not a statement"), CB_NAME ((yyvsp[0])));
		} else if (is_default_reserved_word (CB_NAME ((yyvsp[0])))) {
			cb_error_x ((yyvsp[0]), _("unknown statement '%s'; it may exist in another dialect"),
				    CB_NAME ((yyvsp[0])));
		} else {
			cb_error_x ((yyvsp[0]), _("unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	}
	YYERROR;
  }
#line 11940 "parser.c" /* yacc.c:1646  */
    break;

  case 749:
#line 6559 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11948 "parser.c" /* yacc.c:1646  */
    break;

  case 750:
#line 6563 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, _("SECTION segment"))) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = NULL;
	}
  }
#line 11964 "parser.c" /* yacc.c:1646  */
    break;

  case 751:
#line 6581 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11974 "parser.c" /* yacc.c:1646  */
    break;

  case 752:
#line 6586 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11983 "parser.c" /* yacc.c:1646  */
    break;

  case 753:
#line 6591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11993 "parser.c" /* yacc.c:1646  */
    break;

  case 754:
#line 6599 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_skip_label = !!skip_statements;
		current_section->flag_declaratives = !!in_declaratives;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	if (!current_paragraph) {
		label = cb_build_reference ("MAIN PARAGRAPH");
		current_paragraph = CB_LABEL (cb_build_label (label, NULL));
		current_paragraph->flag_declaratives = !!in_declaratives;
		current_paragraph->flag_skip_label = !!skip_statements;
		current_paragraph->flag_dummy_paragraph = 1;
		CB_TREE (current_paragraph)->source_file = cb_source_file;
		CB_TREE (current_paragraph)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_paragraph));
	}
	check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
  }
#line 12024 "parser.c" /* yacc.c:1646  */
    break;

  case 755:
#line 6626 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12032 "parser.c" /* yacc.c:1646  */
    break;

  case 756:
#line 6630 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12040 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6686 "parser.y" /* yacc.c:1646  */
    {
	if (cb_verify (cb_next_sentence_phrase, "NEXT SENTENCE")) {
		cb_tree label;
		char	name[32];

		begin_statement ("NEXT SENTENCE", 0);
		sprintf (name, "L$%d", next_label_id);
		label = cb_build_reference (name);
		next_label_list = cb_list_add (next_label_list, label);
		emit_statement (cb_build_goto (label, NULL));
	}
	check_unreached = 0;
  }
#line 12058 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6700 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 12067 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6711 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	cobc_cs_check = CB_CS_ACCEPT;
  }
#line 12076 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6721 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 12086 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6727 "parser.y" /* yacc.c:1646  */
    {
	/* Check for invalid use of screen clauses */
	if (current_statement->attr_ptr
	    || (!is_screen_field ((yyvsp[-3])) && line_column)) {
		cb_verify_x ((yyvsp[-3]), cb_accept_display_extensions,
			     _("non-standard ACCEPT"));
	}

	if (cb_accept_update && !has_dispattr (COB_SCREEN_NO_UPDATE)) {
		set_dispattr (COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto && !has_dispattr (COB_SCREEN_TAB)) {
		set_dispattr (COB_SCREEN_AUTO);
	}

	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 12109 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6746 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 12117 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6750 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 12125 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6754 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 12134 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6759 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 12143 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6764 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 12152 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6769 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 12161 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6774 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 12169 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6778 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 12177 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6782 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 12185 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6786 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 12193 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6790 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 12202 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6795 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 12210 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6799 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 12218 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6803 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 12226 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6807 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 12234 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6811 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 12242 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6815 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12250 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6819 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12258 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6827 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12266 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6845 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_2, &check_duplicate);
  }
#line 12274 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6849 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12282 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6854 "parser.y" /* yacc.c:1646  */
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12292 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6868 "parser.y" /* yacc.c:1646  */
    {
	set_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P ((yyvsp[0])) && cb_get_int ((yyvsp[0])) == 0) || (yyvsp[0]) == cb_zero) {
		cb_verify (cb_accept_display_extensions, "LINE 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR ((yyvsp[0]), cb_int0);
	} else {
		CB_PAIR_X (line_column) = (yyvsp[0]);
	}
  }
#line 12312 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6884 "parser.y" /* yacc.c:1646  */
    {
	set_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P ((yyvsp[0])) && cb_get_int ((yyvsp[0])) == 0) || (yyvsp[0]) == cb_zero) {
		cb_verify (cb_accept_display_extensions, "COLUMN 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR (cb_int0, (yyvsp[0]));
	} else {
		CB_PAIR_Y (line_column) = (yyvsp[0]);
	}
  }
#line 12332 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6900 "parser.y" /* yacc.c:1646  */
    {
	set_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				_("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				1, &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[0]);
  }
#line 12346 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6912 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12352 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6916 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12358 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6917 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12364 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6922 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12372 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6929 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("AUTO", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				    "TAB", COB_SCREEN_TAB);
  }
#line 12382 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6935 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TAB", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("TAB", COB_SCREEN_TAB,
				    "AUTO", COB_SCREEN_AUTO);
  }
#line 12392 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6941 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BELL", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
#line 12401 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6946 "parser.y" /* yacc.c:1646  */
    {
        check_repeated ("BLINK", SYN_CLAUSE_8, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
#line 12410 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6951 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_9, &check_duplicate);
	CB_PENDING ("ACCEPT CONVERSION");
  }
#line 12419 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6956 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FULL", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr (COB_SCREEN_FULL);
  }
#line 12428 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6961 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12438 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6967 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LEFTLINE", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr (COB_SCREEN_LEFTLINE);
  }
#line 12447 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6972 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOWER", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr_with_conflict ("LOWER", COB_SCREEN_LOWER,
				    "UPPER", COB_SCREEN_UPPER);
  }
#line 12457 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6978 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12467 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6984 "parser.y" /* yacc.c:1646  */
    {
	if (cb_no_echo_means_secure) {
		check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
		set_dispattr (COB_SCREEN_SECURE);
	} else {
		check_repeated ("NO-ECHO", SYN_CLAUSE_15, &check_duplicate);
		set_dispattr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					    "SECURE", COB_SCREEN_SECURE);
	}
  }
#line 12482 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6995 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
#line 12491 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 7000 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 12500 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 7005 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_dispattr (COB_SCREEN_PROMPT);
  }
#line 12509 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 7010 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REQUIRED", SYN_CLAUSE_18, &check_duplicate);
	set_dispattr (COB_SCREEN_REQUIRED);
  }
#line 12518 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 7015 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_19, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
#line 12527 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 7020 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
	set_dispattr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				    "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
#line 12537 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 7026 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12546 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 7031 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12555 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 7036 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_22, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
#line 12564 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 7041 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NO UPDATE", SYN_CLAUSE_23, &check_duplicate);
	set_dispattr_with_conflict ("NO UPDATE", COB_SCREEN_NO_UPDATE,
				    "UPDATE", COB_SCREEN_UPDATE);
  }
#line 12574 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 7047 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPDATE", SYN_CLAUSE_24, &check_duplicate);
	set_dispattr_with_conflict ("UPDATE", COB_SCREEN_UPDATE,
				    "NO UPDATE", COB_SCREEN_NO_UPDATE);
  }
#line 12584 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 7053 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPPER", SYN_CLAUSE_25, &check_duplicate);
	set_dispattr_with_conflict ("UPPER", COB_SCREEN_UPPER,
				    "LOWER", COB_SCREEN_LOWER);
  }
#line 12594 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 7059 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_26, &check_duplicate);
	set_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12603 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 7064 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_27, &check_duplicate);
	set_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12612 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 7069 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_28, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
#line 12623 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 7076 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
#line 12634 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 7083 "parser.y" /* yacc.c:1646  */
    {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12644 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 7109 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12652 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 7113 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ACCEPT);
# if 0 /* activate only for debugging purposes for attribs */
	if (current_statement->attr_ptr) {
		print_bits (current_statement->attr_ptr->dispattrs);
	} else {
		fprintf(stderr, "No Attribs\n");
	}
#endif
  }
#line 12667 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 7130 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12675 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 7139 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12683 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 7143 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12691 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 7147 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12699 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 7154 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12707 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 7161 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12715 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 7165 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12723 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 7175 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12732 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 7184 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12740 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 7188 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12753 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 7199 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12759 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 7200 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12765 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 7208 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
#line 12774 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7222 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12782 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7234 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
  }
#line 12793 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7246 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 12801 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7252 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	call_conv_bit;

	if (current_program->prog_type == CB_PROGRAM_TYPE
	    && !current_program->flag_recursive
	    && is_recursive_call ((yyvsp[-4]))) {
		cb_warning_x ((yyvsp[-4]), _("recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		if ((yyvsp[-5]) && CB_INTEGER_P ((yyvsp[-5]))) {
			call_conv_bit = cb_int ((CB_INTEGER ((yyvsp[-5]))->val)
						| CB_CONV_NO_RET_UPD);
		} else {
			call_conv_bit = cb_int (CB_CONV_NO_RET_UPD);
		}
	} else {
		call_conv_bit = (yyvsp[-5]);
	}
	cb_emit_call ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]), CB_PAIR_X ((yyvsp[0])), CB_PAIR_Y ((yyvsp[0])),
		      call_conv_bit);
  }
#line 12829 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 7279 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12838 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 7284 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12847 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 7289 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12856 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 7294 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[0]), _("invalid mnemonic name"));
			(yyval) = NULL;
		} else {
			(yyval) = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		(yyval) = NULL;
	}
	cobc_cs_check = 0;
  }
#line 12877 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7315 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 12885 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12893 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7326 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12902 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 7331 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > MAX_CALL_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    MAX_CALL_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12915 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7342 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12921 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 7344 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12927 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 7349 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12939 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7357 "parser.y" /* yacc.c:1646  */
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[0])) || (CB_REFERENCE_P ((yyvsp[0])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[0]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("invalid file name reference"));
		} else if (call_mode == CB_CALL_BY_VALUE) {
			if (cb_category_is_alpha ((yyvsp[0]))) {
				cb_warning_x ((yyvsp[0]),
					      _("BY CONTENT assumed for alphanumeric item"));
				save_mode = CB_CALL_BY_CONTENT;
			}
		}
	}
	(yyval) = CB_BUILD_PAIR (cb_int (save_mode), (yyvsp[0]));
	CB_SIZES ((yyval)) = size_mode;
	call_mode = save_mode;
  }
#line 12965 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7383 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12973 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7387 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12986 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7396 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12999 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 7408 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13007 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7412 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13015 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7416 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 13023 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 7420 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 13032 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 7425 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[0]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item must be a LINKAGE SECTION item or have BASED clause"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[0]));
		}
	} else {
		(yyval) = NULL;
	}
  }
#line 13056 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7458 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
#line 13064 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7462 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13072 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7466 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 13084 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7477 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13092 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7481 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13100 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7488 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13108 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 7492 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[0]);
  }
#line 13117 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13125 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7504 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13133 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7511 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13141 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7518 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 13149 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7522 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 13157 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7532 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
#line 13166 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7537 "parser.y" /* yacc.c:1646  */
    {
	cobc_allow_program_name = 0;
  }
#line 13174 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 7544 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 13182 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 7548 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 13190 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7556 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 13198 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7565 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 13206 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7573 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13215 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7578 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13224 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 13230 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7586 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 13236 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7587 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 13242 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7588 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 13248 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7589 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 13254 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7597 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 13262 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7606 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 13270 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7613 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 13278 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7617 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 13286 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7627 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 13295 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7638 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 13310 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7655 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 13318 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7664 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-3]));
  }
#line 13326 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7672 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13335 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7677 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 13344 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7685 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 13352 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7689 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 13360 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7699 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
#line 13371 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7711 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 13379 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7715 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 13387 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 7719 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 13395 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7723 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 13403 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7731 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != NULL) {
		error_if_different_display_type ((yyvsp[0]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
#line 13415 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7739 "parser.y" /* yacc.c:1646  */
    {
	set_display_type ((yyvsp[0]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[0]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
#line 13425 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7753 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 13437 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7761 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) == cb_null) {
		/* Emit DISPLAY OMITTED. */
		error_if_no_advancing_in_screen_display (advancing_value);
		cb_emit_display_omitted (line_column,
					 current_statement->attr_ptr);
	} else {
		/* Emit device or screen DISPLAY. */

		/*
		  Check that disp_list does not contain an invalid mix of fields.
		*/
		if (display_type == UNKNOWN_DISPLAY) {
			set_display_type ((yyvsp[-2]), upon_value, line_column,
					  current_statement->attr_ptr);
		} else {
		        error_if_different_display_type ((yyvsp[-2]), upon_value,
							 line_column,
							 current_statement->attr_ptr);
		}

		if (display_type == SCREEN_DISPLAY
		    || display_type == FIELD_ON_SCREEN_DISPLAY) {
			error_if_no_advancing_in_screen_display (advancing_value);
		}

		cb_emit_display ((yyvsp[-2]), upon_value, advancing_value, line_column,
				 current_statement->attr_ptr,
				 is_first_display_item, display_type);
	}

	is_first_display_item = 0;
  }
#line 13475 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7798 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13483 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7802 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 13492 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7815 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 13500 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7819 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 13509 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7824 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 13517 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7833 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 13525 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7837 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 13533 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7841 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 13541 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7845 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_null;
  }
#line 13549 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7857 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BELL", SYN_CLAUSE_4, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
#line 13558 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7862 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK LINE", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				    "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 13568 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7868 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK SCREEN", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				    "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 13578 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7874 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLINK", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
#line 13587 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7879 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONVERSION", SYN_CLAUSE_8, &check_duplicate);
	cb_warning (_("ignoring CONVERSION"));
  }
#line 13596 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7884 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ERASE EOL", SYN_CLAUSE_9, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				    "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 13606 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7890 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ERASE EOS", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				    "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 13616 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7896 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 13626 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7902 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 13636 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7908 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OVERLINE", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
#line 13645 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7913 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
#line 13654 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7918 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIZE", SYN_CLAUSE_15, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 13663 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7923 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UNDERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
#line 13672 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7928 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_17, &check_duplicate);
	set_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 13681 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7933 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_18, &check_duplicate);
	set_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 13690 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7938 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL UP", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
#line 13701 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7945 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_20, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
#line 13712 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7955 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 13720 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7959 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 13728 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7969 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 13736 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7978 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 13744 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7982 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 13752 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7986 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 13760 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7990 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13768 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7994 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 13776 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 8001 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 13784 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 8005 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 13792 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 8015 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 13801 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 8024 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[-1]))->data), ENTRY_NAME)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[-1]))->data), 1, (yyvsp[0]));
		}
	}
  }
#line 13817 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 8042 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EVALUATE", TERM_EVALUATE);
	eval_level++;
	if (eval_level >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_level = 0;
		eval_inc = 0;
		eval_inc2 = 0;
		YYERROR;
	} else {
		for (eval_inc = 0; eval_inc < EVAL_DEPTH; ++eval_inc) {
			eval_check[eval_level][eval_inc] = NULL;
		}
		eval_inc = 0;
		eval_inc2 = 0;
	}
  }
#line 13840 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 8066 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13849 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 8073 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13855 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 8075 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13861 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 8080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	eval_check[eval_level][eval_inc++] = (yyvsp[0]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 13876 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 8091 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 13891 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 8102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_false;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 13906 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 8116 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13914 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 8120 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13922 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 8126 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13928 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 8128 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13934 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8134 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13943 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 8143 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13952 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8151 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13961 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8157 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13970 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 8164 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13976 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8166 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13982 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8171 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	not0;
	cb_tree	e1;
	cb_tree	e2;
	cb_tree	x;
	cb_tree	parm1;

	not0 = cb_int0;
	e2 = (yyvsp[0]);
	x = NULL;
	parm1 = (yyvsp[-1]);
	if (eval_check[eval_level][eval_inc2]) {
		/* Check if the first token is NOT */
		/* It may belong to the EVALUATE, however see */
		/* below when it may be part of a partial expression */
		if (CB_PURPOSE_INT (parm1) == '!') {
			/* Pop stack if subject not TRUE / FALSE */
			not0 = cb_int1;
			x = parm1;
			parm1 = CB_CHAIN (parm1);
		}
		/* Partial expression handling */
		switch (CB_PURPOSE_INT (parm1)) {
		/* Relational conditions */
		case '<':
		case '>':
		case '[':
		case ']':
		case '~':
		case '=':
		/* Class conditions */
		case '9':
		case 'A':
		case 'L':
		case 'U':
		case 'P':
		case 'N':
		case 'O':
		case 'C':
			if (e2) {
				cb_error_x (e2, _("invalid THROUGH usage"));
				e2 = NULL;
			}
			not0 = CB_PURPOSE (parm1);
			if (x) {
				/* Rebind the NOT to the partial expression */
				parm1 = cb_build_list (cb_int ('!'), NULL, parm1);
			}
			/* Insert subject at head of list */
			parm1 = cb_build_list (cb_int ('x'),
					    eval_check[eval_level][eval_inc2], parm1);
			break;
		}
	}

	/* Build expr now */
	e1 = cb_build_expr (parm1);

	eval_inc2++;
	(yyval) = CB_BUILD_PAIR (not0, CB_BUILD_PAIR (e1, e2));
  }
#line 14048 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 8232 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 14054 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 8233 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 14060 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8234 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 14066 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 8238 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14072 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 8239 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14078 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8244 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 14086 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8248 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 14094 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8258 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 14103 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8263 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14111 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 8271 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_PROGRAM_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM not allowed within a FUNCTION"));
	}
	if (current_program->flag_main) {
		check_unreached = 0;
	} else {
		check_unreached = 1;
	}
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
#line 14136 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8292 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_FUNCTION_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION only allowed within a FUNCTION"));
	}
	check_unreached = 1;
	current_statement->name = (const char *)"EXIT FUNCTION";
	cb_emit_exit (0);
  }
#line 14154 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 8306 "parser.y" /* yacc.c:1646  */
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->cycle_label) {
			sprintf (name, "EXIT PERFORM CYCLE %d", cb_id);
			p->cycle_label = cb_build_reference (name);
			plabel = cb_build_label (p->cycle_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM CYCLE";
		cb_emit_goto (CB_LIST_INIT (p->cycle_label), NULL);
	}
  }
#line 14180 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8328 "parser.y" /* yacc.c:1646  */
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->exit_label) {
			sprintf (name, "EXIT PERFORM %d", cb_id);
			p->exit_label = cb_build_reference (name);
			plabel = cb_build_label (p->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM";
		cb_emit_goto (CB_LIST_INIT (p->exit_label), NULL);
	}
  }
#line 14206 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8350 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_section) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT SECTION is only valid with an active SECTION"));
	} else {
		if (!current_section->exit_label) {
			sprintf (name, "EXIT SECTION %d", cb_id);
			current_section->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_section->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT SECTION";
		cb_emit_goto (CB_LIST_INIT (current_section->exit_label), NULL);
	}
  }
#line 14230 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8370 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_paragraph) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PARAGRAPH is only valid with an active PARAGRAPH"));
	} else {
		if (!current_paragraph->exit_label) {
			sprintf (name, "EXIT PARAGRAPH %d", cb_id);
			current_paragraph->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_paragraph->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PARAGRAPH";
		cb_emit_goto (CB_LIST_INIT (current_paragraph->exit_label), NULL);
	}
  }
#line 14254 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 8392 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14260 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 8393 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14266 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 8401 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 14275 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8410 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 14283 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8420 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
#line 14292 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8436 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14305 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 8449 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 14314 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 8457 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 14323 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 8462 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 14332 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8473 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 14345 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8488 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 14353 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8497 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14361 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8501 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 14369 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8505 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 14377 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 8512 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 14385 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8516 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 14393 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8526 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 14401 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8535 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14409 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8541 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14415 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8542 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14421 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 8546 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14427 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 8547 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 14433 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 8548 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 14439 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 8553 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14447 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 8557 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14455 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 8564 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14463 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8569 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14471 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 8576 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 14479 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 8582 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 14485 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8583 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 14491 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8584 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 14497 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 14503 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8586 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 14509 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8587 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 14515 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8588 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 14521 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8593 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14529 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8597 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 14537 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8606 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
#line 14546 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8615 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14556 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8621 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 14566 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8632 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 14575 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8660 "parser.y" /* yacc.c:1646  */
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 14584 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8665 "parser.y" /* yacc.c:1646  */
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), TALLYING_CLAUSE);
	}

	(yyval) = (yyvsp[-3]);
  }
#line 14599 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8681 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), REPLACING_CLAUSE);
	inspect_keyword = 0;
  }
#line 14608 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8691 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, CONVERTING_CLAUSE);
  }
#line 14618 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8700 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14626 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8704 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14634 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8711 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[-1]));
  }
#line 14643 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8716 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[0]));
  }
#line 14652 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8721 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
#line 14661 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8726 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
#line 14670 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8731 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
#line 14679 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8736 "parser.y" /* yacc.c:1646  */
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14688 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8743 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14694 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8744 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 14700 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 14709 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8754 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14717 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8761 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 14723 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8762 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 14729 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8763 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 14735 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8764 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 14741 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8769 "parser.y" /* yacc.c:1646  */
    {
	switch (inspect_keyword) {
		case 1:
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 2:
			(yyval) = cb_build_replacing_leading ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 3:
			(yyval) = cb_build_replacing_first ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 4:
			(yyval) = cb_build_replacing_trailing ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		default:
			cb_error_x (CB_TREE (current_statement),
				    _("INSPECT missing ALL/FIRST/LEADING/TRAILING"));
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
	}
  }
#line 14767 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8796 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 14775 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8800 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14783 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8804 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[0]));
  }
#line 14791 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8808 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14799 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[-1])), (yyvsp[0]));
  }
#line 14807 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8819 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0]));
  }
#line 14815 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8826 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0]));
  }
#line 14823 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8835 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14832 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8847 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14840 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8855 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14848 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8859 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14856 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8869 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14864 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8878 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14872 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8882 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14880 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8889 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14888 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8893 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14896 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8903 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14904 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8916 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-3]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
	}
	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-3]);
	}

	for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[-4]), x);
		}
	}
  }
#line 14930 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8940 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14936 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8941 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14942 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8942 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14948 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8943 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14954 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8947 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14960 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8948 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14966 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8952 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14972 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8953 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14978 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8954 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14984 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8956 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14993 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8967 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
#line 15005 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8979 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 15015 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8985 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 15026 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8992 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15035 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8997 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 15045 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 9006 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 15057 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 9014 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 15065 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 9021 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 15073 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 9025 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 15087 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 9038 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 15098 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 9045 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15110 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 9056 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 15118 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 9060 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 15127 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 9065 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 15135 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 9069 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 15150 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 9080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15158 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 9086 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15164 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 9087 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15170 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 9091 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15176 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 9092 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15182 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 9095 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15188 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 9097 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15194 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 9102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15202 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 9112 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 15210 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 9121 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;

	if (CB_VALID_TREE ((yyvsp[-6]))) {
		struct cb_file	*cf;

		cf = CB_FILE(cb_ref ((yyvsp[-6])));
		if ((yyvsp[-2]) && (cf->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error_x (CB_TREE (current_statement),
				    _("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if ((yyvsp[-1]) &&
		      (cf->organization != COB_ORG_RELATIVE &&
		       cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("KEY clause invalid with this file type"));
		} else if (current_statement->handler_type == INVALID_KEY_HANDLER &&
			   (cf->organization != COB_ORG_RELATIVE &&
			    cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read ((yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[-2]));
		}
	}
  }
#line 15240 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 9149 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15246 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 9150 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15252 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 9155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15260 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 9159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 15268 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 9163 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15276 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 9167 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15284 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 9179 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("ADVANCING ON LOCK");
  }
#line 15292 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 9192 "parser.y" /* yacc.c:1646  */
    {
	CB_PENDING ("RETRY");
	cobc_cs_check = 0;
  }
#line 15301 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 9213 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15309 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 9217 "parser.y" /* yacc.c:1646  */
    {
	/* TO-DO: Merge with RETRY phrase */
	(yyval) = cb_int4;
  }
#line 15318 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 9224 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15324 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 9225 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15330 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 9235 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 15338 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 9239 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 15346 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 9249 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 15355 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 9259 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 15363 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 9267 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15371 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 9277 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 15380 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 9287 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 15388 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9296 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15396 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9303 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 15404 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9307 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 15412 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9317 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15423 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 9329 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 15432 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 9337 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15440 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9345 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 15448 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 9349 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 15456 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 9356 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 15464 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 9360 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 15472 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 9370 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 15481 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9381 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 15489 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 9390 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15497 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9395 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15506 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9402 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15512 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 9403 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15518 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 9408 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15526 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 9413 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15534 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 9420 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 15542 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 9424 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 15550 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9432 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15558 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9439 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 15566 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9443 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 15574 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9453 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 15585 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 9460 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 15593 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9476 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15599 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9477 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15605 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9481 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 15611 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9482 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 15617 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9489 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15625 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9498 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), set_attr_val_on, set_attr_val_off);
  }
#line 15633 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9510 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 15641 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9514 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 15649 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9518 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 15659 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9524 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 15669 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9530 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 15677 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9534 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 15685 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9538 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 15693 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9542 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 15701 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9551 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 15709 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9555 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15717 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9564 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 15725 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9578 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15733 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9592 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 15741 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9596 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 15749 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9605 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 15757 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9614 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 15765 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9622 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[-3]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[-2]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("file sort requires KEY phrase"));
			} else {
				/* FIXME: use key definition from OCCURS */
				cb_error (_("%s is not implemented"), _("table SORT without keys"));
			}
			(yyval) = NULL;
		} else {
			cb_emit_sort_init ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
			(yyval)= (yyvsp[-3]);
		}
	} else {
		(yyval) = NULL;
	}
  }
#line 15791 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9644 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 15801 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9653 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15809 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9658 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree lparm;

	if ((yyvsp[0]) == NULL) {
		l = CB_LIST_INIT (NULL);
	} else {
		l = (yyvsp[0]);
	}
	lparm = l;
	for (; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[-2]);
	}
	(yyval) = cb_list_append ((yyvsp[-4]), lparm);
  }
#line 15829 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9676 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15835 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9677 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15841 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9682 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15850 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9689 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15856 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9690 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15862 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9695 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15872 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9701 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15886 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9711 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-4])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-4])))) {
			cb_error (_("INPUT PROCEDURE invalid with table SORT"));
		} else if (current_statement->flag_merge) {
			cb_error (_("INPUT PROCEDURE invalid with MERGE"));
		} else {
			cb_emit_sort_input ((yyvsp[0]));
		}
	}
  }
#line 15902 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9726 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15912 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9732 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15926 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9742 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15940 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9758 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15949 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9768 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15962 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9780 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15970 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9784 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15978 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9791 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15986 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9795 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15995 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9800 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 16004 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9805 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 16013 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9812 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 16019 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9813 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 16025 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9814 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 16031 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9815 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 16037 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 9816 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 16043 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9817 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 16049 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9822 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
#line 16058 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9835 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 16066 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9839 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 16074 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9849 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 16082 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9853 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 16092 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9859 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 16105 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9871 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 16113 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16121 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9879 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16129 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9883 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 16141 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9891 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 16153 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9902 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16161 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16169 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9912 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16175 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9913 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16181 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9914 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16187 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9915 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16193 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9922 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
#line 16202 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9932 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string (save_tree, (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16210 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9944 "parser.y" /* yacc.c:1646  */
    {
    if (!save_tree) {
		save_tree = CB_LIST_INIT ((yyvsp[-1]));
	} else {
		save_tree = cb_list_add (save_tree, (yyvsp[-1]));
	}
	if ((yyvsp[0])) {
		save_tree = cb_list_add (save_tree, (yyvsp[0]));
	}
  }
#line 16225 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9958 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16231 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9960 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16237 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9964 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 16243 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9965 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 16249 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9969 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16255 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9970 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16261 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9975 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 16269 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9979 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 16277 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9989 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 16285 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9998 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 16293 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 10002 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 16301 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 10006 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 16309 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 10013 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 16317 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 10017 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 16325 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 10027 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
#line 16338 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 10045 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
#line 16347 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 10054 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16357 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 10060 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 16367 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 10071 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 16375 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 10079 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, TRANSFORM_STATEMENT);
  }
#line 16386 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 10092 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 16394 "parser.c" /* yacc.c:1646  */
    break;

  case 1397:
#line 10100 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-1]))) {
		if (CB_FILE (cb_ref ((yyvsp[-1])))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock ((yyvsp[-1]));
		}
	}
  }
#line 16409 "parser.c" /* yacc.c:1646  */
    break;

  case 1398:
#line 10116 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 16417 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 10126 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 16425 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 10132 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16431 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 10134 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16437 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 10138 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16443 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 10140 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 16449 "parser.c" /* yacc.c:1646  */
    break;

  case 1405:
#line 10145 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16457 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 10151 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16463 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 10153 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16469 "parser.c" /* yacc.c:1646  */
    break;

  case 1408:
#line 10158 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 16477 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 10164 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16483 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 10165 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16489 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 10169 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16495 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 10170 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16501 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 10174 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16507 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 10175 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16513 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 10180 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 16521 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 10184 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 16529 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 10194 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 16538 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 10212 "parser.y" /* yacc.c:1646  */
    {
	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (!current_section) {
		cb_error (_("SECTION header missing before USE statement"));
	} else {
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 1;
		current_section->flag_skip_label = 0;
		CB_EXCEPTION_ENABLE (COB_EC_I_O) = 1;
		if (use_global_ind) {
			current_section->flag_global = 1;
			current_program->global_list =
				cb_list_add (current_program->global_list,
					     CB_TREE (current_section));
		}
		emit_statement (cb_build_comment ("USE AFTER ERROR"));
	}
  }
#line 16564 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 10237 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 16572 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 10241 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 16585 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 10253 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 16599 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 10263 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 16608 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 10268 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 16617 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 10273 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 16626 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10278 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 16635 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 10286 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		plabel;
	char		name[64];

	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (current_program->nested_level) {
		cb_error (_("USE DEBUGGING not supported in contained program"));
	} else {
		in_debugging = 1;
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 0;
		current_section->flag_is_debug_sect = 1;
		if (!needs_debug_item) {
			needs_debug_item = 1;
			cb_build_debug_item ();
		}
		if (!current_program->flag_debugging) {
			skip_statements = 1;
			current_section->flag_skip_label = 1;
		} else {
			current_program->flag_gen_debug = 1;
			sprintf (name, "EXIT SECTION %d", cb_id);
			plabel = cb_build_reference (name);
			plabel = cb_build_label (plabel, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
			current_section->exit_label = plabel;
			emit_statement (cb_build_comment ("USE FOR DEBUGGING"));
		}
	}
  }
#line 16674 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 10329 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;
	cb_tree		x;
	cb_tree		z;

	if (current_program->flag_debugging) {
		CB_REFERENCE ((yyvsp[0]))->debug_section = current_section;
		CB_REFERENCE ((yyvsp[0]))->flag_debug_code = 1;
		CB_REFERENCE ((yyvsp[0]))->flag_all_debug = 0;
		z = CB_LIST_INIT ((yyvsp[0]));
		current_program->debug_list =
			cb_list_append (current_program->debug_list, z);
		/* Check backward refs to file/data names */
		/* Label refs will be checked later (forward/backward ref) */
		if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
			l = CB_VALUE(CB_WORD_ITEMS ((yyvsp[0])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				{
					x = cb_ref((yyvsp[0]));
					if(CB_INVALID_TREE(x)) {
						break;
					}
					needs_field_debug = 1;
					CB_FIELD(x)->debug_section = current_section;
					CB_FIELD(x)->flag_field_debug = 1;
					CB_PURPOSE(z) = x;
					break;
				}
			default:
				break;
			}
		}
	}
  }
#line 16718 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 10369 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 16732 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 10379 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[0]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("invalid target for DEBUGGING ALL"));
		} else {
			needs_field_debug = 1;
			CB_FIELD (x)->debug_section = current_section;
			CB_FIELD (x)->flag_field_debug = 1;
			CB_FIELD (x)->flag_all_debug = 1;
			CB_REFERENCE ((yyvsp[0]))->debug_section = current_section;
			CB_REFERENCE ((yyvsp[0]))->flag_debug_code = 1;
			CB_REFERENCE ((yyvsp[0]))->flag_all_debug = 1;
			CB_CHAIN_PAIR (current_program->debug_list, x, (yyvsp[0]));
		}
	}
  }
#line 16757 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 10409 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 16767 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 10418 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
#line 16777 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 10424 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
#line 16787 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10434 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
#line 16797 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10443 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16807 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 10459 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16818 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 10471 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-5]))) {
		cb_emit_write ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16829 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 10480 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16835 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 10481 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16841 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10486 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16849 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 10490 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16857 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 10494 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16865 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 10498 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16873 "parser.c" /* yacc.c:1646  */
    break;

  case 1458:
#line 10504 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16879 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 10505 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16885 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 10516 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16893 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 10520 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16901 "parser.c" /* yacc.c:1646  */
    break;

  case 1467:
#line 10534 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16912 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10544 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16920 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 10548 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16928 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 10555 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16937 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 10573 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16946 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 10589 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 16957 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10599 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 16965 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10603 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 16973 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10610 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 16982 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10623 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 16991 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 10635 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
#line 17002 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10645 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17010 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10649 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17018 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10656 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17027 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10669 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17036 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10681 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
#line 17047 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10691 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17055 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10695 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17063 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10702 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17072 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10715 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17081 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10727 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
#line 17089 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10736 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
#line 17099 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10745 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17107 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17115 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10756 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17124 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10769 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17133 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10780 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
#line 17144 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10790 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17152 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10794 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17160 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10801 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17169 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10814 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17178 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10830 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
#line 17189 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10840 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17197 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 17205 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10851 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[0]);
  }
#line 17214 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10864 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[0]);
  }
#line 17223 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10874 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 17231 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10878 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17239 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10888 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 17247 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10895 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 17255 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10901 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 17264 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 17272 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10918 "parser.y" /* yacc.c:1646  */
    { push_expr ('x', (yyvsp[0])); }
#line 17278 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10919 "parser.y" /* yacc.c:1646  */
    { push_expr ('C', (yyvsp[0])); }
#line 17284 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10921 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 17290 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10922 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 17296 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10924 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 17302 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10925 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 17308 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10926 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 17314 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10927 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 17320 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10928 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 17326 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10930 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 17332 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10931 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 17338 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10932 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 17344 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10933 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 17350 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10934 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 17356 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10935 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 17362 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10937 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 17368 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10938 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 17374 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10939 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 17380 "parser.c" /* yacc.c:1646  */
    break;

  case 1560:
#line 10941 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 17386 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10942 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 17392 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10943 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 17398 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10944 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 17404 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10945 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 17410 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10948 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 17416 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10949 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 17422 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10979 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17430 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10983 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17438 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10994 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 17444 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10995 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 17450 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10996 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17456 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 11000 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 17462 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 11001 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 17468 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 11002 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17474 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 11007 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 17482 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 11010 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17488 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 11014 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17494 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 11015 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 17500 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 11016 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17506 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 11019 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17512 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 11020 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17518 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 11031 "parser.y" /* yacc.c:1646  */
    {
	if (current_linage > 1) {
		cb_error (_("LINAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (current_linage == 0) {
		cb_error (_("invalid LINAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = linage_file->linage_ctr;
	}
  }
#line 17534 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 11043 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17547 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 11052 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1) {
		cb_error (_("LINE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("invalid LINE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->line_counter;
	}
  }
#line 17563 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 11064 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17576 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 11073 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1) {
		cb_error (_("PAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("invalid PAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->page_counter;
	}
  }
#line 17592 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 11085 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17605 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 11099 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17611 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 11101 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 17617 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 11106 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 17625 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 11114 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 17631 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 11121 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;

	x = cb_ref ((yyvsp[0]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[0]), _("'%s' not indexed"), cb_name ((yyvsp[0])));
		listprint_suppress ();
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		listprint_restore ();
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17652 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 11143 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17660 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 11147 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[0]))) {
		for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[0])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[0]), _("multiple reference to '%s' "),
					    CB_NAME ((yyvsp[0])));
				break;
			}
		}
		if (!l) {
			(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
		}
	}
  }
#line 17682 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 11168 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17695 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 11209 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 17708 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 11222 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17714 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 11224 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17720 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 11228 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17726 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 11234 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17732 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 11236 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17738 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 11241 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 17751 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 11255 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17759 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 11262 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 17769 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 11272 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 17775 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 11273 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 17781 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 11278 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17790 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 11286 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17799 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 11294 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17807 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 11298 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17815 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 11305 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 17825 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 11321 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17838 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 11330 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 17848 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 11341 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 17862 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 11358 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17870 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 11362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17878 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 11371 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17886 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 11377 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17892 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 11378 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17898 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 11383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17906 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 11387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17914 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 11407 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17922 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 11411 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17930 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 11415 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 17938 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 11419 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 17946 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 11423 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 17954 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 11427 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x ((yyvsp[0]), _("invalid mnemonic identifier"));
			(yyval) = cb_error_node;
		} else {
			switch_id = cb_int (CB_SYSTEM_NAME (x)->token);
			(yyval) = CB_BUILD_FUNCALL_1 ("cob_switch_value", switch_id);
		}
	} else {
		(yyval) = cb_error_node;
	}
  }
#line 17976 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 11448 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 17984 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 11452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 17992 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11469 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 18000 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11473 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 18008 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 11477 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 18016 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 11494 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 18024 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11501 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 18032 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11519 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18040 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11527 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18048 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11536 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18056 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11545 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18064 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11550 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 18072 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11557 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18080 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11565 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18088 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11573 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 18096 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11583 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 18102 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11587 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 18108 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11591 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 18114 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11592 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 18120 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11597 "parser.y" /* yacc.c:1646  */
    {
	error_if_not_usage_display_or_nonnumeric_lit ((yyvsp[0]));
  }
#line 18128 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11604 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) != cb_error_node
	    && cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error_x ((yyvsp[0]), _("'%s' is not numeric"), cb_name ((yyvsp[0])));
	}
  }
#line 18139 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11614 "parser.y" /* yacc.c:1646  */
    {
	int     reference_to_existing_object;

	if (CB_REFERENCE_P ((yyvsp[0])) && (CB_FIELD_P (cb_ref ((yyvsp[0])))
				    || CB_FILE_P (cb_ref ((yyvsp[0]))))) {
		(yyval) = cb_build_identifier ((yyvsp[0]), 0);
	} else {
	        reference_to_existing_object =
			CB_REFERENCE_P ((yyvsp[0])) && cb_ref ((yyvsp[0])) != cb_error_node;
		if (!CB_REFERENCE_P ((yyvsp[0])) || reference_to_existing_object) {
			cb_error_x ((yyvsp[0]), _("'%s' is not a field or file"), cb_name ((yyvsp[0])));
		}
		(yyval) = cb_error_node;
	}
  }
#line 18159 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11633 "parser.y" /* yacc.c:1646  */
    {
	int     reference_to_existing_object;

	if (CB_REFERENCE_P ((yyvsp[0])) && CB_FIELD_P (cb_ref ((yyvsp[0])))) {
		(yyval) = cb_build_identifier ((yyvsp[0]), 0);
	} else {
	        reference_to_existing_object =
			CB_REFERENCE_P ((yyvsp[0])) && cb_ref ((yyvsp[0])) != cb_error_node;
		if (!CB_REFERENCE_P ((yyvsp[0])) || reference_to_existing_object) {
			cb_error_x ((yyvsp[0]), _("'%s' is not a field"), cb_name ((yyvsp[0])));
		}
		(yyval) = cb_error_node;
	}
  }
#line 18178 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11651 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 18189 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11658 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18200 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11665 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18211 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 18222 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11682 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 18230 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11689 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 18244 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11699 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18258 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11709 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 18272 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11719 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 18286 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11732 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18294 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11736 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 18303 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11744 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 18312 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11752 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 18320 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11756 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 18329 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11766 "parser.y" /* yacc.c:1646  */
    {
	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[0]))->sign < 0
	    || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("non-negative integer value expected"));
		(yyval) = cb_build_numeric_literal(-1, "1", 0);
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 18344 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11780 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 1 || n > 256) {
			cb_error (_("invalid symbolic integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 18368 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11803 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[0]))->sign
	    || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("unsigned positive integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 1) {
			cb_error (_("unsigned positive integer value expected"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 18391 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11825 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
			cb_error (_("integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[0]));
			if (n < 1 || n > 256) {
				cb_error (_("invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[0]);
  }
#line 18411 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11840 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18417 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11841 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18423 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11842 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18429 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11843 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18435 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11844 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18441 "parser.c" /* yacc.c:1646  */
    break;

  case 1724:
#line 11845 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18447 "parser.c" /* yacc.c:1646  */
    break;

  case 1725:
#line 11850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18455 "parser.c" /* yacc.c:1646  */
    break;

  case 1726:
#line 11854 "parser.y" /* yacc.c:1646  */
    {
	struct cb_literal	*l;

	if (CB_LITERAL_P ((yyvsp[0]))) {
		/* We must not alter the original definition */
		l = cobc_parse_malloc (sizeof(struct cb_literal));
		*l = *(CB_LITERAL((yyvsp[0])));
		l->all = 1;
		(yyval) = CB_TREE (l);
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 18473 "parser.c" /* yacc.c:1646  */
    break;

  case 1727:
#line 11871 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18481 "parser.c" /* yacc.c:1646  */
    break;

  case 1728:
#line 11875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 18489 "parser.c" /* yacc.c:1646  */
    break;

  case 1729:
#line 11881 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 18495 "parser.c" /* yacc.c:1646  */
    break;

  case 1730:
#line 11882 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 18501 "parser.c" /* yacc.c:1646  */
    break;

  case 1731:
#line 11883 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 18507 "parser.c" /* yacc.c:1646  */
    break;

  case 1732:
#line 11884 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 18513 "parser.c" /* yacc.c:1646  */
    break;

  case 1733:
#line 11885 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 18519 "parser.c" /* yacc.c:1646  */
    break;

  case 1734:
#line 11886 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 18525 "parser.c" /* yacc.c:1646  */
    break;

  case 1735:
#line 11887 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 18531 "parser.c" /* yacc.c:1646  */
    break;

  case 1736:
#line 11894 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 18539 "parser.c" /* yacc.c:1646  */
    break;

  case 1737:
#line 11898 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 18547 "parser.c" /* yacc.c:1646  */
    break;

  case 1738:
#line 11902 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18555 "parser.c" /* yacc.c:1646  */
    break;

  case 1739:
#line 11906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18563 "parser.c" /* yacc.c:1646  */
    break;

  case 1740:
#line 11910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 18571 "parser.c" /* yacc.c:1646  */
    break;

  case 1741:
#line 11914 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18579 "parser.c" /* yacc.c:1646  */
    break;

  case 1742:
#line 11918 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18587 "parser.c" /* yacc.c:1646  */
    break;

  case 1743:
#line 11922 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18595 "parser.c" /* yacc.c:1646  */
    break;

  case 1744:
#line 11926 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18603 "parser.c" /* yacc.c:1646  */
    break;

  case 1745:
#line 11930 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 18611 "parser.c" /* yacc.c:1646  */
    break;

  case 1746:
#line 11934 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 18619 "parser.c" /* yacc.c:1646  */
    break;

  case 1747:
#line 11938 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 18627 "parser.c" /* yacc.c:1646  */
    break;

  case 1757:
#line 11963 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18635 "parser.c" /* yacc.c:1646  */
    break;

  case 1758:
#line 11967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 18643 "parser.c" /* yacc.c:1646  */
    break;

  case 1759:
#line 11971 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 18651 "parser.c" /* yacc.c:1646  */
    break;

  case 1760:
#line 11978 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18659 "parser.c" /* yacc.c:1646  */
    break;

  case 1761:
#line 11982 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 18667 "parser.c" /* yacc.c:1646  */
    break;

  case 1762:
#line 11986 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18675 "parser.c" /* yacc.c:1646  */
    break;

  case 1763:
#line 11993 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 18686 "parser.c" /* yacc.c:1646  */
    break;

  case 1764:
#line 12000 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 18697 "parser.c" /* yacc.c:1646  */
    break;

  case 1765:
#line 12007 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 18708 "parser.c" /* yacc.c:1646  */
    break;

  case 1766:
#line 12017 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18719 "parser.c" /* yacc.c:1646  */
    break;

  case 1767:
#line 12024 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 18730 "parser.c" /* yacc.c:1646  */
    break;

  case 1768:
#line 12034 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 18741 "parser.c" /* yacc.c:1646  */
    break;

  case 1769:
#line 12041 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 18752 "parser.c" /* yacc.c:1646  */
    break;

  case 1770:
#line 12051 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18760 "parser.c" /* yacc.c:1646  */
    break;

  case 1771:
#line 12055 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18774 "parser.c" /* yacc.c:1646  */
    break;

  case 1772:
#line 12068 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 18782 "parser.c" /* yacc.c:1646  */
    break;

  case 1773:
#line 12072 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 18796 "parser.c" /* yacc.c:1646  */
    break;

  case 1774:
#line 12086 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 18804 "parser.c" /* yacc.c:1646  */
    break;

  case 1775:
#line 12094 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18810 "parser.c" /* yacc.c:1646  */
    break;

  case 1776:
#line 12095 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18816 "parser.c" /* yacc.c:1646  */
    break;

  case 1777:
#line 12099 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18822 "parser.c" /* yacc.c:1646  */
    break;

  case 1778:
#line 12100 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18828 "parser.c" /* yacc.c:1646  */
    break;

  case 1779:
#line 12104 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18834 "parser.c" /* yacc.c:1646  */
    break;

  case 1780:
#line 12105 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18840 "parser.c" /* yacc.c:1646  */
    break;

  case 1781:
#line 12110 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18848 "parser.c" /* yacc.c:1646  */
    break;

  case 1782:
#line 12114 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18856 "parser.c" /* yacc.c:1646  */
    break;

  case 1783:
#line 12121 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 18864 "parser.c" /* yacc.c:1646  */
    break;

  case 1784:
#line 12125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 18872 "parser.c" /* yacc.c:1646  */
    break;

  case 1785:
#line 12132 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18878 "parser.c" /* yacc.c:1646  */
    break;

  case 1786:
#line 12133 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18884 "parser.c" /* yacc.c:1646  */
    break;

  case 1787:
#line 12134 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 18890 "parser.c" /* yacc.c:1646  */
    break;

  case 1788:
#line 12138 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 18896 "parser.c" /* yacc.c:1646  */
    break;

  case 1789:
#line 12139 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 18902 "parser.c" /* yacc.c:1646  */
    break;

  case 1790:
#line 12143 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 18908 "parser.c" /* yacc.c:1646  */
    break;

  case 1791:
#line 12144 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 18914 "parser.c" /* yacc.c:1646  */
    break;

  case 1792:
#line 12145 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 18920 "parser.c" /* yacc.c:1646  */
    break;

  case 1793:
#line 12150 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 18928 "parser.c" /* yacc.c:1646  */
    break;

  case 1794:
#line 12154 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 18941 "parser.c" /* yacc.c:1646  */
    break;

  case 1795:
#line 12166 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 18950 "parser.c" /* yacc.c:1646  */
    break;

  case 1796:
#line 12171 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 18959 "parser.c" /* yacc.c:1646  */
    break;

  case 1797:
#line 12179 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 18967 "parser.c" /* yacc.c:1646  */
    break;

  case 1798:
#line 12183 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 18975 "parser.c" /* yacc.c:1646  */
    break;

  case 1799:
#line 12187 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 18983 "parser.c" /* yacc.c:1646  */
    break;

  case 1800:
#line 12191 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 18991 "parser.c" /* yacc.c:1646  */
    break;

  case 1801:
#line 12195 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 18999 "parser.c" /* yacc.c:1646  */
    break;

  case 1802:
#line 12199 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 19007 "parser.c" /* yacc.c:1646  */
    break;

  case 1803:
#line 12203 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 19015 "parser.c" /* yacc.c:1646  */
    break;

  case 1804:
#line 12207 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 19023 "parser.c" /* yacc.c:1646  */
    break;

  case 1805:
#line 12213 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 19029 "parser.c" /* yacc.c:1646  */
    break;

  case 1806:
#line 12214 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 19035 "parser.c" /* yacc.c:1646  */
    break;

  case 1807:
#line 12221 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 19043 "parser.c" /* yacc.c:1646  */
    break;

  case 1808:
#line 12225 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 1;
  }
#line 19051 "parser.c" /* yacc.c:1646  */
    break;

  case 1809:
#line 12229 "parser.y" /* yacc.c:1646  */
    {
	cobc_repeat_last_token = 0;
  }
#line 19059 "parser.c" /* yacc.c:1646  */
    break;


#line 19063 "parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 12405 "parser.y" /* yacc.c:1906  */

