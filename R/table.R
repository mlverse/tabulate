
#' @export
print.tabulate_table <- function(x, ...) {
  cat(format(x, ...))
}

#' @export
format.tabulate_table <- function(x, ..., colors = TRUE) {
  if (!crayon::num_ansi_colors() >= 8) {
    colors <- FALSE
  }

  tabulate_format(x, colors = colors)
}
