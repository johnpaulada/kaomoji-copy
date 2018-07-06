let component = ReasonReact.statelessComponent("Body");

let make = (_children) => {
  ...component,
  render: _self =>
    <section>
      <div>
        <div></div>
        <input id="clipboard" type_="text" />
        <Icons />
      </div>
    </section>
};