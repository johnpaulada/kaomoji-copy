[@bs.val] external querySelector : string => Dom.element = "document.querySelector";
[@bs.val] external execCommand : string => unit = "document.execCommand";

let insert: (Dom.element, string) => unit = [%raw (input, text) => "input.value = input.value + text"];
let select: Dom.element => unit = [%raw input => "input.select()"];

let copyText = text => {
  let input = querySelector("#clipboard");
  insert(input, text);
  select(input);
  execCommand("copy");
}