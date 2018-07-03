let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: self =>
    <div>
      (ReasonReact.stringToElement("test"))
    </div>,
};
