let headerContainer = ReactDOMRe.Style.make(
  ~minWidth="100vw",
  ~height="10vh",
  ~backgroundColor="#333",
  ~backgroundSize="cover",
  ~backgroundPosition="center",
  ~backgroundAttachment="fixed",
  ~display="flex",
  ~justifyContent="center",
  ~alignItems="center",
  ()
)

let titleText = ReactDOMRe.Style.make(
  ~color="#FAFAFA",
  ~fontSize="2em",
  ~fontFamily="Montserrat, sans-serif",
  ()
)

let component = ReasonReact.statelessComponent("Header");

let make = (_children) => {
  ...component,
  render: _self =>
    <header>
      <div style=(headerContainer)>
        <h1 style=(titleText)>(ReasonReact.string("Kaomoji Copy"))</h1>
      </div>
    </header>
};