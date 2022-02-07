test_that("simple table", {
  table <- tabulate_table()
  table_add_row(table, c("hello", "world"))
  table_add_row(table, c("b", "a"))

  expect_snapshot(print(table))
})

test_that("can index tables", {

  table <- tabulate_table()
  table_add_row(table, c("hello", "world"))
  table_add_row(table, c("b", "a"))

  expect_s3_class(table[,], "tabulate_table")
  expect_s3_class(table[1,], "tabulate_row")
  expect_s3_class(table[,1], "tabulate_column")
  expect_s3_class(table[1,1], "tabulate_cell")
  expect_error(table[])
  expect_error(table[,,])
  expect_error(table[,,1])
})

test_that("can nest tables", {

  animal <- tabulate_table()
  table_add_row(animal, "Animal")

  animal_properties <- tabulate_table()
  table_add_row(animal_properties, "+age: Int")
  table_add_row(animal_properties, "+gender: String")

  animal_methods <- tabulate_table()
  table_add_row(animal_methods, "+isMammal()")
  table_add_row(animal_methods, "+mate()")

  table_add_row(animal, animal_properties)
  table_add_row(animal, animal_methods)

  expect_snapshot(print(animal))
})
