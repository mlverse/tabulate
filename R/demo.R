#' Generated demonstration tables
#'
#' Print two tables showing most of possible functionalities in tabulate.
#'
#' @returns
#' `NULL` invisibly.
#' @export
tabulate_demo <- function() {

  readme <- tabulate_table()
  readme %>%
    format_border_color("yellow")

  readme %>%
    table_add_row("tabulate for R")
  readme[1,] %>%
    format_font_align("center") %>%
    format_font_color("yellow")

  readme %>%
    table_add_row("https://github.com/mlverse/tabulate")
  readme[2,] %>%
    format_font_align("center") %>%
    format_font_style(c("underline", "italic")) %>%
    format_font_color("white") %>%
    format_hide_border_top()

  readme %>%
    table_add_row("tabulate is a thin wrapper around the Tabulate C++ library.")
  readme[3,] %>%
    format_font_style("italic") %>%
    format_font_color("magenta") %>%
    format_font_align("center")

  highlights <- tabulate_table() %>%
    table_add_row(c("Aligned,", "Formatted,", "Colorized tables."))
  readme %>%
    table_add_row(highlights)
  readme[4,] %>%
    format_font_align("center") %>%
    format_hide_border_top()

  empty_row <- tabulate_table()
  empty_row %>%
    format_hide_border();
  readme %>%
    table_add_row(empty_row)
  readme[5,] %>%
    format_hide_border_left() %>%
    format_hide_border_right()

  readme %>%
    table_add_row("Easily format and align content within cells")
  readme[6,] %>%
    format_font_align("center")

  format <- tabulate_table()
  format %>%
    table_add_row(c("Horizontal Alignment", "Left aligned", "Center aligned", "Right aligned"))
  format[1,] %>%
    format_font_align("center")
  format[1,1] %>%
    format_font_color("green") %>%
    format_column_separator(":")

  format[,2] %>%
    format_width(25) %>%
    format_font_align("left")

  format[,3] %>%
    format_width(25) %>%
    format_font_align("center")

  format[,4] %>%
    format_width(25) %>%
    format_font_align("right")

  format %>%
    table_add_row(c("Word-Wrapping algorithm taken shamelessly from StackOverflow",
                    "Long sentences automatically word-wrap based on the width of the column",
                    "Word-wrapping also plays nicely with alignment rules. For instance, this cell is center aligned.",
                    "Enforce \ncustom word-wrapping \nby embedding '\\n' \ncharacters in your cell\n content."))

  format[2,1] %>%
    format_font_align("center")
  format[2,3] %>%
    format_font_align("center")
  format[2,4] %>%
    format_font_align("right")

  format[,1] %>%
    format_width(23)
  format[,2] %>%
    format_border_left(":")

  readme %>%
    table_add_row(format)

  readme[6,] %>%
    format_border_color("green") %>%
    format_font_color("cyan") %>%
    format_font_style("underline") %>%
    format_padding_top(0) %>%
    format_padding_bottom(0)

  readme[7,] %>%
    format_hide_border_top() %>%
    format_padding_top(0)

  readme %>%
    table_add_row(empty_row)

  readme[8,] %>%
    format_hide_border_left() %>%
    format_hide_border_right()

  embedded_table <- tabulate_table()
  embedded_table %>%
    table_add_row(
    c("You can even\n embed tables...",
      tabulate_table() %>%
        table_add_row(c("within tables",
                        tabulate_table() %>%
                          table_add_row(c("within tables",
                                          tabulate_table() %>%
                                            table_add_row(c("within tables",
                                                            tabulate_table() %>%
                                                              table_add_row("within tables.. ")))))))))

  readme %>%
    table_add_row("Nested Representations")
  readme[9,] %>%
    format_font_align("center")

  readme %>%
    table_add_row(embedded_table)
  readme[10,] %>%
    format_hide_border_top() %>%
    format_border_color("white") %>%
    format_font_color("yellow")

  print(readme)

  chart <- tabulate_table()
  chart %>%
    format_font_color("white") %>%
    format_padding_left(0) %>%
    format_padding_right(0) %>%
    format_column_separator("") %>%
    format_hide_border() %>%
    format_padding_bottom(0) %>%
    format_padding_top(0)

  for(i in 1:9) {
    chart %>%
      table_add_row(c(100-i*10, rep("", 50)))
  }
  chart %>%
    table_add_row(ifelse(1:12 %% 4 == 0, 1:12, " "))
  chart %>% table_add_row("")

  chart[,1] %>%
    format_padding_left(1) %>%
    format_padding_right(1) %>%
    format_border_left(" ")

  for (i in 2:18) {
    chart[,i] %>%
      format_width(2)
  }

  chart[,3] %>%
    format_border_color("white") %>%
    format_border_left("|") %>%
    format_border_top("-");

  chart[8+1,2+1] %>% format_background_color("red")
  chart[7+1,2+1] %>% format_background_color("red")
  chart[8+1,3+1] %>% format_background_color("yellow")
  chart[7+1,3+1] %>% format_background_color("yellow")
  chart[6+1,3+1] %>% format_background_color("yellow")
  chart[8+1,6+1] %>% format_background_color("red")
  chart[7+1,6+1] %>% format_background_color("red")
  chart[6+1,6+1] %>% format_background_color("red")
  chart[5+1,6+1] %>% format_background_color("red")
  chart[8+1,7+1] %>% format_background_color("yellow")
  chart[7+1,7+1] %>% format_background_color("yellow")
  chart[6+1,7+1] %>% format_background_color("yellow")
  chart[5+1,7+1] %>% format_background_color("yellow")
  chart[4+1,7+1] %>% format_background_color("yellow")
  chart[8+1,10+1] %>% format_background_color("red")
  chart[7+1,10+1] %>% format_background_color("red")
  chart[6+1,10+1] %>% format_background_color("red")
  chart[5+1,10+1] %>% format_background_color("red")
  chart[4+1,10+1] %>% format_background_color("red")
  chart[3+1,10+1] %>% format_background_color("red")
  chart[8+1,11+1] %>% format_background_color("yellow")
  chart[7+1,11+1] %>% format_background_color("yellow")
  chart[6+1,11+1] %>% format_background_color("yellow")
  chart[5+1,11+1] %>% format_background_color("yellow")
  chart[4+1,11+1] %>% format_background_color("yellow")
  chart[3+1,11+1] %>% format_background_color("yellow")
  chart[2+1,11+1] %>% format_background_color("yellow")
  chart[1+1,11+1] %>% format_background_color("yellow")

  chart[3, 16] %>% format_background_color("red")
  chart[3, 17] %>% cell_set_text("Batch 1")
  chart[,17] %>%
    format_padding_left(1) %>%
    format_width(20)

  chart[5,16] %>% format_background_color("yellow")
  chart[5,17] %>% cell_set_text("Batch 2")

  legend <- tabulate_table()
  legend %>%
    table_add_row(c("Batch 1", "10", "40", "50", "20", "10", "50")) %>%
    table_add_row(c("Batch 2", "30", "60", "(70)", "50", "40", "30"))
  legend[1,] %>% format_font_align("center")
  legend[2,] %>% format_font_align("center")


  legend[,1] %>%
    format_font_align("right") %>%
    format_font_color("green") %>%
    format_font_background_color("grey")

  legend[,3] %>%
    format_font_color("white") %>%
    format_font_background_color("red")

  legend[2,4] %>%
    format_font_style("italic") %>%
    format_font_color("yellow")

  chart[,18] %>%
    format_width(50)

  chart[4+1,17+1] %>% cell_set_text("Cells, rows, and columns")
  chart[5+1,17+1] %>% cell_set_text("can be independently formatted.")
  chart[7+1,17+1] %>% cell_set_text("This cell is green and italic")
  chart[7+1,17+1] %>% format_color("green") %>% format_font_style("italic")
  chart[8+1,17+1] %>% cell_set_text("This one's yellow and right-aligned");
  chart[8+1,17+1] %>% format_color("yellow") %>% format_font_align("right")

  chart[10,18] %>% cell_set_text(paste0("This one's on ", paste(rep(fire_emoji(), 3), collapse = "")))
  print(chart)
  invisible(NULL)
}

fire_emoji <- function() {
  rlang::check_installed("emoji")
  unname(emoji::emoji_name[names(emoji::emoji_name) == "fire"])
}
