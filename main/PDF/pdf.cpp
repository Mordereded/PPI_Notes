#include <iostream>


// Создать документ
auto doc = MakeObject<Document>();
auto pages = doc->get_Pages();
pages->Add();
// Нумерация страниц начинается с 1
auto page = pages->idx_get(1);
auto paragraps = page->get_Paragraphs();	
// Создать текстовый фрагмент
auto text = MakeObject<TextFragment>(u"PDF API for C++");
auto ts = text->get_TextState();
// Установить состояние текста
ts->set_FontSize(16);
ts->set_FontStyle(FontStyles::Italic);
// Добавить в абзац
paragraps->Add(text);
// Добавить текст в абзац
paragraps->Add(MakeObject<TextFragment>(u"This example shows how to create a PDF with text using Aspose.PDF for C++."));
// Сохранить PDF-файл
doc->Save(u"Example1.pdf");ы