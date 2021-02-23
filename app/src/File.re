let read = (send, path, success, failure) => {
  Js.Promise.(
    RNFS.readFile(~path)
    |> then_(x => success(x) |> send |> resolve)
    |> catch(error => failure(error) |> send |> resolve)
    |> ignore
  );
};

let write = (send, path, contents, success, failure) => {
  Js.Promise.(
    RNFS.writeFile(~path, ~contents)
    |> then_(x => success(x) |> send |> resolve)
    |> catch(error => failure(error) |> send |> resolve)
    |> ignore
  );
};
