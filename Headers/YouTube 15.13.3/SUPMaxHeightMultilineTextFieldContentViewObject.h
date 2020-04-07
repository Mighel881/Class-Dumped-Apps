//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOMultilineTextFieldContentViewObject.h>

@class NSString, QTMCollectionViewController, SUPMaxHeightMultilineTextFieldContentView, UIColor;
@protocol SUPContainerScheming;

@interface SUPMaxHeightMultilineTextFieldContentViewObject : GOOMultilineTextFieldContentViewObject
{
    _Bool _expandToBottom;
    _Bool _expandFullscreen;
    _Bool _shouldBecomeFirstResponder;
    QTMCollectionViewController *_collectionViewController;
    long long _minHeight;
    NSString *_textFieldAccessibilityLabel;
    UIColor *_textFieldBackgroundColor;
    id <SUPContainerScheming> _containerScheme;
    SUPMaxHeightMultilineTextFieldContentView *_contentView;
}

@property(nonatomic) __weak SUPMaxHeightMultilineTextFieldContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <SUPContainerScheming> containerScheme; // @synthesize containerScheme=_containerScheme;
@property(retain, nonatomic) UIColor *textFieldBackgroundColor; // @synthesize textFieldBackgroundColor=_textFieldBackgroundColor;
@property(copy, nonatomic) NSString *textFieldAccessibilityLabel; // @synthesize textFieldAccessibilityLabel=_textFieldAccessibilityLabel;
@property(nonatomic) _Bool shouldBecomeFirstResponder; // @synthesize shouldBecomeFirstResponder=_shouldBecomeFirstResponder;
@property(nonatomic) _Bool expandFullscreen; // @synthesize expandFullscreen=_expandFullscreen;
@property(nonatomic) _Bool expandToBottom; // @synthesize expandToBottom=_expandToBottom;
@property(nonatomic) long long minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) __weak QTMCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (Class)contentViewClass;

@end
