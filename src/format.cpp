#include "tabulate_types.h"

// [[Rcpp::export]]
void format_width(format_t format, size_t value) {
  format->width(value);
}

// [[Rcpp::export]]
void format_height(format_t format, size_t value) {
  format->height(value);
}

// [[Rcpp::export]]
void format_padding(format_t format, size_t value) {
  format->padding(value);
}

// [[Rcpp::export]]
void format_padding_left(format_t format, size_t value) {
  format->padding_left(value);
}

// [[Rcpp::export]]
void format_padding_right(format_t format, size_t value) {
  format->padding_right(value);
}

// [[Rcpp::export]]
void format_padding_top(format_t format, size_t value) {
  format->padding_top(value);
}

// [[Rcpp::export]]
void format_padding_bottom(format_t format, size_t value) {
  format->padding_bottom(value);
}

// [[Rcpp::export]]
void format_border(format_t format, const std::string value) {
  format->border(value);
}

// [[Rcpp::export]]
void format_border_color(format_t format, color_t value) {
  format->border_color(value);
}

// [[Rcpp::export]]
void format_border_background_color(format_t format, color_t value) {
  format->border_background_color(value);
}

// [[Rcpp::export]]
void format_border_left(format_t format, const std::string value) {
  format->border_left(value);
}

// [[Rcpp::export]]
void format_border_left_color(format_t format, color_t value) {
  format->border_left_color(value);
}

// [[Rcpp::export]]
void format_border_left_background_color(format_t format, color_t value) {
  format->border_left_background_color(value);
}

// [[Rcpp::export]]
void format_border_right(format_t format, const std::string value) {
  format->border_right(value);
}

// [[Rcpp::export]]
void format_border_right_color(format_t format, color_t value) {
  format->border_right_color(value);
}

// [[Rcpp::export]]
void format_border_right_background_color(format_t format, color_t value) {
  format->border_right_background_color(value);
}

// [[Rcpp::export]]
void format_border_top(format_t format, const std::string value) {
  format->border_top(value);
}

// [[Rcpp::export]]
void format_border_top_color(format_t format, color_t value) {
  format->border_top_color(value);
}

// [[Rcpp::export]]
void format_border_top_background_color(format_t format, color_t value) {
  format->border_top_background_color(value);
}

// [[Rcpp::export]]
void format_border_bottom(format_t format, const std::string value) {
  format->border_bottom(value);
}

// [[Rcpp::export]]
void format_border_bottom_color(format_t format, color_t value) {
  format->border_bottom_color(value);
}

// [[Rcpp::export]]
void format_border_bottom_background_color(format_t format, color_t value) {
  format->border_bottom_background_color(value);
}

// [[Rcpp::export]]
void format_show_border(format_t format) {
  format->show_border();
}

// [[Rcpp::export]]
void format_hide_border(format_t format) {
  format->hide_border();
}

// [[Rcpp::export]]
void format_show_border_top(format_t format) {
  format->show_border_top();
}

// [[Rcpp::export]]
void format_hide_border_top(format_t format) {
  format->hide_border_top();
}

// [[Rcpp::export]]
void format_show_border_bottom(format_t format) {
  format->show_border_bottom();
}

// [[Rcpp::export]]
void format_hide_border_bottom(format_t format) {
  format->hide_border_bottom();
}

// [[Rcpp::export]]
void format_show_border_left(format_t format) {
  format->show_border_left();
}

// [[Rcpp::export]]
void format_hide_border_left(format_t format) {
  format->hide_border_left();
}

// [[Rcpp::export]]
void format_show_border_right(format_t format) {
  format->show_border_right();
}

// [[Rcpp::export]]
void format_hide_border_right(format_t format)  {
  format->hide_border_right();
}

// [[Rcpp::export]]
void format_corner(format_t format, const std::string value) {
  format->corner(value);
}

// [[Rcpp::export]]
void format_corner_color(format_t format, color_t value) {
  format->corner_color(value);
}

// [[Rcpp::export]]
void format_corner_background_color(format_t format, color_t value) {
  format->corner_background_color(value);
}

// [[Rcpp::export]]
void format_corner_top_left(format_t format, const std::string value) {
  format->corner_top_left(value);
}

// [[Rcpp::export]]
void format_corner_top_left_color(format_t format, color_t value) {
  format->corner_top_left_color(value);
}

// [[Rcpp::export]]
void format_corner_top_left_background_color(format_t format, color_t value) {
  format->corner_top_left_background_color(value);
}

// [[Rcpp::export]]
void format_corner_top_right(format_t format, const std::string value) {
  format->corner_top_right(value);
}

// [[Rcpp::export]]
void format_corner_top_right_color(format_t format, color_t value) {
  format->corner_top_right_color(value);
}

// [[Rcpp::export]]
void format_corner_top_right_background_color(format_t format, color_t value) {
  format->corner_top_right_background_color(value);
}

// [[Rcpp::export]]
void format_corner_bottom_left(format_t format, const std::string value) {
  format->corner_bottom_left(value);
}

// [[Rcpp::export]]
void format_corner_bottom_left_color(format_t format, color_t value) {
  format->corner_bottom_left_color(value);
}

// [[Rcpp::export]]
void format_corner_bottom_left_background_color(format_t format, color_t value) {
  format->corner_bottom_left_background_color(value);
}

// [[Rcpp::export]]
void format_corner_bottom_right(format_t format, const std::string value) {
  format->corner_bottom_right(value);
}

// [[Rcpp::export]]
void format_corner_bottom_right_color(format_t format, color_t value) {
  format->corner_bottom_right_color(value);
}

// [[Rcpp::export]]
void format_corner_bottom_right_background_color(format_t format, color_t value) {
  format->corner_bottom_right_background_color(value);
}

// [[Rcpp::export]]
void format_column_separator(format_t format, const std::string value) {
  format->column_separator(value);
}

// [[Rcpp::export]]
void format_column_separator_color(format_t format, color_t value) {
  format->column_separator_color(value);
}

// [[Rcpp::export]]
void format_column_separator_background_color(format_t format, color_t value) {
  format->column_separator_background_color(value);
}

// [[Rcpp::export]]
void format_font_align(format_t format, font_align_t value) {
  format->font_align(value);
}

// [[Rcpp::export]]
void format_font_style(format_t format, font_style_v value) {
  format->font_style(value);
}

// [[Rcpp::export]]
void format_font_color(format_t format, color_t value) {
  format->font_color(value);
}

// [[Rcpp::export]]
void format_font_background_color(format_t format, color_t value) {
  format->font_background_color(value);
}

// [[Rcpp::export]]
void format_color(format_t format, color_t value) {
  format->color(value);
}

// [[Rcpp::export]]
void format_background_color(format_t format, color_t value) {
  format->background_color(value);
}

// [[Rcpp::export]]
void format_multi_byte_characters(format_t format, bool value) {
  format->multi_byte_characters(value);
}

// [[Rcpp::export]]
void format_locale(format_t format, const std::string value) {
  format->locale(value);
}
