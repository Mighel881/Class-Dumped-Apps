//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOAlertView.h"

#import "ASTThemable-Protocol.h"

@class NSObject, NSString, UIColor;
@protocol ASTThemeContainer;

@interface ASTThemableAlertView : GOOAlertView <ASTThemable>
{
    UIColor *_themableTitleColor;
    UIColor *_themableSubTitleColor;
    UIColor *_themableHeaderBackgroundColor;
    UIColor *_themableDialogBackgroundColor;
    UIColor *_themableActionButtonTitleColor;
    UIColor *_themableActionButtonIconColor;
    NSObject<ASTThemeContainer> *_host;
}

+ (id)defaultActionButtonIconColor;
+ (id)defaultActionButtonTitleColor;
+ (id)defaultDialogBackgroundColor;
+ (id)defaultHeaderBackgroundColor;
+ (id)defaultSubTitleColor;
+ (id)defaultTitleColor;
@property(nonatomic) __weak NSObject<ASTThemeContainer> *host; // @synthesize host=_host;
@property(retain, nonatomic) UIColor *themableActionButtonIconColor; // @synthesize themableActionButtonIconColor=_themableActionButtonIconColor;
@property(retain, nonatomic) UIColor *themableActionButtonTitleColor; // @synthesize themableActionButtonTitleColor=_themableActionButtonTitleColor;
@property(retain, nonatomic) UIColor *themableDialogBackgroundColor; // @synthesize themableDialogBackgroundColor=_themableDialogBackgroundColor;
@property(retain, nonatomic) UIColor *themableHeaderBackgroundColor; // @synthesize themableHeaderBackgroundColor=_themableHeaderBackgroundColor;
@property(retain, nonatomic) UIColor *themableSubTitleColor; // @synthesize themableSubTitleColor=_themableSubTitleColor;
@property(retain, nonatomic) UIColor *themableTitleColor; // @synthesize themableTitleColor=_themableTitleColor;
- (void).cxx_destruct;
- (void)updateColorStyle;
- (void)applyTheme:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)show:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

