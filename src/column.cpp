#include "tabulate_types.h"

// [[Rcpp::export]]
column_format_t column_format (column_t column) {
  return tabulate::ColumnFormat(column->format());
}

// [[Rcpp::export]]
void column_format_width (column_format_t column, size_t value) {
  column->width(value);
}

// [[Rcpp::export]]
void column_format_height (column_format_t column, size_t value) {
  column->height(value);
}

// [[Rcpp::export]]
void column_format_padding (column_format_t column, size_t value) {
  column->padding(value);
}

// [[Rcpp::export]]
void column_format_padding_left (column_format_t column, size_t value) {
  column->padding_left(value);
}

// [[Rcpp::export]]
void column_format_padding_right (column_format_t column, size_t value) {
  column->padding_right(value);
}

// [[Rcpp::export]]
void column_format_padding_top (column_format_t column, size_t value) {
  column->padding_top(value);
}

// [[Rcpp::export]]
void column_format_padding_bottom (column_format_t column, size_t value) {
  column->padding_bottom(value);
}

// [[Rcpp::export]]
void column_format_border(column_format_t column, const std::string &value) {
  column->border(value);
}

// [[Rcpp::export]]
void column_format_border_color(column_format_t column, color_t value) {
  column->border_color(value);
}

// [[Rcpp::export]]
void column_format_border_background_color(column_format_t column, color_t value) {
  column->border_background_color(value);
}

// [[Rcpp::export]]
void column_format_border_left(column_format_t column, const std::string value) {
  column->border_left(value);
}

// [[Rcpp::export]]
void column_format_border_left_color(column_format_t column, color_t value) {
  column->border_left_color(value);
}

// [[Rcpp::export]]
void column_format_border_left_background_color(column_format_t column, color_t value) {
  column->border_left_background_color(value);
}

// [[Rcpp::export]]
void column_format_border_right(column_format_t column, const std::string value) {
  column->border_right(value);
}

// [[Rcpp::export]]
void column_format_border_right_color(column_format_t column, color_t value) {
  column->border_right_color(value);
}

// [[Rcpp::export]]
void column_format_border_right_background_color(column_format_t column, color_t value) {
  column->border_right_background_color(value);
}

// [[Rcpp::export]]
void column_format_border_top(column_format_t column, const std::string value) {
  column->border_top(value);
}

// [[Rcpp::export]]
void column_format_border_top_color(column_format_t column, color_t value) {
  column->border_top_color(value);
}

// [[Rcpp::export]]
void column_format_border_top_background_color(column_format_t column, color_t value) {
  column->border_top_background_color(value);
}

// [[Rcpp::export]]
void column_format_border_bottom(column_format_t column, const std::string value) {
  column->border_bottom(value);
}

// [[Rcpp::export]]
void column_format_border_bottom_color(column_format_t column, color_t value) {
  column->border_bottom_color(value);
}

// [[Rcpp::export]]
void column_format_border_bottom_background_color(column_format_t column, color_t value) {
  column->border_bottom_background_color(value);
}

// [[Rcpp::export]]
void column_format_corner(column_format_t column, const std::string value) {
  column->corner(value);
}

// [[Rcpp::export]]
void column_format_corner_color(column_format_t column, color_t value) {
  column->corner_color(value);
}

// [[Rcpp::export]]
void column_format_corner_background_color(column_format_t column, color_t value) {
  column->corner_background_color(value);
}

// [[Rcpp::export]]
void column_format_column_separator(column_format_t column, const std::string value) {
  column->column_separator(value);
}

// [[Rcpp::export]]
void column_format_column_separator_color(column_format_t column, color_t value) {
  column->column_separator_color(value);
}

// [[Rcpp::export]]
void column_format_column_separator_background_color(column_format_t column, color_t value) {
  column->column_separator_background_color(value);
}

// [[Rcpp::export]]
void column_format_font_align(column_format_t column, font_align_t value) {
  column->font_align(value);
}

// [[Rcpp::export]]
void column_format_font_style(column_format_t column, font_style_v value) {
  column->font_style(value);
}

// [[Rcpp::export]]
void column_format_font_color(column_format_t column, color_t value) {
  column->font_color(value);
}

// [[Rcpp::export]]
void column_format_font_background_color(column_format_t column, color_t value) {
  column->font_background_color(value);
}

// [[Rcpp::export]]
void column_format_color(column_format_t column, color_t value) {
  column->color(value);
}

// [[Rcpp::export]]
void column_format_background_color(column_format_t column, color_t value) {
  column->background_color(value);
}

// [[Rcpp::export]]
void column_format_multi_byte_characters(column_format_t column, bool value) {
  column->multi_byte_characters(value);
}

// [[Rcpp::export]]
void column_format_locale(column_format_t column, const std::string value) {
  column->locale(value);
}
