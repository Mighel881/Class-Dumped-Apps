//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFNonAnimatingTableViewCell.h>

#import <PSPDFKitUI/PSPDFThemeObserver-Protocol.h>

@class NSString, PSPDFAnnotation, UILabel;

@interface PSPDFAnnotationCell : PSPDFNonAnimatingTableViewCell <PSPDFThemeObserver>
{
    _Bool _disabledStyle;
    UILabel *_nameLabel;
    UILabel *_dateAndUserLabel;
    PSPDFAnnotation *_annotation;
}

+ (double)heightForAnnotation:(id)arg1 inTableView:(id)arg2;
+ (struct CGRect)constrainedRectForTableView:(id)arg1;
+ (void)initialize;
+ (id)dateAndUserStringForAnnotation:(id)arg1;
@property(retain, nonatomic) PSPDFAnnotation *annotation; // @synthesize annotation=_annotation;
@property(nonatomic, getter=isDisabledStyle) _Bool disabledStyle; // @synthesize disabledStyle=_disabledStyle;
@property(retain, nonatomic) UILabel *dateAndUserLabel; // @synthesize dateAndUserLabel=_dateAndUserLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)applyTheme:(id)arg1;
- (void)updateImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
