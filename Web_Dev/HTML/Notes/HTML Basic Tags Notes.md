# **HTML (Hypertext Markup Language)**

### **_Markup Language_** have tags through which we may define elements, attributes of the hypertext.

## **Structure of HTML**

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <!-- About the Document -->
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <meta
      name="description"
      content=" Description (What the page is all about)"
    />
    <title>Title of the Document/Page</title>
  </head>
  <body>
    <!-- Contents of the Web Page -->
    <h1></h1>
  </body>
</html>
```

---

# **Tags in HTML**

## 1. **HTML Heading Tags**

HTML provides 6 levels of headings. These tags are used to define headings in a web page, from the most important (`<h1>`) to the least important (`<h6>`).

| Tag    | Purpose                                              |
| ------ | ---------------------------------------------------- |
| `<h1>` | Main heading (used once per page, usually the title) |
| `<h2>` | Subheading (sections under `<h1>`)                   |
| `<h3>` | Sub-subheading (sections under `<h2>`)               |
| `<h4>` | Smaller subheadings, more detailed sections          |
| `<h5>` | Even smaller sections                                |
| `<h6>` | Least important heading, rarely used                 |

### Example:

```html
<h1>This is H1</h1>
<h2>This is H2</h2>
<h3>This is H3</h3>
<h4>This is H4</h4>
<h5>This is H5</h5>
<h6>This is H6</h6>
```

**Tip:** Always use headings in order for accessibility and SEO best practices.

## 2. **HTML Paragraph Tag**

The `<p>` tag defines a **paragraph** in HTML. It is used to group blocks of text into readable sections, where spaces and line breaks are rendered as a single space

| Tag   | Purpose                                                                         |
| ----- | ------------------------------------------------------------------------------- |
| `<p>` | Defines a block of text as a paragraph. Adds space before and after by default. |

---

### **Example**

```html
<p>This is the first paragraph of my web page. It introduces the topic.</p>

<p>
  Hi! Welcome to HTML Paragraph Tag. Here each line break or spaces are rendered
  as a single space. Thank You.
</p>
```

Output:

```
This is the first paragraph of my web page. It introduces the topic.

Hi! Welcome to HTML Paragraph Tag. Here each line break or spaces are rendered as a single space. Thank You.
```

## 3. **HTML `<pre>` Tag (Preformatted Text)**

The `<pre>` tag is used to **display preformatted text**, meaning:

- Text inside it preserves **spaces**, **tabs**,**indentation** and **line breaks**.
- It is displayed in a **monospaced (fixed-width) font**, just like code.

---

| Tag     | Purpose                                                                                                         |
| ------- | --------------------------------------------------------------------------------------------------------------- |
| `<pre>` | Defines preformatted text. Preserves whitespace, indentation, and line breaks exactly as written in the source. |

---

### **Example**

```html
<pre>
Name:   Divyansh
Course: B.Tech CSE
Year:   2nd

        My name is Divyansh.
</pre>
```

Output:

```
Name:   Divyansh
Course: B.Tech CSE
Year:   2nd

        My name is Divyansh.
```

---

**Tip:**  
Use `<pre>` when you want to:

- Display code or formatted text without extra styling.
- Preserve layout (like ASCII art, poetry, or logs).

  **Note:** Don’t use `<pre>` for large blocks of styled content — it’s best for technical or structural formatting.

## 4. **`<hr>` — Horizontal Rule**

The `<hr>` tag is used to insert a **horizontal line** (a thematic break) across the page.  
It's often used to separate sections of content.

| Tag    | Purpose                                                                                               |
| ------ | ----------------------------------------------------------------------------------------------------- |
| `<hr>` | Creates a horizontal line across the page. Often used to divide content or indicate a thematic break. |

### **Example**

```html
<h3>Hi!</h3>
<hr />
<h3>Hello</h3>
<hr />
```

**Note:**

- It is a **self-closing tag** (no closing `</hr>` needed).
- Can be styled with CSS:

```html
<hr style="border: 1px solid black; width: 50%;" />
```

---

## 5. **`<br>` — Line Break**

The `<br>` tag is used to insert a **single line break**, without starting a new paragraph.

| Tag    | Purpose                                      |
| ------ | -------------------------------------------- |
| `<br>` | Inserts a line break (like pressing "Enter") |

### **Example**

```html
<h3>Hi!</h3>
<br />
<h3>Hello</h3>
<br />
<p>Bye</p>
```

**Note:**

- Also a **self-closing tag**.
- Useful for poetry, addresses, or breaking lines **without extra spacing** like `<p>` would.

---

### Difference:

| Tag    | Action                                    |
| ------ | ----------------------------------------- |
| `<hr>` | Draws a horizontal line                   |
| `<br>` | Breaks the line, continues same paragraph |

---


## **Text Formatting Tags in HTML**

### 7. **`<b>` — Bold Text**

**Purpose:** Makes text **visually bold** without any added importance.

#### Syntax

```html
<b>This is bold</b>
```

#### Example Output

**This is bold**

---

### 8. **`<strong>` — Strong Importance**

**Purpose:** Makes text **bold** and gives it **semantic importance** (for screen readers or search engines).

#### Syntax

```html
<strong>This is strong</strong>
```

#### Example Output

**This is strong**

---

### 9. **`<i>` — Italic Text**

**Purpose:** Makes text _italic_, usually for visual styling or foreign words.

#### Syntax

```html
<i>This is italic</i>
```

#### Example Output

_This is italic_

---

### 10. **`<em>` — Emphasis**

**Purpose:** Emphasizes the text. Makes it _italic_ and gives it **semantic importance** (like spoken stress).

#### Syntax

```html
<em>This is emphasized</em>
```

#### Example Output

_This is emphasized_

---

### 11. **`<u>` — Underline Text**

**Purpose:** Underlines the text. This is purely **visual** and not semantic.

#### Syntax

```html
<u>This is underlined</u>
```

#### Example Output

<u>This is underlined</u>

---

### 12. **`<mark>` — Highlighted Text**

**Purpose:** Highlights text with a yellow background (by default).  
It’s useful for **search results**, **important highlights**, or to **draw attention**.

#### Syntax

```html
<mark>This is highlighted text</mark>
```

#### Example Output

<mark>This is highlighted text</mark>

---

### 13. **`<del>` — Deleted/Struck-Out Text**

**Purpose:** Represents **deleted or removed** content.  
Typically displayed with a **strikethrough**. Useful in **document revisions**, **comparisons**, or **edits**.

#### Syntax

```html
<del>This text was removed</del>
```

#### Example Output

<del>This text was removed</del>

## **💡 Combining HTML Text Formatting Tags**

You can **nest** multiple tags together to style text **visually** and **semantically**.  
This is useful for conveying **importance**, **emphasis**, and **styling** all at once.

---

### **1. `<strong>` + `<em>`**

Emphasized + Important → _Italic and bold_ (with semantic meaning)

```html
<strong><em>This is important and emphasized</em></strong>
```

**Output:**  
<strong><em>This is important and emphasized</em></strong>

---

### **2. `<b>` + `<i>`**

Visual bold + italic (no semantic meaning)

```html
<b><i>This is bold and italic</i></b>
```

**Output:**  
<b><i>This is bold and italic</i></b>

---

### **3. `<u>` + `<strong>`**

Underlined + strong emphasis (bold)

```html
<u><strong>Important and underlined</strong></u>
```

**Output:**  
<u><strong>Important and underlined</strong></u>

---

### **4. `<mark>` + `<em>` + `<strong>`**

Highlighted + italic + bold — very emphasized and visually highlighted

```html
<mark
  ><strong><em>Key Point</em></strong></mark
>
```

**Output:**  
<mark><strong><em>Key Point</em></strong></mark>

---

### **5. `<del>` + `<em>`**

Struck-through and italic — often used to show removed or outdated emphasis

```html
<del><em>Old Pricing Plan</em></del>
```

**Output:**  
<del><em>Old Pricing Plan</em></del>

---

### **6. `<u>` + `<mark>`**

Underlined and highlighted — eye-catching but not semantically emphasized

```html
<mark><u>Read this carefully</u></mark>
```

**Output:**  
<mark><u>Read this carefully</u></mark>

---

## 14. HTML `<img>` Tag – Complete Explanation

The `<img>` tag is used to embed images into a web page.
It's a **self-closing** tag that requires at least two attributes:

- `src` – the image URL or file path
- `alt` – the alternative text shown when the image cannot be displayed

---

### **Syntax**

```html
<img src="URL" alt="Description" />
```

---

### **Purpose**

| Tag     | Purpose                                    |
| ------- | ------------------------------------------ |
| `<img>` | Displays an image using a file path or URL |

---

### **Absolute vs Relative URL**

**Absolute URL:**

```html
<img
  src="https://m.media-amazon.com/images/I/71O-Os4GilL._UF1000,1000_QL80_.jpg"
  alt="100 Days Challenge"
/>
```

**Relative URL:**

```html
<img src="images/100days.jpg" alt="100 Days Challenge" />
```

---

### **Examples**

#### 1. Basic Image

```html
<img
  src="https://m.media-amazon.com/images/I/71O-Os4GilL._UF1000,1000_QL80_.jpg"
  alt="100 Days Challenge"
/>
```

#### 2. With Width and Height

```html
<img src="..." width="300" height="300" alt="100 Days Challenge" />
```

#### 3. With Tooltip (title)

```html
<img src="..." alt="100 Days Challenge" title="100 Days UI Challenge" />
```

#### 4. Lazy Loading

```html
<img src="..." loading="lazy" alt="100 Days Challenge" />
```

#### 5. Broken Image Example

```html
<img src="invalid.jpg" alt="Image not found" />
```

---

### **Common Attributes**

| Attribute        | Description                                                 |
| ---------------- | ----------------------------------------------------------- |
| `src`            | The image path or URL                                       |
| `alt`            | Fallback text and screen reader accessibility               |
| `width`          | Sets the width of the image                                 |
| `height`         | Sets the height of the image                                |
| `title`          | Tooltip text shown on hover                                 |
| `loading`        | Lazy or eager image loading (`lazy`, `eager`)               |
| `decoding`       | Decoding mode (`async`, `sync`, `auto`)                     |
| `referrerpolicy` | Controls referrer data sent (`no-referrer`, `origin`, etc.) |

---

### **Best Practices**

- Use `alt` for screen readers and fallback
- Use `loading="lazy"` to speed up loading
- Specify `width` and `height` to reduce layout shift
- Use compressed/optimized images
- Avoid using large or raw images directly

---

### **Accessibility Tip**

> Always write meaningful `alt` text so users with screen readers can understand the image's purpose.

---


