//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSArray, NSString, NSTimer;

@interface MeteorTextView : UITextView
{
    _Bool _touchesMoved;
    _Bool _longPressedSuccessfully;
    CDUnknownBlockType _linkTapHandler;
    CDUnknownBlockType _longPressHandler;
    CDUnknownBlockType _quoteHandler;
    CDUnknownBlockType _tableTapHandler;
    CDUnknownBlockType _spoilerTapHandler;
    NSArray *_linkRanges;
    NSString *_selectedValue;
    NSString *_selectedType;
    NSTimer *_longPressTimer;
    struct _NSRange _highlightedRange;
}

@property(nonatomic) _Bool longPressedSuccessfully; // @synthesize longPressedSuccessfully=_longPressedSuccessfully;
@property(retain, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(nonatomic) _Bool touchesMoved; // @synthesize touchesMoved=_touchesMoved;
@property(copy, nonatomic) NSString *selectedType; // @synthesize selectedType=_selectedType;
@property(retain, nonatomic) NSString *selectedValue; // @synthesize selectedValue=_selectedValue;
@property(nonatomic) struct _NSRange highlightedRange; // @synthesize highlightedRange=_highlightedRange;
@property(retain, nonatomic) NSArray *linkRanges; // @synthesize linkRanges=_linkRanges;
@property(copy, nonatomic) CDUnknownBlockType spoilerTapHandler; // @synthesize spoilerTapHandler=_spoilerTapHandler;
@property(copy, nonatomic) CDUnknownBlockType tableTapHandler; // @synthesize tableTapHandler=_tableTapHandler;
@property(copy, nonatomic) CDUnknownBlockType quoteHandler; // @synthesize quoteHandler=_quoteHandler;
@property(copy, nonatomic) CDUnknownBlockType longPressHandler; // @synthesize longPressHandler=_longPressHandler;
@property(copy, nonatomic) CDUnknownBlockType linkTapHandler; // @synthesize linkTapHandler=_linkTapHandler;
- (void).cxx_destruct;
- (void)quoteMenuItemTapped:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)longPressTimePassed:(id)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setMarkdown:(id)arg1 withAttributes:(id)arg2;
- (void)setMarkdown:(id)arg1;
- (void)setHTML:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)findLinks;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
