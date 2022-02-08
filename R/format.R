#' Formatting of tables, columns, rows and cells
#'
#' Allows changing display characteristics of tables, columns, rows and cells.
#'
#' @param x A table, column, row or cell.
#' @param value The value assumed by the selected parameter.
#'
#' @examples
#' table <- tabulate_table()
#' table %>%
#'   table_add_row("hello") %>%
#'   table_add_row("world")
#'
#' table %>%
#'   format_hide_border_bottom() %>%
#'   format_width(50)
#'
#' table
#'
#' @returns
#' The same as the input invisibly.
#'
#' @name formatting
#' @rdname formatting
NULL


fmt <- function(x, ...) {
  UseMethod("fmt", x)
}

fmt.default <- function(x, ...) {
  rlang::abort("Unsupported tabulate type.")
}

fmt.tabulate_row <- function(x, ...) {
  row_format(x)
}

fmt.tabulate_column <- function(x, ...) {
  column_format(x)
}

fmt.tabulate_table <- function(x, ...) {
  table_format(x)
}

fmt.tabulate_cell <- function(x, ...) {
  cell_format(x)
}

is_column <- function(x) {
  inherits(x, "tabulate_column")
}

#' @rdname formatting
#' @export
format_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border <- function(x, value) {
  if (is_column(x)) {
    column_format_border(fmt(x), value)
    return(invisible(x))
  }
  c_format_border(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_bottom <- function(x, value) {
  if (is_column(x)) {
    column_format_border_bottom(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_bottom(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_bottom_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_bottom_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_bottom_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_bottom_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_bottom_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_bottom_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_left <- function(x, value) {
  if (is_column(x)) {
    column_format_border_left(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_left(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_left_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_left_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_left_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_left_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_left_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_left_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_right <- function(x, value) {
  if (is_column(x)) {
    column_format_border_right(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_right(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_right_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_right_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_right_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_right_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_right_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_right_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_top <- function(x, value) {
  if (is_column(x)) {
    column_format_border_top(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_top(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_top_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_top_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_top_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_border_top_color <- function(x, value) {
  if (is_column(x)) {
    column_format_border_top_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_border_top_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_color <- function(x, value) {
  if (is_column(x)) {
    column_format_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_column_separator <- function(x, value) {
  if (is_column(x)) {
    column_format_column_separator(fmt(x), value)
    return(invisible(x))
  }
  c_format_column_separator(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_column_separator_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_column_separator_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_column_separator_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_column_separator_color <- function(x, value) {
  if (is_column(x)) {
    column_format_column_separator_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_column_separator_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner <- function(x, value) {
  if (is_column(x)) {
    column_format_corner(fmt(x), value)
    return(invisible(x))
  }
  c_format_corner(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_corner_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_corner_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_bottom_left <- function(x, value) {
  c_format_corner_bottom_left(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_bottom_left_background_color <- function(x, value) {
  c_format_corner_bottom_left_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_bottom_left_color <- function(x, value) {
  c_format_corner_bottom_left_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_bottom_right <- function(x, value) {
  c_format_corner_bottom_right(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_bottom_right_background_color <- function(x, value) {
  c_format_corner_bottom_right_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_bottom_right_color <- function(x, value) {
  c_format_corner_bottom_right_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_color <- function(x, value) {
  if (is_column(x)) {
    column_format_corner_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_corner_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_top_left <- function(x, value) {
  c_format_corner_top_left(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_top_left_background_color <- function(x, value) {
  c_format_corner_top_left_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_top_left_color <- function(x, value) {
  c_format_corner_top_left_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_top_right <- function(x, value) {
  c_format_corner_top_right(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_top_right_background_color <- function(x, value) {
  c_format_corner_top_right_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_corner_top_right_color <- function(x, value) {
  c_format_corner_top_right_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_font_align <- function(x, value) {
  if (is_column(x)) {
    column_format_font_align(fmt(x), value)
    return(invisible(x))
  }
  c_format_font_align(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_font_background_color <- function(x, value) {
  if (is_column(x)) {
    column_format_font_background_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_font_background_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_font_color <- function(x, value) {
  if (is_column(x)) {
    column_format_font_color(fmt(x), value)
    return(invisible(x))
  }
  c_format_font_color(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_font_style <- function(x, value) {
  if (is_column(x)) {
    column_format_font_style(fmt(x), value)
    return(invisible(x))
  }
  c_format_font_style(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_height <- function(x, value) {
  if (is_column(x)) {
    column_format_height(fmt(x), value)
    return(invisible(x))
  }
  c_format_height(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_hide_border <- function(x) {
  c_format_hide_border(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_hide_border_bottom <- function(x) {
  c_format_hide_border_bottom(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_hide_border_left <- function(x) {
  c_format_hide_border_left(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_hide_border_right <- function(x) {
  c_format_hide_border_right(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_hide_border_top <- function(x) {
  c_format_hide_border_top(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_locale <- function(x, value) {
  if (is_column(x)) {
    column_format_locale(fmt(x), value)
    return(invisible(x))
  }
  c_format_locale(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_multi_byte_characters <- function(x, value) {
  if (is_column(x)) {
    column_format_multi_byte_characters(fmt(x), value)
    return(invisible(x))
  }
  c_format_multi_byte_characters(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_padding <- function(x, value) {
  if (is_column(x)) {
    column_format_padding(fmt(x), value)
    return(invisible(x))
  }
  c_format_padding(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_padding_bottom <- function(x, value) {
  if (is_column(x)) {
    column_format_padding_bottom(fmt(x), value)
    return(invisible(x))
  }
  c_format_padding_bottom(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_padding_left <- function(x, value) {
  if (is_column(x)) {
    column_format_padding_left(fmt(x), value)
    return(invisible(x))
  }
  c_format_padding_left(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_padding_right <- function(x, value) {
  if (is_column(x)) {
    column_format_padding_right(fmt(x), value)
    return(invisible(x))
  }
  c_format_padding_right(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_padding_top <- function(x, value) {
  if (is_column(x)) {
    column_format_padding_top(fmt(x), value)
    return(invisible(x))
  }
  c_format_padding_top(fmt(x), value)
  invisible(x)
}

#' @rdname formatting
#' @export
format_show_border <- function(x) {
  c_format_show_border(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_show_border_bottom <- function(x) {
  c_format_show_border_bottom(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_show_border_left <- function(x) {
  c_format_show_border_left(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_show_border_right <- function(x) {
  c_format_show_border_right(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_show_border_top <- function(x) {
  c_format_show_border_top(fmt(x))
  invisible(x)
}

#' @rdname formatting
#' @export
format_width <- function(x, value) {
  if (is_column(x)) {
    column_format_width(fmt(x), value)
    return(invisible(x))
  }
  c_format_width(fmt(x), value)
  invisible(x)
}
