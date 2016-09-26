type id;

type dom;

external dom : dom = "document" [@@bs.val];

external get_by_id : dom => string => id = "getElementById" [@@bs.send];

external create_element : dom => string => id = "createElement" [@@bs.send];

external create_text_node : dom => string => id = "createTextNode" [@@bs.send];

external append_child : id => id => unit = "appendChild" [@@bs.send];

let main_object = get_by_id dom "main";

let new_element = create_element dom "p";

let text = create_text_node dom "This paragraph was added with reason!";

append_child new_element text;

append_child main_object new_element;

print_endline "Hi from reason in javascript!";
