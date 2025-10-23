cc_library(
	name="factories",
	hdrs = [
		"include/meal_factory.h",
	],
	srcs = [
		"src/american_meal_factory.h",
		"src/brazilian_meal_factory.h",
		"src/italian_meal_factory.h",
		"src/meal_factory.cc",
	],
	deps=[
		"//src/main_course",
		"//src/dessert",
	],
	visibility=["//visibility:public"],
	copts=["-Isrc/factories/include"],
)
