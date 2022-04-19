from setuptools import setup  # type:ignore

setup(
    name="SporutsML",
    packages=["SproutsML"],
    package_dir={"SproutsML": "SproutsML"},
    package_data={
        "SproutsML": ["py.typed", "build/sprouts.cpython-39-x86_64-linux-gnu.so"]
    },
)
