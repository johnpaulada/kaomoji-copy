let icons = ReactDOMRe.Style.make(
  ~width="100vw",
  ~padding="30px",
  ~cursor="pointer",
  ~display="grid",
  ~gridGap="70px",
  ~gridTemplateColumns="repeat(auto-fill, minmax(300px, 1fr))",
  ()
)

type kaomoji = {
  value: string,
  tags: list(string)
}

let iconList = [|
  { value: {js|(* ^ ω ^)|js},tags: ["happy", "blush"] },
  { value: {js|(´ ∀ ` *)|js}, tags: ["happy", "blush"] },
  { value: {js|٩(◕‿◕｡)۶|js}, tags: ["happy", "blush"] },
  { value: {js|☆*:.｡.o(≧▽≦)o.｡.:*☆|js}, tags: ["happy", "blush"] },
  { value: {js|(o^▽^o)|js}, tags: ["happy", "blush"] },
  { value: {js|(⌒▽⌒)☆|js}, tags: ["happy", "blush"] },
  { value: {js|<(￣︶￣)>|js}, tags: ["happy", "blush"] },
  { value: {js|。.:☆*:･'(*⌒―⌒*)))|js}, tags: ["happy", "blush"] },
  { value: {js|ヽ(・∀・)ﾉ|js}, tags: ["happy", "blush"] },
  { value: {js|(´｡• ω •｡`)|js}, tags: ["happy", "blush"] }
|]

let iconToElement = icon => <Icon value=(icon.value) />

let component = ReasonReact.statelessComponent("Icons");

let make = (_children) => {
  ...component,
  render: _self => {
    let iconElements = iconList |> Array.map(iconToElement);

    <div style=(icons)>
      (ReasonReact.array(iconElements))
    </div>
  }
};