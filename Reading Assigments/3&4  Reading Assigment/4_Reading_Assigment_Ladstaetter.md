# 4 Reading Assigment Ladsätter

## 1 Box Model 

### 1.1 Block elements have which kind of characteristics?
A: Block elements are elements that take up the full width available, and has a line break before and after the element.
### 1.2 Inline elements have which kind of characteristics?
A:Surronding Elements move only to the left and to the right.
### 1.3 What is the margin of a HTML element? Where can one find it?
A: The margin is the space between the border and the surrounding elements. You can find it in the CSS file.
### 1.4 What is the padding of a HTML element? Where can one find it?
A: The padding is the space between the border and the content. You can find it in the CSS file.

## 2 Classes and ID's

### 2.1 Write down a sertan selctor for a class
A:   
```css
.content{

}
```
### 2.2 Write down a selector for a certain html element of a certain class
A:   
```css
div.content{

}
```
### 2.3 Write down a selector for a certain id
A:   
```css
#content{

}
```
### 2.4 Write down a selector for a certain HTML element of a certain id
A:
```css
div#content{

}
```
### 2.5 Write down the start tag of a certain HTML element with a specific class.
A:
```html
<div class="content">
```
### 2.6 Write down the start tag of a certain HTML element with a specific id.
A:
```html
<div id="content">
```
### 2.7 Do classes select one or more elements?
A: Classes select one or more elements.If you don't assign the class they of course don't select anything.
### 2.8 Do ids select one or more elements?
A: Ids select only one element. This is why you can jump around on your page using IDs.
### 2.9 How often can classes / ids occur on one page?
A: Classes can occur as often as you want. Ids can only occur once on a page.


## 3 Floating

### 3.1 Write down the CSS declaration to make a HTML element float to the left
A:
```css
.content{
    float: left;
}
```
### 3.2 Prevent a HTML element from floating around another (for a specific direction, for all directions)
A:
Für eine bestimmte Richtung:
```css
.content{
    clear: left;
}
```
Für alle Richtungen:
```css
.content{
   clear: both;
}

```