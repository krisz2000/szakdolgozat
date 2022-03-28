from build import sprouts

strings = set()


def recurse(pos):
    pos.canonize()
    if pos.is_terminal_position():
        return
    string = pos.export_to_string()
    if string in strings:
        return
    strings.add(string)
    print(string)
    pos.compute_children()
    for child in pos.get_children():
        new_pos = sprouts.Position(child)
        recurse(new_pos)


pos = sprouts.Position(sprouts.Position.start_position(2, 0))
recurse(pos)
