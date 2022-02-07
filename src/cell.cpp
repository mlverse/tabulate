#include "tabulate_types.h"

// [[Rcpp::export]]
void cell_set_text (cell_t cell, std::string text) {
  cell->set_text(text);
}

// [[Rcpp::export]]
std::string cell_get_text (cell_t cell) {
  return cell->get_text();
}

// [[Rcpp::export]]
format_t cell_format (cell_t cell) {
  return cell->format();
}
