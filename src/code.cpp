#include "tabulate_types.h"

// [[Rcpp::export]]
table_t tabulate_table () {
  return tabulate::Table();
}

// [[Rcpp::export]]
void table_add_row (table_t table, row_t row) {
  table->add_row(row.row_);
}

// [[Rcpp::export]]
column_ptr table_column (table_t table, size_t index) {
  return column_ptr(new tabulate::Column(table->column(index)));
}

// [[Rcpp::export]]
column_format_ptr column_format (column_ptr column) {
  return column_format_ptr(new tabulate::ColumnFormat(column->format()));
}

// [[Rcpp::export]]
void column_format_font_align (column_format_ptr column, font_align_t font_align) {
  column->font_align(font_align.font_align_);
}

// [[Rcpp::export]]
void column_format_font_color (column_format_ptr column, color_t color) {
  column->font_color(color.color_);
}

// [[Rcpp::export]]
std::string tabulate_format (table_t table, bool colors = true) {
  std::stringstream stream;
  stream.iword(termcolor::_internal::colorize_index) = colors;
  stream << *table << std::endl;
  return stream.str();
}


