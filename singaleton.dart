import 'dart:collection';

import 'dart:math';

class MySingletonClass {
  MySingletonClass._();
  static MySingletonClass? _instance;
  static MySingletonClass getInstance() {
    if (_instance != null) {
      return _instance!;
    }
    _instance = MySingletonClass._();
    return _instance!;
  }
}

main() {
  // final myclass1 = MySingletonClass.getInstance();
  // final myclass2 = MySingletonClass.getInstance();
  // print(myclass1 == myclass2);
  // List<int> myList = [1,2,3,5,6];
  // print(myList);

  // String temp = "temp";
  // print(temp == temp);
  // print(identical(temp, temp));

  // print(LinkedHashSet.from(["a", "b", "11", "11", "c", "d", "a"]));
  // var c = Check()..x=2..y=4..height=4..width=4;
  // print(c.locate);

  // var a = 'Dart';
  // var b;
  // var next = b ?? a;
  // print('next learning language: $next');
  // var c;
  // next ??= c;
  // print("next again: $next");
  // String d;
  // var l = d?.length;
  // print('lenght $l');

  // print(setFact(6));

  // onSet.then((value) => print(value));
  // onSet.then(print).then((value) => print('Go!'));
  // onSet.catchError(() => print("oops"));

  print(create());
}

String create() {
  var order = fetchLanguage();
  return "Your language: $order";
}

Future<String> fetchLanguage() {
  return Future.delayed(Duration(seconds: 4), () => "Dart");
}

Future get onSet {
  var dur = Duration(seconds: 1);
  var onSec = Future.delayed(dur);
  return onSec.then((value) {
    return "yippeee";
  });
}

setFact(int num) {
  if (num <= 0) {
    return 1;
  }
  return num * setFact(num - 1);
}

class Coordinates {
  int x = 0;
  int y = 0;
  double calcIst(Coordinates other) {
    var dx = other.x - x;
    var dy = other.y - y;
    return sqrt(dx * dx + dy * dy);
  }
}

class X {
  int width = 0;
  int height = 0;
  int get locate => height * width;
}

class Check extends X with Coordinates {}
