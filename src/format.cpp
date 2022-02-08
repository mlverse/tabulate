#include "tabulate_types.h"

// [[Rcpp::export(invisible=true)]]
format_t c_format_width(format_t format, size_t value) {
  format->width(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_height(format_t format, size_t value) {
  format->height(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_padding(format_t format, size_t value) {
  format->padding(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_padding_left(format_t format, size_t value) {
  format->padding_left(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_padding_right(format_t format, size_t value) {
  format->padding_right(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_padding_top(format_t format, size_t value) {
  format->padding_top(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_padding_bottom(format_t format, size_t value) {
  format->padding_bottom(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border(format_t format, const std::string value) {
  format->border(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_color(format_t format, color_t value) {
  format->border_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_background_color(format_t format, color_t value) {
  format->border_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_left(format_t format, const std::string value) {
  format->border_left(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_left_color(format_t format, color_t value) {
  format->border_left_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_left_background_color(format_t format, color_t value) {
  format->border_left_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_right(format_t format, const std::string value) {
  format->border_right(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_right_color(format_t format, color_t value) {
  format->border_right_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_right_background_color(format_t format, color_t value) {
  format->border_right_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_top(format_t format, const std::string value) {
  format->border_top(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_top_color(format_t format, color_t value) {
  format->border_top_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_top_background_color(format_t format, color_t value) {
  format->border_top_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_bottom(format_t format, const std::string value) {
  format->border_bottom(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_bottom_color(format_t format, color_t value) {
  format->border_bottom_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_border_bottom_background_color(format_t format, color_t value) {
  format->border_bottom_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_show_border(format_t format) {
  format->show_border();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_hide_border(format_t format) {
  format->hide_border();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_show_border_top(format_t format) {
  format->show_border_top();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_hide_border_top(format_t format) {
  format->hide_border_top();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_show_border_bottom(format_t format) {
  format->show_border_bottom();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_hide_border_bottom(format_t format) {
  format->hide_border_bottom();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_show_border_left(format_t format) {
  format->show_border_left();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_hide_border_left(format_t format) {
  format->hide_border_left();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_show_border_right(format_t format) {
  format->show_border_right();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_hide_border_right(format_t format)  {
  format->hide_border_right();
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner(format_t format, const std::string value) {
  format->corner(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_color(format_t format, color_t value) {
  format->corner_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_background_color(format_t format, color_t value) {
  format->corner_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_top_left(format_t format, const std::string value) {
  format->corner_top_left(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_top_left_color(format_t format, color_t value) {
  format->corner_top_left_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_top_left_background_color(format_t format, color_t value) {
  format->corner_top_left_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_top_right(format_t format, const std::string value) {
  format->corner_top_right(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_top_right_color(format_t format, color_t value) {
  format->corner_top_right_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_top_right_background_color(format_t format, color_t value) {
  format->corner_top_right_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_bottom_left(format_t format, const std::string value) {
  format->corner_bottom_left(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_bottom_left_color(format_t format, color_t value) {
  format->corner_bottom_left_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_bottom_left_background_color(format_t format, color_t value) {
  format->corner_bottom_left_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_bottom_right(format_t format, const std::string value) {
  format->corner_bottom_right(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_bottom_right_color(format_t format, color_t value) {
  format->corner_bottom_right_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_corner_bottom_right_background_color(format_t format, color_t value) {
  format->corner_bottom_right_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_column_separator(format_t format, const std::string value) {
  format->column_separator(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_column_separator_color(format_t format, color_t value) {
  format->column_separator_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_column_separator_background_color(format_t format, color_t value) {
  format->column_separator_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_font_align(format_t format, font_align_t value) {
  format->font_align(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_font_style(format_t format, font_style_v value) {
  format->font_style(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_font_color(format_t format, color_t value) {
  format->font_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_font_background_color(format_t format, color_t value) {
  format->font_background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_color(format_t format, color_t value) {
  format->color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_background_color(format_t format, color_t value) {
  format->background_color(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_multi_byte_characters(format_t format, bool value) {
  format->multi_byte_characters(value);
  return format;
}

// [[Rcpp::export(invisible=true)]]
format_t c_format_locale(format_t format, const std::string value) {
  format->locale(value);
  return format;
}
