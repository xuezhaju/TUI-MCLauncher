# DOM 板块

## 定义
- 该模块定义了一组分层的 ftxui::Element。元素管理布局，并且可以响应终端尺寸变化。请注意以下示例，其中此模块用于创建具有多个运算符的简单布局
- Element：元素/成分 (n.)

## Example
```cpp
namespace ftxui {
    ...
 
// Define the document
Element document = vbox({
  text("The window") | bold | color(Color::Blue),
  gauge(0.5)
  text("The footer")
});
 
// Add a border, by calling the `ftxui::border` decorator function.
document = border(document);
 
// Add another border, using the pipe operator.
document = document | border.
 
// Add another border, using the |= operator.
document |= border
 
...
}
``` 

## 组件

### text 
- 最简单的显示文本的组件
- text("qwq")

### vtext
- 竖直输出文字
- vtext("qwq")

### window
- ftxui::window 是一个 ftxui::border，但带有一个额外的标题。要在一个元素周围添加一个窗口，请将其包装并指定一个字符串作为标题
- window("qwq", text("qwq"))
