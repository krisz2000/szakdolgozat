from setuptools import setup  # type:ignore

setup(
    name="SporutsML",
    packages=["SproutsML"],
    package_dir={"SproutsML": "SproutsML"},
    package_data={
        "SproutsML": [
            "SproutsML/py.typed",
            "SproutsML/sprouts.so",
        ],
    },
)
