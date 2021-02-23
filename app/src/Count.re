open Types;

//TODO: feel like this bit should be in Http
let errorMessage = x => Obj.magic(x);

//TODO: would be nice to kill self... at the very least make it just send
let load = self => {
  ReactUpdate.(
    Http.get(
      self.send,
      "http://localhost:8080/counter",
      text => RequestSuccess(int_of_string(text)),
      error => RequestFailure(errorMessage(error)),
    )
  );
  None;
};

let increment = self => {
  ReactUpdate.(
    Http.post(
      self.send,
      "http://localhost:8080/increment",
      text => RequestSuccess(int_of_string(text)),
      error => RequestFailure(errorMessage(error)),
    )
  );
  None;
};

let decrement = self => {
  ReactUpdate.(
    Http.post(
      self.send,
      "http://localhost:8080/decrement",
      text => RequestSuccess(int_of_string(text)),
      error => RequestFailure(errorMessage(error)),
    )
  );
  None;
};

let load2 = self => {
  ReactUpdate.(
    File.read(
      self.send,
      RNFS.documentDirectoryPath ++ "/moo.txt",
      text => RequestSuccess(int_of_string(text)),
      error => RequestFailure(errorMessage(error)),
    )
  );
  None;
};

let increment2 = self => {
  ReactUpdate.(
    File.write(
      self.send,
      RNFS.documentDirectoryPath ++ "/moo.txt",
      "contents",
      _ => RequestSuccess(int_of_string("0")),
      error => RequestFailure(errorMessage(error)),
    )
  );
  None;
};

// AKA: Cmd.batch-
//let incrementBoth = self => {
let incrementBoth = _ => {
  None//      increment(self.send);
      //  ReactUpdate.(
      //    {
      ; //    }
 //      increment2(self.send);
      //  );
};
