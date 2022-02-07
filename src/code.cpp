#include "tabulate_types.h"

// [[Rcpp::export]]
table_t tabulate_table () {
  return tabulate::Table();
}

// [[Rcpp::export(invisible=true)]]
table_t table_add_row (table_t table, table_row_t row) {
  table->add_row(row.row_);
  return table;
}

// [[Rcpp::export]]
column_t table_column (table_t table, index_t index) {
  return tabulate::Column(table->column(index));
}

// [[Rcpp::export]]
row_t table_row (table_t table, index_t index) {
  return tabulate::Row(table->row(index));
}

// [[Rcpp::export]]
format_t table_format (table_t table) {
  return table->format();
}

// [[Rcpp::export]]
std::string tabulate_format (table_t table, bool colors) {
  std::stringstream stream;
  stream.iword(termcolor::_internal::colorize_index) = colors;
  stream << *table << std::endl;
  return stream.str();
}


