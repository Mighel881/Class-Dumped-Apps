//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCTextParser : NSObject
{
    struct Handle<std::__1::shared_ptr<PDFC::TextParser>, std::__1::shared_ptr<PDFC::TextParser>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)textLines;
- (int)textIndexToCharIndex:(int)arg1;
- (int)charIndexToTextIndex:(int)arg1;
- (int)charIndexAt:(struct CGPoint)arg1 tolerance:(float)arg2;
- (id)wordsAt:(struct CGPoint)arg1 tolerance:(float)arg2;
- (id)wordAt:(struct CGPoint)arg1;
- (id)textRectsBetweenPoints:(struct CGPoint)arg1 right:(struct CGPoint)arg2;
- (id)textRectsBoundedByRect:(struct CGRect)arg1 followTextFlow:(_Bool)arg2 includeFullWords:(_Bool)arg3 markupRects:(_Bool)arg4;
- (id)textRectsForRange:(int)arg1 length:(int)arg2;
- (id)textRectAt:(struct CGPoint)arg1 tolerance:(float)arg2;
- (id)textRects;
- (int)count;
- (id)getTextForRanges:(id)arg1;
- (id)getTextForRects:(id)arg1;
- (id)getTextForRect:(struct CGRect)arg1;
- (id)textForRange:(int)arg1 length:(int)arg2;
- (id)links;
- (id)text;
- (id)initWithCpp:(const shared_ptr_4ac50792 *)arg1;

@end
