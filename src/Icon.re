let iconStyle = ReactDOMRe.Style.make(
  ~textAlign="center",
  ~fontSize="2em",
  ~padding="10px",
  ()
)

let component = ReasonReact.statelessComponent("Icon");

let onButtonClick = value => _ => {
  Clipboard.copyText(value);
}

let make = (~value, _children) => {
  ...component,
  render: _self => {
    <a className="hvr-buzz" onClick=(onButtonClick(value)) style=(iconStyle)>
      (ReasonReact.string(value))
    </a>
  }
};