//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface _TtC10SmartGlass10SGTextView : UITextView
{
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: placeholderTextColor
    // Error parsing type: , name: fontName
    // Error parsing type: , name: placeholderFontName
    // Error parsing type: , name: placeholderFont
}

- (CDUnknownBlockType).cxx_destruct;
- (void)awakeFromNib;
- (void)textViewDidChange:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *placeholderFontName; // @synthesize placeholderFontName;
@property(nonatomic, copy) NSString *fontName; // @synthesize fontName;
@property(nonatomic, retain) UIColor *placeholderTextColor; // @synthesize placeholderTextColor;
@property(nonatomic, copy) NSString *placeholder; // @synthesize placeholder;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double borderWidth;
@property(nonatomic, retain) UIColor *borderColor;
@property(nonatomic) double lineFragmentPadding;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(nonatomic, copy) NSString *text;

@end

