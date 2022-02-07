#include "tabulate_types.h"

// [[Rcpp::export]]
column_format_t column_format (column_t column) {
  return column_format_t(column->format());
}

// [[Rcpp::export(invisible = true)]]
column_format_t column_format_width (column_format_t column, size_t value) {
  column->width(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_height (column_format_t column, size_t value) {
  column->height(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_padding (column_format_t column, size_t value) {
  column->padding(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_padding_left (column_format_t column, size_t value) {
  column->padding_left(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_padding_right (column_format_t column, size_t value) {
  column->padding_right(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_padding_top (column_format_t column, size_t value) {
  column->padding_top(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_padding_bottom (column_format_t column, size_t value) {
  column->padding_bottom(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border(column_format_t column, const std::string &value) {
  column->border(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_color(column_format_t column, color_t value) {
  column->border_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_background_color(column_format_t column, color_t value) {
  column->border_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_left(column_format_t column, const std::string value) {
  column->border_left(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_left_color(column_format_t column, color_t value) {
  column->border_left_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_left_background_color(column_format_t column, color_t value) {
  column->border_left_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_right(column_format_t column, const std::string value) {
  column->border_right(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_right_color(column_format_t column, color_t value) {
  column->border_right_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_right_background_color(column_format_t column, color_t value) {
  column->border_right_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_top(column_format_t column, const std::string value) {
  column->border_top(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_top_color(column_format_t column, color_t value) {
  column->border_top_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_top_background_color(column_format_t column, color_t value) {
  column->border_top_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_bottom(column_format_t column, const std::string value) {
  column->border_bottom(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_bottom_color(column_format_t column, color_t value) {
  column->border_bottom_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_border_bottom_background_color(column_format_t column, color_t value) {
  column->border_bottom_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_corner(column_format_t column, const std::string value) {
  column->corner(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_corner_color(column_format_t column, color_t value) {
  column->corner_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_corner_background_color(column_format_t column, color_t value) {
  column->corner_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_column_separator(column_format_t column, const std::string value) {
  column->column_separator(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_column_separator_color(column_format_t column, color_t value) {
  column->column_separator_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_column_separator_background_color(column_format_t column, color_t value) {
  column->column_separator_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_font_align(column_format_t column, font_align_t value) {
  column->font_align(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_font_style(column_format_t column, font_style_v value) {
  column->font_style(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_font_color(column_format_t column, color_t value) {
  column->font_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_font_background_color(column_format_t column, color_t value) {
  column->font_background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_color(column_format_t column, color_t value) {
  column->color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_background_color(column_format_t column, color_t value) {
  column->background_color(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_multi_byte_characters(column_format_t column, bool value) {
  column->multi_byte_characters(value);
  return column;
}

// [[Rcpp::export(invisible=true)]]
column_format_t column_format_locale(column_format_t column, const std::string value) {
  column->locale(value);
  return column;
}
