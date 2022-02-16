from distutils.core import setup

setup(
    name="SporutsML",
    packages=["SproutsML"],
    package_dir={"SproutsML": "SproutsML"},
    package_data={"SproutsML": ["py.typed"]},
)
