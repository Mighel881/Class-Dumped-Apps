//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor;

@interface PSPDFNoteAnnotationStyleView : UIView
{
    NSString *_selectedIconName;
    UIColor *_selectedColor;
    NSArray *_iconButtons;
    NSArray *_colorButtons;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(copy, nonatomic) NSArray *colorButtons; // @synthesize colorButtons=_colorButtons;
@property(copy, nonatomic) NSArray *iconButtons; // @synthesize iconButtons=_iconButtons;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(copy, nonatomic) NSString *selectedIconName; // @synthesize selectedIconName=_selectedIconName;
- (void).cxx_destruct;
- (void)updateColorButtons;
- (void)updateIconButtons;
- (void)changeColorAction:(id)arg1;
- (void)changeIcon:(id)arg1;
- (void)layoutSubviews;
- (id)createOptionsStackViewWithViews:(id)arg1;
- (id)iconNames;
- (id)initWithFrame:(struct CGRect)arg1;

@end
