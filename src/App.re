let bodyContainer = ReactDOMRe.Style.make(
  ~width="auto",
  ~display="inline-block",
  ~minHeight="100vh",
  ~backgroundColor="#FAFAFA",
  ()
)

let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: _self =>
    <div style=(bodyContainer)>
      <Header />
      <Body />
    </div>,
};
